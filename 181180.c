static void goodG2B() int64_t * data ; data = NULL; data = new int64_t [ 100 ]; goodG2BSink_b ( data ); void goodG2BSink_b(int64_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(int64_t * data) int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 