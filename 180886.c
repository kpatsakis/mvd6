static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53b_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53c_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_53d_goodG2BSink(char * data) char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 