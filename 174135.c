void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_42_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = badSource ( data ); static char * badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 