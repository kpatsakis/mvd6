static void goodG2B() int * data ; int * * dataPtr2 = & data ; data = NULL; data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); int * data = * dataPtr2 ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 