static void goodB2G2() int * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5; free ( data ); 