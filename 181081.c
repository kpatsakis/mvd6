void CWE416_Use_After_Free__malloc_free_wchar_t_17_bad() int i , j ; wchar_t * data ; for(i = 0; i < 1; i++) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); free ( data ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 