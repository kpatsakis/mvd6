void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); twoIntsStruct * dataCopy = data ; twoIntsStruct * data = dataCopy ; data [ i ] = source [ i ]; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 