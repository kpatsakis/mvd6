static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_snprintf_22_goodB2G1Sink ( data ); void CWE134_Uncontrolled_Format_String__char_file_snprintf_22_goodB2G1Sink(char * data) SNPRINTF ( dest , 100 - 1 , "%s" , data ); 