static void goodG2B() int data ; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_34_unionType myUnion ; data = - 1; data = 20; myUnion . unionFirst = data; int data = myUnion . unionSecond ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 