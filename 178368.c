static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G * goodB2GObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G::CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) data [ dataLen - 1 ] = L '\0' printLine ( "fgetws() failed" ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); data [ dataLen ] = L '\0' delete goodB2GObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_84_goodB2G() size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  printLine ( "We have a match!" ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); break ; free ( data ); 