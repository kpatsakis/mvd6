static void goodB2G() int * data ; int * * dataPtr1 = & data ; int * * dataPtr2 = & data ; data = NULL; int * data = * dataPtr1 ; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; int * data = * dataPtr2 ; free ( data ); 