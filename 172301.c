void CWE590_Free_Memory_Not_on_Heap__free_long_declare_10_bad() long * data ; data = NULL; if ( globalTrue )  long dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; free ( data ); 