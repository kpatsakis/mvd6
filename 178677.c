void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); badSource ( data ); static void badSource(wchar_t * &data) wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' SNPRINTF ( dest , wcslen ( data ) , L "%s" , data ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 