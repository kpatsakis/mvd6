static void goodB2G2() size_t data ; data = 0; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = rand ( ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 