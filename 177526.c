void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) badSink_d ( data ); void badSink_d(char * data) delete data 