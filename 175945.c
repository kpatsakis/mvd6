void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_12_bad() int * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( int * ) malloc ( 10 ); data = ( int * ) malloc ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); free ( data ); 