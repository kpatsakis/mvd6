void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_61_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_61b_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_61b_badSource(char * data) data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 