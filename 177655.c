static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_41_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_41_goodG2BSink(char * data) size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 