static int sctp_getsockopt(struct sock *sk, int level, int char __user *optval, int __user *optlen) int len ; if ( level != SOL_SCTP )  if ( get_user ( len , optlen ) )  if ( len < 0 )  switch ( optname )  retval = sctp_getsockopt_assoc_stats ( sk , len , optval , optlen ); static int sctp_getsockopt_assoc_stats(struct sock *sk, int char __user int __user *optlen) struct sctp_assoc_stats sas ; if ( len < sizeof ( sctp_assoc_t ) )  len = min_t ( size_t , len , sizeof ( sas ) ); if ( copy_from_user ( & sas , optval , len ) )  asoc = sctp_id2assoc ( sk , sas . sas_assoc_id ); struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id) struct sctp_association * asoc = NULL ; if ( ! sctp_style ( sk , UDP ) )  if ( ! sctp_sstate ( sk , ESTABLISHED ) && ! sctp_sstate ( sk , CLOSING ) )  return NULL ; return asoc ; if ( ! id || ( id == ( sctp_assoc_t ) - 1 ) )  return NULL ; asoc = ( struct sctp_association * ) idr_find ( & sctp_assocs_id , ( int ) id ); if ( ! asoc || ( asoc -> base . sk != sk ) || asoc -> base . dead )  return NULL ; return asoc ; if ( ! asoc )  sas . sas_rtxchunks = asoc -> stats . rtxchunks; sas . sas_gapcnt = asoc -> stats . gapcnt; sas . sas_outofseqtsns = asoc -> stats . outofseqtsns; sas . sas_osacks = asoc -> stats . osacks; sas . sas_isacks = asoc -> stats . isacks; sas . sas_octrlchunks = asoc -> stats . octrlchunks; sas . sas_ictrlchunks = asoc -> stats . ictrlchunks; sas . sas_oodchunks = asoc -> stats . oodchunks; sas . sas_iodchunks = asoc -> stats . iodchunks; sas . sas_ouodchunks = asoc -> stats . ouodchunks; sas . sas_iuodchunks = asoc -> stats . iuodchunks; sas . sas_idupchunks = asoc -> stats . idupchunks; sas . sas_opackets = asoc -> stats . opackets; sas . sas_ipackets = asoc -> stats . ipackets; sas . sas_maxrto = asoc -> stats . max_obs_rto; memcpy ( & sas . sas_obs_rto_ipaddr , & asoc -> stats . obs_rto_ipaddr , sizeof ( struct sockaddr_storage ) ); pr_debug ( "%s: len:%d, assoc_id:%d\n" , __func__ , len , sas . sas_assoc_id ); if ( copy_to_user ( optval , & sas , len ) )  