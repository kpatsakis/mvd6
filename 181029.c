static void goodG2B() twoIntsStruct * data ; data = NULL; twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_struct_declare_82_base * baseObject = new CWE590_Free_Memory_Not_on_Heap__free_struct_declare_82_goodG2B baseObject -> action ( data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_82_goodG2B::action(twoIntsStruct * data) free ( data ); 