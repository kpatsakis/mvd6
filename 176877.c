static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  strcpy ( data , "fixedstringtest" ); goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 