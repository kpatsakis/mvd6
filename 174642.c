static void goodG2B() wchar_t * data ; wchar_t * * dataPtr2 = & data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "fixedstringtest" ) wchar_t * data = * dataPtr2 ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 