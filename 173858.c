static void goodG2B2() wchar_t * data ; wchar_t dataGoodBuffer [ 100 ] ; if ( GLOBAL_CONST_TRUE )  data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 