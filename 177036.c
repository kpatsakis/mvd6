static void goodB2G1() char * data ; if ( GLOBAL_CONST_TRUE )  data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 