void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_61_bad() size_t data ; data = 0; data = CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_61b_badSource ( data ); size_t CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_61b_badSource(size_t data) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); return data ; if ( data > wcslen ( HELLO_STRING ) )  