void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_54e_goodG2BSink(char * data) char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 