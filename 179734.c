void CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_34_bad() wchar_t * data ; CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_34_unionType myUnion ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; fwprintf ( stdout , data ); 