static int transcode() int ret ; int64_t timer_start ; ret = transcode_init ( ); if ( ret < 0 )  timer_start = av_gettime ( ); if ( ( ret = init_input_threads ( ) ) < 0 )  print_report ( 1 , timer_start , av_gettime ( ) ); static void print_report(int is_last_report,int64_t timer_start,int64_t cur_time) char buf [ 1024 ] ; OutputStream * ost ; AVCodecContext * enc ; int frame_number ; int vid ; int i ; static int64_t last_time = ( - 1 ) ; static int qp_histogram [ '4' ] ; if ( ! print_stats && ! is_last_report && ! progress_avio )  if ( ! is_last_report )  if ( last_time == ( - 1 ) )  last_time = cur_time; if ( cur_time - last_time < 500000 )  buf [ 0 ] = '\0'; vid = 0; for (i = 0; i < nb_output_streams; i++) float q = ( - 1 ) ; ost = output_streams [ i ]; enc = ost -> st -> codec; if ( ! ost -> stream_copy && enc -> coded_frame )  q = ( enc -> coded_frame -> quality ) / ( ( float ) 'v' ); if ( vid && ( enc -> codec_type ) == AVMEDIA_TYPE_VIDEO )  snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "q=%2.1f " , q ); if ( ! vid && ( enc -> codec_type ) == AVMEDIA_TYPE_VIDEO )  float fps ; float t = ( ( cur_time - timer_start ) / 1000000.0 ) ; frame_number = ost -> frame_number; fps = ( t > 1 ? frame_number / t : 0 ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "frame=%5d fps=%3.*f q=%3.1f " , frame_number , fps < 9.95 , fps , q ); if ( is_last_report )  snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "L" ); if ( qp_hist )  int j ; int qp = ( lrintf ( q ) ) ; if ( qp >= 0 && qp < sizeof ( qp_histogram ) / sizeof ( qp_histogram [ 0 ] ) )  qp_histogram [ qp ] ++; for (j = 0; j < 32; j++) snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "%X" , ( ( int ) ( lrintf ( ( log2 ( ( qp_histogram [ j ] + 1 ) ) ) ) ) ) ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "PSNR=" ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "%c:%2.2f " , type [ j ] , p ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "*:%2.2f " , psnr ( error_sum / scale_sum ) ); vid = 1; snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "size=N/A time=" ); 