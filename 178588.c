static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_vprintf_63b_goodB2GSink ( & data ); void CWE134_Uncontrolled_Format_String__char_environment_vprintf_63b_goodB2GSink(char * * dataPtr) char * data = * dataPtr ; goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 