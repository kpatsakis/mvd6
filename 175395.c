static void goodG2B2() char * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; free ( data ); 