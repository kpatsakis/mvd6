void CWE606_Unchecked_Loop_Condition__char_console_63_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; CWE606_Unchecked_Loop_Condition__char_console_63b_badSink ( & data ); void CWE606_Unchecked_Loop_Condition__char_console_63b_badSink(char * * dataPtr) char * data = * dataPtr ; if ( sscanf ( data , "%d" , & n ) == 1 )  