void CWE427_Uncontrolled_Search_Path_Element__char_environment_53_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 250 - dataLen - 1 ); CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_badSink(char * data) CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_badSink(char * data) CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_badSink(char * data) PUTENV ( data ); 