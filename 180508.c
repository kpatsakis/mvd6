void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_badSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 