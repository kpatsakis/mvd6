void CWE126_Buffer_Overread__malloc_char_memmove_66_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE126_Buffer_Overread__malloc_char_memmove_66b_badSink ( dataArray ); void CWE126_Buffer_Overread__malloc_char_memmove_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 