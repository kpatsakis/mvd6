void CWE416_Use_After_Free__malloc_free_int_63_bad() int * data ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); data [ i ] = 5; free ( data ); CWE416_Use_After_Free__malloc_free_int_63b_badSink ( & data ); void CWE416_Use_After_Free__malloc_free_int_63b_badSink(int * * dataPtr) int * data = * dataPtr ; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 