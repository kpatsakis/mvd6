static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( ( 10 + 1 ) * sizeof ( wchar_t ) ) ; data = dataGoodBuffer; data [ 0 ] = L '\0' dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_66b_goodG2BSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 