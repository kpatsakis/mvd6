void crotalaria_amenableness(void **monodonta_trehala) republics_ginn = ( ( char * ) ( ( char * ) ( * ( monodonta_trehala - 5 ) ) ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( republics_ginn ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( republics_ginn ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 )  if ( ( sscanf ( republics_ginn , "%s %s" , stonesoupData -> file1 , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); delNonAlpha ( stonesoupData ); void delNonAlpha (void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; char * temp = malloc ( sizeof ( char ) * ( stonesoupData -> data_size + 1 ) ) ; temp [ j ++ ] = stonesoupData -> data [ i ]; temp [ j ++ ] = '\0'; stonesoupData -> data_size = j; free ( stonesoupData -> data ); stonesoupData -> data = temp; waitForSig ( stonesoupData -> file1 ); 