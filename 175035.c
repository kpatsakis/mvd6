void CWE134_Uncontrolled_Format_String__char_file_fprintf_12_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "fixedstringtest" ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; fprintf ( stdout , data ); fprintf ( stdout , "%s\n" , data ); 