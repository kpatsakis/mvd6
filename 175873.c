static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "15" ); myStruct . structFirst = data; CWE606_Unchecked_Loop_Condition__char_file_67b_goodG2BSink ( myStruct ); void CWE606_Unchecked_Loop_Condition__char_file_67b_goodG2BSink(CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct) char * data = myStruct . structFirst ; if ( sscanf ( data , "%d" , & n ) == 1 )  