void CWE134_Uncontrolled_Format_String__char_console_fprintf_61_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE134_Uncontrolled_Format_String__char_console_fprintf_61b_badSource ( data ); char * CWE134_Uncontrolled_Format_String__char_console_fprintf_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; return data ; fprintf ( stdout , data ); 