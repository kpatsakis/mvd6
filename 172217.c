void bad() twoIntsStruct * data ; data = NULL; CWE690_NULL_Deref_From_Return__struct_calloc_84_bad * badObject = new CWE690_NULL_Deref_From_Return__struct_calloc_84_bad ( data ) ; CWE690_NULL_Deref_From_Return__struct_calloc_84_bad::CWE690_NULL_Deref_From_Return__struct_calloc_84_bad(twoIntsStruct * dataCopy) data = dataCopy; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); delete badObject CWE690_NULL_Deref_From_Return__struct_calloc_84_bad::~CWE690_NULL_Deref_From_Return__struct_calloc_84_bad() data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 