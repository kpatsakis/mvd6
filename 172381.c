void *calcIncamount(void *data) struct stonesoup_data * dataStruct = ( struct stonesoup_data * ) data ; dataStruct -> inc_amount = dataStruct -> data [ 0 ] - 'A'; stonesoup_readFile ( dataStruct -> file2 ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); fclose ( fifo ); 