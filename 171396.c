void CWE126_Buffer_Overread__CWE129_fgets_67_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myStruct . structFirst = data; CWE126_Buffer_Overread__CWE129_fgets_67b_badSink ( myStruct ); void CWE126_Buffer_Overread__CWE129_fgets_67b_badSink(CWE126_Buffer_Overread__CWE129_fgets_67_structType myStruct) int data = myStruct . structFirst ; if ( data >= 0 )  printIntLine ( buffer [ data ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 