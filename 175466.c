void CWE467_Use_of_sizeof_on_Pointer_Type__char_13_bad() if ( GLOBAL_CONST_FIVE == 5 )  badChar = ( char * ) malloc ( sizeof ( badChar ) ); * badChar = 'B'; printHexCharLine ( * badChar ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); free ( badChar ); 