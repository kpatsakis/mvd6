void heap_redo(XLogRecPtr lsn,XLogRecord *record) uint8 info = ( ( record -> xl_info ) & ~0x0F ) ; switch ( info & 0x70 )  heap_xlog_update ( lsn , record , ( ( bool ) 0 ) ); static void heap_xlog_update(XLogRecPtr lsn,XLogRecord *record,bool hot_update) xl_heap_update * xlrec = ( xl_heap_update * ) ( ( ( char * ) record ) + ( ( ( intptr_t ) ( sizeof ( XLogRecord ) ) ) + ( 8 - 1 ) & ~ ( ( intptr_t ) ( 8 - 1 ) ) ) ) ; bool samepage = ( ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( BlockNumber ) ( ( ( & ( & xlrec -> newtid ) -> ip_blkid ) -> bi_hi ) << 16 | ( ( uint16 ) ( ( & ( & xlrec -> newtid ) -> ip_blkid ) -> bi_lo ) ) ) ) ) ) ) ) == ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( BlockNumber ) ( ( ( & ( & xlrec -> target . tid ) -> ip_blkid ) -> bi_hi ) << 16 | ( ( uint16 ) ( ( & ( & xlrec -> target . tid ) -> ip_blkid ) -> bi_lo ) ) ) ) ) ) ) ) ) ; Buffer obuffer ; Buffer nbuffer ; Page page ; HeapTupleHeader htup ; struct { HeapTupleHeaderData hdr ; char data [ 8192 - ( ( ( intptr_t ) ( ( ( size_t ) ( & ( ( PageHeaderData * ) 0 ) -> pd_linp ) ) + sizeof ( ItemIdData ) ) ) + ( 8 - 1 ) & ~ ( ( intptr_t ) ( 8 - 1 ) ) ) ] ; } tbuf ; int hsize ; uint32 newlen ; if ( ( record -> xl_info ) & 0x0008 >> 0 )  if ( samepage )  obuffer = XLogReadBuffer ( xlrec -> target . node , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( BlockNumber ) ( ( ( & ( & xlrec -> target . tid ) -> ip_blkid ) -> bi_hi ) << 16 | ( ( uint16 ) ( ( & ( & xlrec -> target . tid ) -> ip_blkid ) -> bi_lo ) ) ) ) ) ) ) ) , ( ( bool ) 0 ) ); if ( ! ( ( ( ( void ) ( ( bool ) 1 ) ) , obuffer != 0 ) ) )  page = ( ( Page ) ( ( Page ) ( ( ( ( void ) ( ( bool ) 1 ) ) , ( obuffer < 0 ? LocalBufferBlockPointers [ - obuffer - 1 ] : ( ( Block ) ( BufferBlocks + ( ( Size ) ( obuffer - 1 ) ) * 8192 ) ) ) ) ) ) ); if ( lsn . xlogid < ( ( PageHeader ) page ) -> pd_lsn . xlogid || lsn . xlogid == ( ( PageHeader ) page ) -> pd_lsn . xlogid && lsn . xrecoff <= ( ( PageHeader ) page ) -> pd_lsn . xrecoff )  if ( samepage )  if ( samepage )  ( ( PageHeader ) page ) -> pd_lsn = lsn; ( ( PageHeader ) page ) -> pd_tli = ( ( uint16 ) ThisTimeLineID ); if ( ( record -> xl_info ) & 0x0008 >> 1 )  if ( ( record -> xl_info ) & 0x0080 )  nbuffer = XLogReadBuffer ( xlrec -> target . node , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( ( ( void ) ( ( bool ) 1 ) ) , ( ( BlockNumber ) ( ( ( & ( & xlrec -> newtid ) -> ip_blkid ) -> bi_hi ) << 16 | ( ( uint16 ) ( ( & ( & xlrec -> newtid ) -> ip_blkid ) -> bi_lo ) ) ) ) ) ) ) ) , ( ( bool ) 0 ) ); if ( ! ( ( ( ( void ) ( ( bool ) 1 ) ) , nbuffer != 0 ) ) )  page = ( ( Page ) ( ( Page ) ( ( ( ( void ) ( ( bool ) 1 ) ) , ( nbuffer < 0 ? LocalBufferBlockPointers [ - nbuffer - 1 ] : ( ( Block ) ( BufferBlocks + ( ( Size ) ( nbuffer - 1 ) ) * 8192 ) ) ) ) ) ) ); if ( lsn . xlogid < ( ( PageHeader ) page ) -> pd_lsn . xlogid || lsn . xlogid == ( ( PageHeader ) page ) -> pd_lsn . xlogid && lsn . xrecoff <= ( ( PageHeader ) page ) -> pd_lsn . xrecoff )  hsize = ( ( ( size_t ) ( & ( ( xl_heap_update * ) 0 ) -> new_all_visible_cleared ) ) + sizeof ( bool ) + ( ( ( size_t ) ( & ( ( xl_heap_header * ) 0 ) -> t_hoff ) ) + sizeof ( uint8 ) ) ); newlen = record -> xl_len - hsize; htup = & tbuf . hdr; memcpy ( ( ( ( char * ) htup ) + ( ( size_t ) ( & ( ( HeapTupleHeaderData * ) 0 ) -> t_bits ) ) ) , ( ( ( char * ) xlrec ) + hsize ) , newlen ); 