void protoprotestant_bassia(union humuslike_firecoat *speedometer_cloakmaker) struct stonesoup_data * stonesoupData ; stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( hyacinths_pedigerous ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( hyacinths_pedigerous ) + 1 ) ); if ( ( sscanf ( hyacinths_pedigerous , "%d %s %s %d" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , & ( stonesoupData -> data ) ) == 4 ) && stonesoupData -> qsize >= 0 && stonesoupData -> data >= 0 && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->data" , stonesoupData -> data , & ( stonesoupData -> data ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , stonesoup_calc_data , stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , stonesoup_print_data , stonesoupData ) != 0 )  free ( stonesoupData -> file1 ); free ( stonesoupData -> file2 ); free ( stonesoupData ); 