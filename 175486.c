void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_17_bad() int j ; for(j = 0; j < 1; j++) wchar_t data [ 150 ] , dest [ 100 ] ; wmemset ( data , L 'A' , 149 data [ 149 ] = L '\0' wcsncpy ( dest , data , 99 ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 