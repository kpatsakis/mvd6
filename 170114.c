void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_32_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); * dataPtr1 = data; wcsncat ( dest , data , wcslen ( data ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 