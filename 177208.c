static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char password [ PASSWORD_INPUT_SIZE ] ; if ( fgets ( password , PASSWORD_INPUT_SIZE , stdin ) == NULL )  replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; if ( ! CryptHashData ( hHash , ( BYTE * ) password , strlen ( password ) , 0 ) )  