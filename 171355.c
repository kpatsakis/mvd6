void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53_bad() wchar_t * data ; wchar_t * dataBadBuffer = ( wchar_t * ) ALLOCA ( ( 10 ) * sizeof ( wchar_t ) ) ; data = dataBadBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53c_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_53d_badSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 