void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_bad() wchar_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 