static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); char * goodG2B2Source(char * data) if ( goodG2B2Global )  data = new char [ 10 + 1 ]; return data ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 