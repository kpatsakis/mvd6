void CWE126_Buffer_Overread__wchar_t_alloca_memcpy_68b_badSink() wchar_t * data = CWE126_Buffer_Overread__wchar_t_alloca_memcpy_68_badData ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 