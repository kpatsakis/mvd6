static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char * password = ( char * ) malloc ( 100 * sizeof ( char ) ) ; password [ 0 ] = '\0'; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  SecureZeroMemory ( password , 100 * sizeof ( char ) ); password = realloc ( password , 200 * sizeof ( char ) ); strcpy ( password , "Nothing to see here" ); printLine ( password ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( password ); 