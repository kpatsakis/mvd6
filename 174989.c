static void goodG2B() int h ; int data ; data = - 1; for(h = 0; h < 1; h++) data = 100 - 1; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 