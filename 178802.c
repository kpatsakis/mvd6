void heap2_redo(XLogRecPtr lsn,XLogRecord *record) uint8 info = ( ( record -> xl_info ) & ~0x0F ) ; switch ( info & 0x70 )  heap_xlog_multi_insert ( lsn , record ); static void heap_xlog_multi_insert(XLogRecPtr lsn,XLogRecord *record) char * recdata = ( ( char * ) record ) + ( ( ( intptr_t ) ( sizeof ( XLogRecord ) ) ) + ( 8 - 1 ) & ~ ( ( intptr_t ) ( 8 - 1 ) ) ) ; xl_heap_multi_insert * xlrec ; Buffer buffer ; Page page ; struct { HeapTupleHeaderData hdr ; char data [ 8192 - ( ( ( intptr_t ) ( ( ( size_t ) ( & ( ( PageHeaderData * ) 0 ) -> pd_linp ) ) + sizeof ( ItemIdData ) ) ) + ( 8 - 1 ) & ~ ( ( intptr_t ) ( 8 - 1 ) ) ) ] ; } tbuf ; HeapTupleHeader htup ; uint32 newlen ; BlockNumber blkno ; int i ; bool isinit = ( ( ( record -> xl_info ) & 0x0080 ) != 0 ) ; xlrec = ( ( xl_heap_multi_insert * ) recdata ); recdata += ( ( size_t ) ( & ( ( xl_heap_multi_insert * ) 0 ) -> offsets ) ); if ( ! isinit )  recdata += sizeof ( OffsetNumber ) * ( xlrec -> ntuples ); blkno = xlrec -> blkno; if ( ( record -> xl_info ) & 0x0008 >> 0 )  if ( isinit )  buffer = XLogReadBuffer ( xlrec -> node , blkno , ( ( bool ) 0 ) ); if ( ! ( ( ( ( void ) ( ( bool ) 1 ) ) , buffer != 0 ) ) )  page = ( ( Page ) ( ( Page ) ( ( ( ( void ) ( ( bool ) 1 ) ) , ( buffer < 0 ? LocalBufferBlockPointers [ - buffer - 1 ] : ( ( Block ) ( BufferBlocks + ( ( Size ) ( buffer - 1 ) ) * 8192 ) ) ) ) ) ) ); if ( lsn . xlogid < ( ( PageHeader ) page ) -> pd_lsn . xlogid || lsn . xlogid == ( ( PageHeader ) page ) -> pd_lsn . xlogid && lsn . xrecoff <= ( ( PageHeader ) page ) -> pd_lsn . xrecoff )  for (i = 0; i < (xlrec -> ntuples); i++) xl_multi_insert_tuple * xlhdr ; xlhdr = ( ( xl_multi_insert_tuple * ) ( ( ( intptr_t ) recdata ) + ( 2 - 1 ) & ~ ( ( intptr_t ) ( 2 - 1 ) ) ) ); recdata = ( ( char * ) xlhdr ) + ( ( ( size_t ) ( & ( ( xl_multi_insert_tuple * ) 0 ) -> t_hoff ) ) + sizeof ( uint8 ) ); newlen = ( xlhdr -> datalen ); htup = & tbuf . hdr; memcpy ( ( ( ( char * ) htup ) + ( ( size_t ) ( & ( ( HeapTupleHeaderData * ) 0 ) -> t_bits ) ) ) , ( ( char * ) recdata ) , newlen ); recdata += newlen; 