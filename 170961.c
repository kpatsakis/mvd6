void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_structType myStruct ; char * dataBadBuffer = ( char * ) ALLOCA ( ( 10 ) * sizeof ( char ) ) ; data = dataBadBuffer; data [ 0 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 