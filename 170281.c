static void goodG2B() int64_t * data ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 