void CWE124_Buffer_Underwrite__char_declare_memcpy_54_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_declare_memcpy_54b_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_memcpy_54b_badSink(char * data) CWE124_Buffer_Underwrite__char_declare_memcpy_54c_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_memcpy_54c_badSink(char * data) CWE124_Buffer_Underwrite__char_declare_memcpy_54d_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_memcpy_54d_badSink(char * data) CWE124_Buffer_Underwrite__char_declare_memcpy_54e_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_memcpy_54e_badSink(char * data) memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 