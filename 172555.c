static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE127_Buffer_Underread__malloc_char_ncpy_66b_goodG2BSink ( dataArray ); void CWE127_Buffer_Underread__malloc_char_ncpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; strncpy ( dest , data , strlen ( dest ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 