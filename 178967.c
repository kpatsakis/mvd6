static void goodG2B() vector < int64_t * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<int64_t *> dataVector) int64_t * data = dataVector [ 2 ] ; int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 