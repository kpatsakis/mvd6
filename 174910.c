static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( staticFive != 5 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 