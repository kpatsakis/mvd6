static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE606_Unchecked_Loop_Condition__char_listen_socket_84_goodB2G * goodB2GObject = new CWE606_Unchecked_Loop_Condition__char_listen_socket_84_goodB2G ( data ) ; CWE606_Unchecked_Loop_Condition__char_listen_socket_84_goodB2G::CWE606_Unchecked_Loop_Condition__char_listen_socket_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 