void CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_67_bad() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_67_structType myStruct ; data = - 1; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = atoi ( inputBuffer ); while ( 0 )  myStruct . structFirst = data; CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_67b_badSink ( myStruct ); void CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_67b_badSink(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_67_structType myStruct) int data = myStruct . structFirst ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 