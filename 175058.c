void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_22_badVaSink ( data , data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_22_badVaSink(wchar_t * data, ...) va_start ( args , data ); vwprintf ( data , args ); 