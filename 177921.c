void CWE134_Uncontrolled_Format_String__char_file_snprintf_61_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE134_Uncontrolled_Format_String__char_file_snprintf_61b_badSource ( data ); char * CWE134_Uncontrolled_Format_String__char_file_snprintf_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); return data ; 