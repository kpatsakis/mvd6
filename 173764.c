static void goodB2G2() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G2Sink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G2Sink(size_t data) if ( CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G2Global )  if ( data > wcslen ( HELLO_STRING ) && data < 100 )  