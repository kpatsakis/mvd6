void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_bad() int * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( int * ) malloc ( 50 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); free ( data ); 