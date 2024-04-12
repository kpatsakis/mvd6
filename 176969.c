static int transcode() int ret ; int64_t timer_start ; ret = transcode_init ( ); if ( ret < 0 )  timer_start = av_gettime ( ); if ( ( ret = init_input_threads ( ) ) < 0 )  print_report ( 1 , timer_start , av_gettime ( ) ); static void print_report(int is_last_report,int64_t timer_start,int64_t cur_time) char buf [ 1024 ] ; OutputStream * ost ; AVFormatContext * oc ; int64_t total_size ; int i ; double bitrate ; int64_t pts = - 9223372036854775807L - 1 ; static int64_t last_time = ( - 1 ) ; if ( ! print_stats && ! is_last_report && ! progress_avio )  if ( ! is_last_report )  if ( last_time == ( - 1 ) )  last_time = cur_time; if ( cur_time - last_time < 500000 )  oc = output_files [ 0 ] -> ctx; total_size = avio_size ( oc -> pb ); if ( total_size <= 0 )  total_size = avio_tell ( oc -> pb ); for (i = 0; i < nb_output_streams; i++) ost = output_streams [ i ]; if ( ( is_last_report || ! ost -> finished ) && ost -> st -> pts . val != ( ( int64_t ) 0x8000000000000000UL ) )  pts = ( pts > av_rescale_q ( ost -> st -> pts . val , ost -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ? pts : av_rescale_q ( ost -> st -> pts . val , ost -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) bitrate = ( pts && total_size >= 0 ? ( total_size * 8 ) / ( pts / 1000.0 ) : ( - 1 ) ); if ( bitrate < 0 )  snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "bitrate=%6.1fkbits/s" , bitrate ); if ( nb_frames_dup || nb_frames_drop )  snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , " dup=%d drop=%d" , nb_frames_dup , nb_frames_drop ); if ( print_stats || is_last_report )  if ( print_stats == 1 && 32 > av_log_get_level ( ) )  fprintf ( stderr , "%s    \r" , buf ); fflush ( stderr ); 