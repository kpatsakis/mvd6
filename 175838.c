void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad(char * dataCopy) data = dataCopy; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_84_bad() char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 