static void goodG2B() int h ; char * data ; data = NULL; for(h = 0; h < 1; h++) data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 