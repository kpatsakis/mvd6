static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; int * pointer = ( int * ) malloc ( sizeof ( int ) ) ; * pointer = data; int data = * pointer ; printIntLine ( data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( pointer ); 