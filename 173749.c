void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad() int data ; data = - 1; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61b_badSource ( data ); int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61b_badSource(int data) return data ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 