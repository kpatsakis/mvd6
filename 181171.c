static void good2() if ( GLOBAL_CONST_FIVE == 5 )  char string1 [ ] = SOURCE_STRING ; char * slashInString1 ; slashInString1 = strchr ( string1 , '/' ); if ( slashInString1 == NULL )  indexOfSlashInString1 = ( size_t ) ( slashInString1 - string1 ); printUnsignedLine ( indexOfSlashInString1 ); void printUnsignedLine(unsigned unsignedNumber) printf ( "%u\n" , unsignedNumber ); 