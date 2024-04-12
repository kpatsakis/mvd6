static int xc2028_set_analog_freq(struct dvb_frontend struct analog_parameters *p) unsigned int type = 0 ; if ( p -> mode == V4L2_TUNER_RADIO )  if ( ! p -> std )  p -> std = V4L2_STD_MN; if ( ! ( p -> std & V4L2_STD_MN ) )  type |= F8MHZ; p -> std |= parse_audio_std_option ( ); static  v4l2_std_id parse_audio_std_option(void) if ( strcasecmp ( audio_std , "A2" ) == 0 )  return V4L2_STD_A2 ; if ( strcasecmp ( audio_std , "A2/A" ) == 0 )  return V4L2_STD_A2_A ; if ( strcasecmp ( audio_std , "A2/B" ) == 0 )  return V4L2_STD_A2_B ; if ( strcasecmp ( audio_std , "NICAM" ) == 0 )  return V4L2_STD_NICAM ; if ( strcasecmp ( audio_std , "NICAM/A" ) == 0 )  return V4L2_STD_NICAM_A ; if ( strcasecmp ( audio_std , "NICAM/B" ) == 0 )  return V4L2_STD_NICAM_B ; return 0 ; return generic_set_freq ( fe , 62500l * p -> frequency , V4L2_TUNER_ANALOG_TV , type , p -> std , 0 ) ; static int generic_set_freq(struct dvb_frontend *fe, u32 freq /* in HZ enum v4l2_tuner_type unsigned int v4l2_std_id u16 int_freq) if ( check_firmware ( fe , type , std , int_freq ) < 0 )  static int check_firmware(struct dvb_frontend *fe, unsigned int v4l2_std_id std, __u16 int_freq) struct xc2028_data * priv = fe -> tuner_priv ; struct firmware_properties new_fw ; int rc , retry_count = 0 ; u16 version , hwmodel ; v4l2_std_id std0 ; rc = check_device_status ( priv ); if ( rc < 0 )  if ( priv -> ctrl . mts && ! ( type & FM ) )  type |= MTS; new_fw . type = type; new_fw . id = std; new_fw . std_req = std; new_fw . scode_table = SCODE | priv -> ctrl . scode_table; new_fw . scode_nr = 0; new_fw . int_freq = int_freq; if ( ( priv -> state == XC2028_ACTIVE ) && ( ( ( BASE | new_fw . type ) & BASE_TYPES ) == ( priv -> cur_fw . type & BASE_TYPES ) ) )  memset ( & priv -> cur_fw , 0 , sizeof ( priv -> cur_fw ) ); rc = do_tuner_callback ( fe , XC2028_TUNER_RESET , 0 ); if ( rc < 0 )  std0 = 0; rc = load_firmware ( fe , BASE | new_fw . type , & std0 ); if ( rc < 0 )  rc = load_firmware ( fe , BASE | INIT1 | new_fw . type , & std0 ); if ( rc == - ENOENT )  rc = load_firmware ( fe , ( BASE | INIT1 | new_fw . type ) & ~F8MHZ , & std0 ); if ( rc < 0 && rc != - ENOENT )  if ( priv -> cur_fw . type == ( BASE | new_fw . type ) && priv -> cur_fw . std_req == std )  priv -> cur_fw . scode_table = 0; rc = load_firmware ( fe , new_fw . type , & new_fw . id ); if ( rc == - ENOENT )  rc = load_firmware ( fe , new_fw . type & ~F8MHZ , & new_fw . id ); if ( rc < 0 )  if ( xc2028_get_reg ( priv , 0x0004 , & version ) < 0 || xc2028_get_reg ( priv , 0x0008 , & hwmodel ) < 0 )  if ( priv -> ctrl . read_not_reliable )  if ( priv -> firm_version != ( ( version & 0xf0 ) << 4 | ( version & 0x0f ) ) )  if ( ! priv -> ctrl . read_not_reliable )  hwmodel = 3028; if ( priv -> hwmodel == 0 && ( hwmodel == 2028 || hwmodel == 3028 ) )  priv -> hwmodel = hwmodel; priv -> hwvers = version & 0xff00; if ( priv -> hwmodel == 0 || priv -> hwmodel != hwmodel || priv -> hwvers != ( version & 0xff00 ) )  priv -> cur_fw = new_fw; priv -> cur_fw . type |= BASE; priv -> state = XC2028_ACTIVE; priv -> state = XC2028_NO_FIRMWARE; memset ( & priv -> cur_fw , 0 , sizeof ( priv -> cur_fw ) ); if ( retry_count < 8 )  retry_count ++; 