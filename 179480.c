void CWE190_Integer_Overflow__int_fgets_square_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); int result = data * data ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 