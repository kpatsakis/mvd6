void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_06_bad() wchar_t * data ; if ( STATIC_CONST_FIVE == 5 )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wcscat ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 