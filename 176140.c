void bad() wchar_t * data ; data = NULL; data = badSource ( data ); wchar_t * badSource(wchar_t * data) data = new wchar_t [ 50 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 