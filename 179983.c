static void goodB2G2() size_t data ; data = 0; data = rand ( ); CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_22_goodB2G2Sink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_22_goodB2G2Sink(size_t data) if ( CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_22_goodB2G2Global )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 