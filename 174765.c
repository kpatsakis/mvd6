void bad() char * data ; char * & dataRef = data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); char * data = dataRef ; if ( sscanf ( data , "%d" , & n ) == 1 )  