void CWE688_Function_Call_With_Incorrect_Variable_or_Reference_as_Argument__basic_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char dest [ DEST_SIZE ] ; int intFive = 5 ; sprintf ( dest , "%s" , intFive ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); sprintf ( dest , "%d" , intFive ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 