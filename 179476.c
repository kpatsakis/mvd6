static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE606_Unchecked_Loop_Condition__wchar_t_console_84_goodB2G * goodB2GObject = new CWE606_Unchecked_Loop_Condition__wchar_t_console_84_goodB2G ( data ) ; CWE606_Unchecked_Loop_Condition__wchar_t_console_84_goodB2G::CWE606_Unchecked_Loop_Condition__wchar_t_console_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  