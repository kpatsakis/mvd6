void bad() long * data ; data = ( long * ) malloc ( 100 * sizeof ( long ) ); badSink_b ( data ); void badSink_b(long * data) badSink_c ( data ); void badSink_c(long * data) badSink_d ( data ); void badSink_d(long * data) delete [ ] data 