void CWE590_Free_Memory_Not_on_Heap__free_int_declare_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5; data = dataBuffer; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 