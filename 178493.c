static pvscsi_io_write(void *opaque, hwaddr uint64_t val, unsigned size) PVSCSIState * s = opaque ; switch ( addr )  s -> reg_interrupt_status &= ~val; s -> reg_interrupt_enabled = val; pvscsi_process_io ( s ); static pvscsi_process_io(PVSCSIState *s) PVSCSIRingReqDesc descr ; hwaddr next_descr_pa ; while ( ( next_descr_pa = pvscsi_ring_pop_req_descr ( & s -> rings ) ) != 0 )  static pvscsi_ring_pop_req_descr(PVSCSIRingInfo *mgr) uint32_t ready_ptr = RS_GET_FIELD ( mgr , reqProdIdx ) ; if ( ready_ptr != mgr -> consumed_ptr )  uint32_t next_ready_ptr = mgr -> consumed_ptr ++ & mgr -> txr_len_mask ; uint32_t next_ready_page = next_ready_ptr / PVSCSI_MAX_NUM_REQ_ENTRIES_PER_PAGE ; uint32_t inpage_idx = next_ready_ptr % PVSCSI_MAX_NUM_REQ_ENTRIES_PER_PAGE ; return mgr -> req_ring_pages_pa [ next_ready_page ] + inpage_idx * sizeof ( PVSCSIRingReqDesc ) ; return 0 ; pvscsi_process_request_descriptor ( s , & descr ); static pvscsi_process_request_descriptor(PVSCSIState struct PVSCSIRingReqDesc *descr) SCSIDevice * d ; PVSCSIRequest * r = pvscsi_queue_pending_descriptor ( s , & d , descr ) ; static PVSCSIRequest pvscsi_queue_pending_descriptor(PVSCSIState *s, SCSIDevice struct PVSCSIRingReqDesc *descr) PVSCSIRequest * pvscsi_req ; uint8_t lun ; pvscsi_req = g_malloc0 ( sizeof ( * pvscsi_req ) ); pvscsi_req -> dev = s; pvscsi_req -> req = * descr; pvscsi_req -> cmp . context = pvscsi_req -> req . context; * d = pvscsi_device_find ( s , descr -> bus , descr -> target , descr -> lun , & lun ); static pvscsi_device_find(PVSCSIState *s, int channel, int uint8_t *requested_lun, uint8_t *target_lun) if ( requested_lun [ 0 ] || requested_lun [ 2 ] || requested_lun [ 3 ] || requested_lun [ 4 ] || requested_lun [ 5 ] || requested_lun [ 6 ] || requested_lun [ 7 ] || ( target > PVSCSI_MAX_DEVS ) )  return NULL ; * target_lun = requested_lun [ 1 ]; return scsi_device_find ( & s -> bus , channel , target , * target_lun ) ; if ( * d )  pvscsi_req -> lun = lun; return pvscsi_req ; if ( ! d )  r -> cmp . hostStatus = BTSTAT_SELTIMEO; pvscsi_complete_request ( s , r ); static pvscsi_complete_request(PVSCSIState *s, PVSCSIRequest *r) assert ( ! r -> completed ); 