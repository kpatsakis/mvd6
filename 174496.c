static void goodG2B1() char * data ; data = new char [ 100 ]; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 