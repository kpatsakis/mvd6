void CWE427_Uncontrolled_Search_Path_Element__char_file_53_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 250 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 250 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE427_Uncontrolled_Search_Path_Element__char_file_53b_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_file_53b_badSink(char * data) CWE427_Uncontrolled_Search_Path_Element__char_file_53c_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_file_53c_badSink(char * data) CWE427_Uncontrolled_Search_Path_Element__char_file_53d_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_file_53d_badSink(char * data) PUTENV ( data ); 