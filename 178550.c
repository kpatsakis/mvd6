void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_34_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_34_unionType myUnion ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 