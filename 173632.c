void bad() short data ; data = 0; CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad * badObject = new CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad ( data ) ; CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad::CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad(short dataCopy) data = dataCopy; data = ( short ) RAND32 ( ); delete badObject CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad::~CWE194_Unexpected_Sign_Extension__rand_malloc_84_bad() if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 