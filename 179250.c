static void goodG2B() wchar_t * data ; CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType myStruct ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; myStruct . structFirst = data; CWE127_Buffer_Underread__wchar_t_declare_cpy_67b_goodG2BSink ( myStruct ); void CWE127_Buffer_Underread__wchar_t_declare_cpy_67b_goodG2BSink(CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 