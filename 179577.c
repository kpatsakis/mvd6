void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_bad() int * data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_badSink(int * data) int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 