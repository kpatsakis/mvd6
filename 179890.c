void CWE401_Memory_Leak__strdup_wchar_t_12_bad() wchar_t * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wchar_t myString [ ] = L "myString" data = wcsdup ( myString ); data = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "a string" ) if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; free ( data ); 