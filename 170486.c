static int airspy_s_frequency(struct file *file, void const struct v4l2_frequency *f) struct airspy * s = video_drvdata ( file ) ; int ret ; u8 buf [ 4 ] ; if ( f -> tuner == 0 )  s -> f_adc = clamp_t ( unsigned int , f -> frequency bands [ 0 ] . rangelow bands [ 0 ] . rangehigh ) if ( f -> tuner == 1 )  s -> f_rf = clamp_t ( unsigned int , f -> frequency bands_rf [ 0 ] . rangelow bands_rf [ 0 ] . rangehigh ) buf [ 0 ] = ( s -> f_rf >> 0 ) & 0xff; buf [ 1 ] = ( s -> f_rf >> 8 ) & 0xff; buf [ 2 ] = ( s -> f_rf >> 16 ) & 0xff; buf [ 3 ] = ( s -> f_rf >> 24 ) & 0xff; ret = airspy_ctrl_msg ( s , CMD_SET_FREQ , 0 , 0 , buf , 4 ); static int airspy_ctrl_msg(struct airspy *s, u8 request, u16 value, u16 u8 *data, u16 size) u8 requesttype ; switch ( request )  requesttype = ( USB_TYPE_VENDOR | USB_DIR_OUT ); requesttype = ( USB_TYPE_VENDOR | USB_DIR_IN ); if ( ! ( requesttype & USB_DIR_IN ) )  memcpy ( s -> buf , data , size ); ret = usb_control_msg ( s -> udev , pipe , request , requesttype , value , index , s -> buf , size , 1000 ); airspy_dbg_usb_control_msg ( s -> dev , request , requesttype , value , index , s -> buf , size ); if ( ret < 0 )  dev_err ( s -> dev , "usb_control_msg() failed %d request %02x\n" , ret , request ); memcpy ( data , s -> buf , size ); return ret ; 