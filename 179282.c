void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE36_Absolute_Path_Traversal__char_console_w32CreateFile_68_badData = data; 