static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE114_Process_Control__w32_char_environment_22_goodG2B2Source ( data ); char * CWE114_Process_Control__w32_char_environment_22_goodG2B2Source(char * data) if ( CWE114_Process_Control__w32_char_environment_22_goodG2B2Global )  strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); return data ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 