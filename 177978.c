static void goodG2B() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE127_Buffer_Underread__char_declare_memmove_52b_goodG2BSink ( data ); void CWE127_Buffer_Underread__char_declare_memmove_52b_goodG2BSink(char * data) CWE127_Buffer_Underread__char_declare_memmove_52c_goodG2BSink ( data ); void CWE127_Buffer_Underread__char_declare_memmove_52c_goodG2BSink(char * data) memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 