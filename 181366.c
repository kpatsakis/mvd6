static void goodB2G() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; data = NULL; char * data = * dataPtr1 ; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); char * data = * dataPtr2 ; if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 