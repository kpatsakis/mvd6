void bad() int * data ; data = NULL; static int dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int_static_82_base * baseObject = new CWE590_Free_Memory_Not_on_Heap__free_int_static_82_bad baseObject -> action ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_static_82_bad::action(int * data) free ( data ); 