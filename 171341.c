static void goodG2B() int64_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_structType myStruct ; data = NULL; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_structType myStruct) int64_t * data = myStruct . structFirst ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 