static void goodB2G() int * data ; data = ( int * ) calloc ( 1 , sizeof ( int ) ); baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__int_calloc_82_goodB2G::action(int * data) if ( data != NULL )  data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 