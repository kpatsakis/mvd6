void CWE124_Buffer_Underwrite__char_alloca_ncpy_67b_badSink(CWE124_Buffer_Underwrite__char_alloca_ncpy_67_structType myStruct) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 