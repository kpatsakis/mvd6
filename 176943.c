static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 