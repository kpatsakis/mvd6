void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_11_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 