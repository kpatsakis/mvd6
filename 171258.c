void bad() short data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); CWE194_Unexpected_Sign_Extension__fgets_strncpy_82_base * baseObject = new CWE194_Unexpected_Sign_Extension__fgets_strncpy_82_bad baseObject -> action ( data ); void CWE194_Unexpected_Sign_Extension__fgets_strncpy_82_bad::action(short data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 