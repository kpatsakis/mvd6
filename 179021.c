void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_bad() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_badSource ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_badSource(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_badGlobal )  data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); free ( data ); 