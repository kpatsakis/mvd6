static void goodB2G() list < size_t > dataList ; goodB2GSink ( dataList ); void goodB2GSink(list<size_t> dataList) size_t data = dataList . back ( ) ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 