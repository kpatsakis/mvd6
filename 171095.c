static void v9fs_readdir(void *opaque) int32_t fid ; V9fsFidState * fidp ; size_t offset = 7 ; int32_t count ; uint32_t max_count ; V9fsPDU * pdu = opaque ; retval = pdu_unmarshal ( pdu , offset , "dqd" , & fid , & initial_offset , & max_count ); if ( retval < 0 )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); static int v9fs_reopen_fid(V9fsPDU *pdu, V9fsFidState *f) int err = 1 ; if ( f -> fid_type == P9_FID_FILE )  if ( f -> fs . fd == - 1 )  err = v9fs_co_open ( pdu , f , f -> open_flags ); while ( err == - EINTR && ! pdu -> cancelled )  if ( f -> fid_type == P9_FID_DIR )  if ( f -> fs . dir == NULL )  err = v9fs_co_opendir ( pdu , f ); while ( err == - EINTR && ! pdu -> cancelled )  return err ; if ( err < 0 )  return NULL ; return f ; return NULL ; if ( fidp == NULL )  if ( ! fidp -> fs . dir )  count = v9fs_do_readdir ( pdu , fidp , max_count ); static int v9fs_do_readdir(V9fsPDU V9fsFidState *fidp, int32_t max_count) size_t size ; V9fsQID qid ; V9fsString name ; int32_t count = 0 ; off_t saved_dir_pos ; struct dirent * dent , * result ; saved_dir_pos = v9fs_co_telldir ( pdu , fidp ); if ( saved_dir_pos < 0 )  dent = g_malloc ( sizeof ( struct dirent ) ); while ( 1 )  err = v9fs_co_readdir_r ( pdu , fidp , dent , & result ); if ( err || ! result )  if ( ( count + v9fs_readdir_data_size ( & name ) ) > max_count )  static size_t v9fs_readdir_data_size(V9fsString *name) return 24 + v9fs_string_size ( name ) ; static size_t v9fs_string_size(V9fsString *str) return str -> size ; return count ; size = MIN ( sizeof ( dent -> d_ino ) , sizeof ( qid . path ) ); memcpy ( & qid . path , & dent -> d_ino , size ); qid . type = 0; qid . version = 0; len = pdu_marshal ( pdu , 11 + count , "Qqbs" , & qid , dent -> d_off , dent -> d_type , & name ); if ( len < 0 )  return len ; count += len; return count ; 