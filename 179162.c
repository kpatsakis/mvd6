static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *bebotch_nondefectively) if ( bebotch_nondefectively != 0 )  stonesoup_file = fopen ( "/opt/stonesoup/workspace/testData/myfile.txt" , "r" ); if ( stonesoup_file != 0 )  while ( ( ( unsigned int ) stonesoup_counter ) < stonesoup_to_unsign )  stonesoup_bytes_read = fread ( & stonesoup_buff [ stonesoup_counter ] , sizeof ( char ) , 1000 , stonesoup_file ); if ( stonesoup_bytes_read == 0 )  stonesoup_counter += stonesoup_bytes_read; fclose ( stonesoup_file ); 