static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( GLOBAL_CONST_FIVE != 5 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 