static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_67b_goodB2GSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_67b_goodB2GSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_67_structType myStruct) char * data = myStruct . structFirst ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 