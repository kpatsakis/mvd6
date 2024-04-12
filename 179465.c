static void xhci_doorbell_write(void *ptr, hwaddr uint64_t val, unsigned size) XHCIState * xhci = ptr ; if ( ! xhci_running ( xhci ) )  static inline int xhci_running(XHCIState *xhci) return ! ( xhci -> usbsts & USBSTS_HCH ) && ! xhci -> intr [ 0 ] . er_full ; reg >>= 2; if ( reg == 0 )  if ( val == 0 )  xhci_process_commands ( xhci ); static void xhci_process_commands(XHCIState *xhci) XHCITRB trb ; TRBType type ; XHCIEvent event = { ER_COMMAND_COMPLETE , CC_SUCCESS } ; dma_addr_t addr ; unsigned int i , slotid = 0 ; if ( ! xhci_running ( xhci ) )  xhci -> crcr_low |= CRCR_CRR; while ( type = xhci_ring_fetch ( xhci , & xhci -> cmd_ring , & trb , & addr ) )  event . ptr = addr; switch ( type )  for (i = 0; i < xhci->numslots; i++) if ( ! xhci -> slots [ i ] . enabled )  if ( i >= xhci -> numslots )  event . ccode = CC_NO_SLOTS_ERROR; slotid = i + 1; event . ccode = xhci_enable_slot ( xhci , slotid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_disable_slot ( xhci , slotid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_address_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_BSR ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_configure_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_DC ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_evaluate_slot ( xhci , slotid , trb . parameter ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_stop_ep ( xhci , slotid , epid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_reset_ep ( xhci , slotid , epid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; unsigned int streamid = ( trb . status >> 16 ) & 0xffff ; event . ccode = xhci_set_ep_dequeue ( xhci , slotid , epid , streamid , trb . parameter ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_reset_slot ( xhci , slotid ); event . ccode = xhci_get_port_bandwidth ( xhci , trb . parameter ); event . type = 48; event . length = 0x3025; uint32_t chi = trb . parameter >> 32 ; uint32_t clo = trb . parameter ; uint32_t val = xhci_nec_challenge ( chi , clo ) ; event . length = val & 0xFFFF; event . epid = val >> 16; slotid = val >> 24; event . type = 48; event . ccode = CC_TRB_ERROR; event . slotid = slotid; static TRBCCode xhci_reset_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; XHCIEPContext * epctx ; if ( epid < 1 || epid > 31 )  slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  epctx = slot -> eps [ epid - 1 ]; if ( epctx -> state != EP_HALTED )  if ( xhci_ep_nuke_xfers ( xhci , slotid , epid , 0 ) > 0 )  static int xhci_ep_nuke_xfers(XHCIState *xhci, unsigned int unsigned int epid, TRBCCode report) assert ( epid >= 1 && epid <= 31 ); 