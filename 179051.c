static void goodG2B() wchar_t * data ; data = NULL; data = new wchar_t [ 10 + 1 ]; goodG2BSink_b ( data ); void goodG2BSink_b(wchar_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(wchar_t * data) goodG2BSink_d ( data ); void goodG2BSink_d(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 