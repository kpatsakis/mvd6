static void goodG2B1() char * data ; data = NULL; data = CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Source ( data ); char * CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Source(char * data) if ( CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Global )  char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 