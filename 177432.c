void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_04_bad() int * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( int * ) ALLOCA ( 10 ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 