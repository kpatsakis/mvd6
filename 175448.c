static void goodG2B() wchar_t * cryptoKey ; CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_67_structType myStruct ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; size_t cryptoKeyLen = wcslen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgetws ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = L '\0' cryptoKeyLen = wcslen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = L '\0' myStruct . structFirst = cryptoKey; CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_67b_goodG2BSink ( myStruct ); void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_67b_goodG2BSink(CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_67_structType myStruct) wchar_t * cryptoKey = myStruct . structFirst ; HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  