void bad() wchar_t * data ; wchar_t data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); 