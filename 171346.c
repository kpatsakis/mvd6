static void goodB2G() char * data ; data = NULL; data = goodB2GSource ( data ); static char * goodB2GSource(char * data) data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); return data ; 