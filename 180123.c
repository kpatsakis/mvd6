static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_file_vprintf_52b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_vprintf_52b_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_file_vprintf_52c_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_vprintf_52c_goodG2BSink(char * data) goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 