void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_15_bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; switch ( 6 )  wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 