static void goodG2B() char * data ; CWE114_Process_Control__w32_char_relativePath_67_structType myStruct ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); myStruct . structFirst = data; CWE114_Process_Control__w32_char_relativePath_67b_goodG2BSink ( myStruct ); void CWE114_Process_Control__w32_char_relativePath_67b_goodG2BSink(CWE114_Process_Control__w32_char_relativePath_67_structType myStruct) char * data = myStruct . structFirst ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 