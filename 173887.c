void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_53d_badSink(char * data) strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 