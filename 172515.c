static sg_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos) int mxsize , cmd_size , k ; int input_size , blocking ; unsigned char opcode ; Sg_device * sdp ; Sg_fd * sfp ; Sg_request * srp ; struct sg_header old_hdr ; sg_io_hdr_t * hp ; unsigned char cmnd [ SG_MAX_CDB_SIZE ] ; if ( ( ! ( sfp = ( Sg_fd * ) filp -> private_data ) ) || ( ! ( sdp = sfp -> parentdp ) ) )  if ( atomic_read ( & sdp -> detaching ) )  if ( ! ( ( filp -> f_flags & O_NONBLOCK ) || scsi_block_when_processing_errors ( sdp -> device ) ) )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  if ( count < SZ_SG_HEADER )  if ( __copy_from_user ( & old_hdr , buf , SZ_SG_HEADER ) )  if ( old_hdr . reply_len < 0 )  if ( count < ( SZ_SG_HEADER + 6 ) )  if ( ! ( srp = sg_add_request ( sfp ) ) )  static Sg_request sg_add_request(Sg_fd * sfp) int k ; Sg_request * resp ; Sg_request * rp = sfp -> req_arr ; resp = sfp -> headrp; if ( ! resp )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; resp = rp; if ( 0 == sfp -> cmd_q )  resp = NULL; if ( k < SG_MAX_QUEUE )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; while ( resp -> nextrp )  resp = resp -> nextrp; resp -> nextrp = rp; resp = rp; resp = NULL; if ( resp )  resp -> nextrp = NULL; resp -> header . duration = jiffies_to_msecs ( jiffies ); return resp ; buf += SZ_SG_HEADER; if ( sfp -> next_cmd_len > 0 )  cmd_size = sfp -> next_cmd_len; cmd_size = COMMAND_SIZE ( opcode ); if ( ( opcode >= 0xc0 ) && old_hdr . twelve_byte )  cmd_size = 12; input_size = count - cmd_size; mxsize = ( input_size > old_hdr . reply_len ) ? input_size : old_hdr . reply_len; mxsize -= SZ_SG_HEADER; input_size -= SZ_SG_HEADER; if ( input_size < 0 )  hp = & srp -> header; hp -> interface_id = '\0'; hp -> cmd_len = ( unsigned char ) cmd_size; hp -> iovec_count = 0; hp -> mx_sb_len = 0; if ( input_size > 0 )  hp -> dxfer_direction = ( old_hdr . reply_len > SZ_SG_HEADER ) ? SG_DXFER_TO_FROM_DEV : SG_DXFER_TO_DEV; hp -> dxfer_direction = ( mxsize > 0 ) ? SG_DXFER_FROM_DEV : SG_DXFER_NONE; hp -> dxfer_len = mxsize; if ( hp -> dxfer_direction == SG_DXFER_TO_DEV )  hp -> dxferp = NULL; hp -> sbp = NULL; hp -> timeout = old_hdr . reply_len; hp -> flags = input_size; hp -> pack_id = old_hdr . pack_id; hp -> usr_ptr = NULL; if ( __copy_from_user ( cmnd , buf , cmd_size ) )  if ( hp -> dxfer_direction == SG_DXFER_TO_FROM_DEV )  static char cmd [ TASK_COMM_LEN ] ; if ( strcmp ( current -> comm , cmd ) )  