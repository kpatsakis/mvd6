void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_22_bad() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_22_badSource ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_22_badSource(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_22_badGlobal )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; free ( data ); 