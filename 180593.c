static void goodG2B() char * data ; data = NULL; while ( 1 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 