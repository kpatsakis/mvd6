 iseries_open (wtap * wth, int *err, gchar ** err_info) gint offset ; char magic [ ISERIES_LINE_LENGTH ] ; char unicodemagic [ ] = { x43 , x00 , x4F , x00 , x4D , x00 , x4D , x00 , x55 , x00 , x4E , x00 , x49 , x00 , x43 , x00 , x41 } ; if ( ! wtap_read_bytes ( wth -> fh , & magic , sizeof magic , err , err_info ) )  offset = 0; while ( ( unsigned int ) offset < ( ISERIES_LINE_LENGTH - ( sizeof unicodemagic ) ) )  if ( memcmp ( magic + offset , unicodemagic , sizeof unicodemagic ) == 0 )  if ( file_seek ( wth -> fh , 0 , SEEK_SET , err ) == - 1 )  if ( ! iseries_check_file_type ( wth , err , err_info , ISERIES_FORMAT_UNICODE ) )  wth -> file_encap = WTAP_ENCAP_ETHERNET; wth -> file_type_subtype = WTAP_FILE_TYPE_SUBTYPE_ISERIES; wth -> snapshot_length = 0; wth -> subtype_read = iseries_read; wth -> subtype_seek_read = iseries_seek_read; wth -> file_tsprec = WTAP_TSPREC_USEC; offset += 1; offset = 0; while ( offset < ( ISERIES_LINE_LENGTH - ISERIES_HDR_MAGIC_LEN ) )  if ( memcmp ( magic + offset , ISERIES_HDR_MAGIC_STR , ISERIES_HDR_MAGIC_LEN ) == 0 )  if ( file_seek ( wth -> fh , 0 , SEEK_SET , err ) == - 1 )  if ( ! iseries_check_file_type ( wth , err , err_info , ISERIES_FORMAT_ASCII ) )  offset += 1; static iseries_check_file_type (wtap * wth, int *err, gchar **err_info, int format) guint line ; int num_items_scanned ; char buf [ ISERIES_LINE_LENGTH ] , protocol [ 9 ] ; iseries_t * iseries ; iseries = ( iseries_t * ) g_malloc ( sizeof ( iseries_t ) ); wth -> priv = ( void * ) iseries; iseries -> have_date = FALSE; iseries -> format = format; for (line = 0; line < ISERIES_HDR_LINES_TO_CHECK; line++) if ( file_gets ( buf , ISERIES_LINE_LENGTH , wth -> fh ) == NULL )  num_items_scanned = sscanf ( buf , "%*[ \n\t]OBJECT PROTOCOL%*[ .:\n\t]%8s" , protocol ); if ( num_items_scanned == 1 )  if ( memcmp ( protocol , "ETHERNET" , 8 ) != 0 )  num_items_scanned = sscanf ( buf , "%*[ \n\t]START DATE/TIME%*[ .:\n\t]%2d/%2d/%2d" , & iseries -> month , & iseries -> day , & iseries -> year ); if ( num_items_scanned == 3 )  