void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_34_bad() wchar_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_34_unionType myUnion ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 