static void v9fs_walk(void *opaque) int name_idx ; V9fsQID * qids = NULL ; uint16_t nwnames ; size_t offset = 7 ; int32_t fid , newfid ; V9fsString * wnames = NULL ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; err = pdu_unmarshal ( pdu , offset , "ddw" , & fid , & newfid , & nwnames ); if ( err < 0 )  offset += err; if ( nwnames && nwnames <= P9_MAXWELEM )  wnames = g_malloc0 ( sizeof ( wnames [ 0 ] ) * nwnames ); qids = g_malloc0 ( sizeof ( qids [ 0 ] ) * nwnames ); for (i = 0; i < nwnames; i++) err = pdu_unmarshal ( pdu , offset , "s" , & wnames [ i ] ); if ( err < 0 )  offset += err; if ( nwnames > P9_MAXWELEM )  err = - EINVAL; fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( fidp == NULL )  err = - ENOENT; for (name_idx = 0; name_idx < nwnames; name_idx++) err = v9fs_co_name_to_path ( pdu , & dpath , wnames [ name_idx ] . data , & path ); if ( err < 0 )  err = v9fs_co_lstat ( pdu , & path , & stbuf ); if ( err < 0 )  if ( fid == newfid )  newfidp = alloc_fid ( s , newfid ); static V9fsFidState *alloc_fid(V9fsState *s, int32_t fid) V9fsFidState * f ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  return NULL ; f = g_malloc0 ( sizeof ( V9fsFidState ) ); f -> fid = fid; f -> fid_type = P9_FID_NONE; f -> ref = 1; f -> flags |= FID_REFERENCED; f -> next = s -> fid_list; return f ; if ( newfidp == NULL )  err = - EINVAL; err = v9fs_walk_marshal ( pdu , nwnames , qids ); static int v9fs_walk_marshal(V9fsPDU *pdu, uint16_t nwnames, V9fsQID *qids) int i ; ssize_t err ; size_t offset = 7 ; err = pdu_marshal ( pdu , offset , "w" , nwnames ); if ( err < 0 )  return err ; offset += err; for (i = 0; i < nwnames; i++) err = pdu_marshal ( pdu , offset , "Q" , & qids [ i ] ); if ( err < 0 )  return err ; offset += err; return offset ; complete_pdu ( s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 