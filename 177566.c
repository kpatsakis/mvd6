static void goodG2B() int h ; wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; for(h = 0; h < 1; h++) wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 