static void goodG2B() int * data ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_goodG2BSink(int * dataArray[]) int * data = dataArray [ 2 ] ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 