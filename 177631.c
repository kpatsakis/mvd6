void goodG2BSink() wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_memcpy_68_goodG2BData ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 