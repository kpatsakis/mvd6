static void goodG2B2() char * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t i ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; free ( data ); 