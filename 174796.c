static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); twoIntsStruct * dataCopy = data ; twoIntsStruct * data = dataCopy ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 