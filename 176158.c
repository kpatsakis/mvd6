void CWE127_Buffer_Underread__wchar_t_declare_ncpy_53_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; CWE127_Buffer_Underread__wchar_t_declare_ncpy_53b_badSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_ncpy_53b_badSink(wchar_t * data) CWE127_Buffer_Underread__wchar_t_declare_ncpy_53c_badSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_ncpy_53c_badSink(wchar_t * data) CWE127_Buffer_Underread__wchar_t_declare_ncpy_53d_badSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_ncpy_53d_badSink(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' wcsncpy ( dest , data , wcslen ( dest ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 