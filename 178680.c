static void goodG2B() int data ; data = - 1; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61b_goodG2BSource ( data ); int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61b_goodG2BSource(int data) data = 7; return data ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 