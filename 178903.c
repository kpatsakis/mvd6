void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcat ( data , "file.txt" ); pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 