void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; data = badSource ( data ); char * badSource(char * data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 