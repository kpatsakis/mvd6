void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 