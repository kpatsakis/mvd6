void CWE124_Buffer_Underwrite__malloc_char_cpy_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 