void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( GLOBAL_CONST_FIVE == 5 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 