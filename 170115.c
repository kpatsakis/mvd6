static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); goodB2GSink ( data ); static void goodB2GSink(twoIntsStruct * data) if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 