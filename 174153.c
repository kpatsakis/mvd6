void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) outputFile . open ( ( char * ) data ); 