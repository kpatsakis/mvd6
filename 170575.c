void CWE127_Buffer_Underread__malloc_char_memcpy_54b_badSink(char * data) CWE127_Buffer_Underread__malloc_char_memcpy_54c_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_memcpy_54c_badSink(char * data) CWE127_Buffer_Underread__malloc_char_memcpy_54d_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_memcpy_54d_badSink(char * data) CWE127_Buffer_Underread__malloc_char_memcpy_54e_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_memcpy_54e_badSink(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 