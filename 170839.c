void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_51_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_51b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_51b_badSink(char * data) badVaSink ( data , data ); static void badVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 