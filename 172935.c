static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = goodG2BSource ( data ); static char * goodG2BSource(char * data) FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; 