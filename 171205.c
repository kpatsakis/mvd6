void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_07_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 