void bad() vector < int > dataVector ; badSink ( dataVector ); void badSink(vector<int> dataVector) int data = dataVector [ 2 ] ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 