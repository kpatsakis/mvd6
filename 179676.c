static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *pedicures_overleaven) int stonesoup_ssi = 0 ; FILE * stonesoup_file_list [ 1020 ] ; char stonesoup_filename [ 80 ] ; if ( pedicures_overleaven != 0 )  svarabhaktic_varoom = ( ( char * ) pedicures_overleaven ); stonesoup_files = fopen ( svarabhaktic_varoom , "r" ); if ( stonesoup_files != 0 )  while ( fscanf ( stonesoup_files , "%79s" , stonesoup_filename ) == 1 && stonesoup_ssi < 1020 )  stonesoup_file = fopen ( stonesoup_filename , "w" ); if ( stonesoup_file == 0 && errno == 24 )  fputs ( "woohoo!" , stonesoup_file ); stonesoup_file_list [ stonesoup_ssi ] = stonesoup_file; stonesoup_ssi ++; 