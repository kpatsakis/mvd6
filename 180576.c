void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_61_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_61b_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_61b_badSource(char * data) data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 