static void goodB2G() FILE * data ; FILE * dataArray [ 5 ] ; data = NULL; data = freopen ( "BadSource_freopen.txt" , "w+" , stdin ); dataArray [ 2 ] = data; CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_66b_goodB2GSink ( dataArray ); void CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_66b_goodB2GSink(FILE * dataArray[]) FILE * data = dataArray [ 2 ] ; if ( data != NULL )  fclose ( data ); 