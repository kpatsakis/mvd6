void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_03_bad() char * data ; data = NULL; if ( 5 == 5 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t i ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; free ( data ); 