static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_51b_goodB2GSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_51b_goodB2GSink(int data) if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( buffer ); 