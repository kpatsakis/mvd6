void av_pkt_dump2(FILE *f,AVPacket *pkt,int dump_payload,AVStream *st) pkt_dump_internal ( ( ( void * ) 0 ) , f , 0 , pkt , dump_payload , st -> time_base ); static void pkt_dump_internal(void *avcl,FILE *f,int level,AVPacket *pkt,int dump_payload,AVRational time_base) if ( pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) )  if ( ! f )  fprintf ( f , "%0.3f" , ( pkt -> pts ) * av_q2d ( time_base ) ); while ( 0 )  if ( ! f )  fprintf ( f , "\n" ); while ( 0 )  if ( ! f )  fprintf ( f , "  size=%d\n" , pkt -> size ); while ( 0 )  av_hex_dump ( f , ( pkt -> data ) , pkt -> size ); 