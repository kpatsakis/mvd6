void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); badSink_b ( data ); void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) badSink_d ( data ); void badSink_d(wchar_t * data) badSink_e ( data ); void badSink_e(wchar_t * data) hFile = CreateFileW ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 