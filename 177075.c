static int CVE_2011_0521_PATCHED_dvb_ca_ioctl(struct file *file, unsigned int cmd, void *parg) struct dvb_device * dvbdev = file -> private_data ; struct av7110 * av7110 = dvbdev -> priv ; switch ( cmd )  ca_caps_t cap ; cap . slot_num = 2; cap . slot_type = ( FW_CI_LL_SUPPORT ( av7110 -> arm_app ) ? CA_CI_LINK : CA_CI ) | CA_DESCR; cap . descr_num = 16; cap . descr_type = CA_ECD; memcpy ( parg , & cap , sizeof ( cap ) ); ca_slot_info_t * info = ( ca_slot_info_t * ) parg ; if ( info -> num < 0 || info -> num > 1 )  av7110 -> ci_slot [ info -> num ] . num = info -> num; av7110 -> ci_slot [ info -> num ] . type = FW_CI_LL_SUPPORT ( av7110 -> arm_app ) ? CA_CI_LINK : CA_CI; memcpy ( info , & av7110 -> ci_slot [ info -> num ] , sizeof ( ca_slot_info_t ) ); ca_descr_info_t info ; info . num = 16; info . type = CA_ECD; memcpy ( parg , & info , sizeof ( info ) ); ca_descr_t * descr = ( ca_descr_t * ) parg ; if ( descr -> index >= 16 )  if ( descr -> parity > 1 )  av7110_fw_cmd ( av7110 , COMTYPE_PIDFILTER , SetDescr , 5 , ( descr -> index << 8 ) | descr -> parity , ( descr -> cw [ 0 ] << 8 ) | descr -> cw [ 1 ] , ( descr -> cw [ 2 ] << 8 ) | descr -> cw [ 3 ] , ( descr -> cw [ 4 ] << 8 ) | descr -> cw [ 5 ] , ( descr -> cw [ 6 ] << 8 ) | descr -> cw [ 7 ] ); 