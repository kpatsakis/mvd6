void bad() int data ; map < int , int > dataMap ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int> dataMap) int data = dataMap [ 2 ] ; assert ( data > ASSERT_VALUE ); 