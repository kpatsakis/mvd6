void bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 