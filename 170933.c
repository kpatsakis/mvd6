static void goodG2B2() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t cryptoKeyLen = strlen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgets ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = '\0'; cryptoKeyLen = strlen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = '\0'; HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , strlen ( cryptoKey ) * sizeof ( char ) , 0 ) )  