void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_32_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); * dataPtr1 = data; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 