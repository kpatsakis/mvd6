static void goodG2B() wchar_t * data ; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_34_unionType myUnion ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "fixedstringtest" ) myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 