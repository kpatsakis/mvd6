void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_34_bad() wchar_t * data ; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_34_unionType myUnion ; data = NULL; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; free ( data ); 