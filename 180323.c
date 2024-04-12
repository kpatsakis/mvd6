static void v9fs_walk(void *opaque) int name_idx ; V9fsQID * qids = NULL ; uint16_t nwnames ; struct stat stbuf ; size_t offset = 7 ; int32_t fid , newfid ; V9fsString * wnames = NULL ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "ddw" , & fid , & newfid , & nwnames ); if ( err < 0 )  offset += err; if ( nwnames && nwnames <= P9_MAXWELEM )  wnames = g_malloc0 ( sizeof ( wnames [ 0 ] ) * nwnames ); qids = g_malloc0 ( sizeof ( qids [ 0 ] ) * nwnames ); for (i = 0; i < nwnames; i++) err = pdu_unmarshal ( pdu , offset , "s" , & wnames [ i ] ); if ( err < 0 )  offset += err; if ( nwnames > P9_MAXWELEM )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( fidp == NULL )  for (name_idx = 0; name_idx < nwnames; name_idx++) err = v9fs_co_name_to_path ( pdu , & dpath , wnames [ name_idx ] . data , & path ); if ( err < 0 )  err = v9fs_co_lstat ( pdu , & path , & stbuf ); if ( err < 0 )  stat_to_qid ( & stbuf , & qids [ name_idx ] ); static void stat_to_qid(const struct stat *stbuf, V9fsQID *qidp) size_t size ; memset ( & qidp -> path , 0 , sizeof ( qidp -> path ) ); size = MIN ( sizeof ( stbuf -> st_ino ) , sizeof ( qidp -> path ) ); memcpy ( & qidp -> path , & stbuf -> st_ino , size ); qidp -> version = stbuf -> st_mtime ^ ( stbuf -> st_size << 8 ); qidp -> type = 0; qidp -> type |= P9_QID_TYPE_DIR; qidp -> type |= P9_QID_TYPE_SYMLINK; 