void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_34_bad() int * data ; CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_34_unionType myUnion ; data = NULL; data = ( int * ) ALLOCA ( 10 ); myUnion . unionFirst = data; int * data = myUnion . unionSecond ; int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 