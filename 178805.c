void CWE114_Process_Control__w32_char_relativePath_17_bad() int i ; char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) strcpy ( data , "winsrv.dll" ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 