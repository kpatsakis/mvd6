void bad() char * data ; map < int , char * > dataMap ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 