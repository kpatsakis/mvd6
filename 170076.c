void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_34_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 