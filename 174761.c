static void goodG2B() wchar_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_67_structType myStruct ; wchar_t dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = L '\0' myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 