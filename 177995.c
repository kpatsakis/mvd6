static void goodB2G() int * data ; data = ( int * ) malloc ( 1 * sizeof ( int ) ); CWE690_NULL_Deref_From_Return__int_malloc_52b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int_malloc_52b_goodB2GSink(int * data) CWE690_NULL_Deref_From_Return__int_malloc_52c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int_malloc_52c_goodB2GSink(int * data) if ( data != NULL )  data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 