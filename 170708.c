void CWE134_Uncontrolled_Format_String__char_file_snprintf_02_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 1 )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; SNPRINTF ( dest , 100 - 1 , data ); 