static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *divesting_subiaco) if ( divesting_subiaco != 0 )  engirdling_sades = ( ( int ) ( strlen ( divesting_subiaco ) ) ); mispractised_nonliberalism = ( ( char * ) ( malloc ( engirdling_sades + 1 ) ) ); if ( mispractised_nonliberalism == 0 )  memset ( mispractised_nonliberalism , 0 , engirdling_sades + 1 ); memcpy ( mispractised_nonliberalism , divesting_subiaco , engirdling_sades ); if ( divesting_subiaco != 0 )  free ( ( ( char * ) divesting_subiaco ) ); transit_cochleary = & mispractised_nonliberalism; nonofficeholder_odontoma = transit_cochleary + 5; unawares_stookers = ( ( char * ) ( * ( nonofficeholder_odontoma - 5 ) ) ); stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 && stonesoupData -> file2 )  if ( ( sscanf ( unawares_stookers , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); stonesoupData -> data_size = strlen ( stonesoupData -> data ); if ( pthread_create ( & stonesoup_t0 , NULL , delNonAlpha , ( void * ) stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toCap , ( void * ) stonesoupData ) != 0 )  free ( stonesoupData -> data ); free ( stonesoupData ); if ( * ( nonofficeholder_odontoma - 5 ) != 0 )  free ( ( ( char * ) ( * ( nonofficeholder_odontoma - 5 ) ) ) ); 