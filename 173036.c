static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52c_goodG2BSink(char * data) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 