void CWE506_Embedded_Malicious_Code__w32_file_attrib_modified_05_bad() if ( staticTrue )  FILETIME ftModified ; hFile = CreateFile ( TEXT ( "badFile.txt" ) , GENERIC_READ | GENERIC_WRITE , 0 , NULL , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile == INVALID_HANDLE_VALUE )  if ( GetFileTime ( hFile , NULL , NULL , & ftModified ) == 0 )  SetFileTime ( hFile , ( LPFILETIME ) NULL , ( LPFILETIME ) NULL , & ftModified ); while ( 0 )  if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 