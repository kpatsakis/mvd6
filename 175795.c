void CWE467_Use_of_sizeof_on_Pointer_Type__int_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; badInt = ( int * ) malloc ( sizeof ( badInt ) ); * badInt = 5; printIntLine ( * badInt ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( badInt ); 