static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; while ( 1 )  strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 