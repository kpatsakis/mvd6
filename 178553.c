static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( STATIC_CONST_FIVE != 5 )  strcpy ( data , "fixedstringtest" ); if ( STATIC_CONST_FIVE == 5 )  goodG2B1VaSinkB ( data , data ); static void goodG2B1VaSinkB(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 