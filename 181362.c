static void goodB2G1() char * data ; data = NULL; if ( globalFive == 5 )  data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 