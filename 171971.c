void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_61_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_61b_badSource ( data ); wchar_t * CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_61b_badSource(wchar_t * data) wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 