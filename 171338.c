void CWE194_Unexpected_Sign_Extension__rand_malloc_06_bad() short data ; data = 0; if ( STATIC_CONST_FIVE == 5 )  data = ( short ) RAND32 ( ); if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 