void CWE78_OS_Command_Injection__char_environment_execlp_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE78_OS_Command_Injection__char_environment_execlp_52b_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_execlp_52b_badSink(char * data) CWE78_OS_Command_Injection__char_environment_execlp_52c_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_execlp_52c_badSink(char * data) 