static void goodG2B() int data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_34_unionType myUnion ; data = - 1; data = 7; myUnion . unionFirst = data; int data = myUnion . unionSecond ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 