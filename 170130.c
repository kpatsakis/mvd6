static void goodB2G() char * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = NULL; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); data = NULL; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; free ( data ); 