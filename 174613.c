static void good2() if ( STATIC_CONST_TRUE )  wchar_t * * pointer = ( wchar_t * * ) malloc ( sizeof ( wchar_t * ) ) ; * pointer = data; wchar_t * data = * pointer ; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( pointer ); 