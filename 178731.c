void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_21_bad() int * data ; data = NULL; data = badSource ( data ); static int * badSource(int * data) if ( badStatic )  data = ( int * ) ALLOCA ( 10 ); return data ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 