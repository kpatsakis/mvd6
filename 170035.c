void CWE134_Uncontrolled_Format_String__char_environment_printf_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_printf_53b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_printf_53b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_printf_53c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_printf_53c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_printf_53d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_printf_53d_badSink(char * data) printf ( data ); 