static __be32 *CVE_2010_2521_PATCHED_read_buf(struct nfsd4_compoundargs *argp, u32 nbytes) unsigned int avail = ( char * ) argp -> end - ( char * ) argp -> p ; __be32 * p ; if ( avail + argp -> pagelen < nbytes )  if ( avail + PAGE_SIZE < nbytes )  if ( nbytes <= sizeof ( argp -> tmp ) )  p = argp -> tmp; p = argp -> tmpp = kmalloc ( nbytes , GFP_KERNEL ); if ( ! p )  memcpy ( p , argp -> p , avail ); memcpy ( ( ( char * ) p ) + avail , argp -> p , ( nbytes - avail ) ); return p ; 