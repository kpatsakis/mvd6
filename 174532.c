void CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_bad() if ( GLOBAL_CONST_TRUE )  intPointer = ( int * ) malloc ( sizeof ( int ) ); * intPointer = 5; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); if ( intPointer != NULL )  * intPointer = 10; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 