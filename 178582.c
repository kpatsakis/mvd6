static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE606_Unchecked_Loop_Condition__char_connect_socket_22_goodB2G2Sink ( data ); void CWE606_Unchecked_Loop_Condition__char_connect_socket_22_goodB2G2Sink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  