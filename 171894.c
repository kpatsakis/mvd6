static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); static char * goodG2B2Source(char * data) if ( goodG2B2Static )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; free ( data ); 