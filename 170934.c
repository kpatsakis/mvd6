static void goodG2B() int64_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_34_unionType myUnion ; int64_t * dataGoodBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; data = dataGoodBuffer; myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 