static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_82_base * baseObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_82_goodB2G baseObject -> action ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_82_goodB2G::action(char * data) free ( data ); 