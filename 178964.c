static void goodB2G() int i , k ; char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; for(i = 0; i < 1; i++) WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t passwordLen = strlen ( password ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; while ( 0 )  for(k = 0; k < 1; k++) HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; char hashData [ 100 ] = HASH_INPUT ; BYTE payload [ ( 100 - 1 ) * sizeof ( char ) ] ; DWORD payloadBytes ; payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , password ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) size_t numWritten = 0 ; while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  int byte ; bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  memcpy ( password , payload , payloadBytes ); password [ payloadBytes / sizeof ( char ) ] = '\0'; while ( 0 )  if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  