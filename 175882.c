void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_84_bad::CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  