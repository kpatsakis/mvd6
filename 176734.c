static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 