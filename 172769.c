void bad() wchar_t * password ; password = L "" CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad * badObject = new CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad ( password ) ; CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad::CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad(wchar_t * passwordCopy) password = passwordCopy; password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  printLine ( "Memory could not be allocated" ); exit ( 1 ); wcscpy ( password , L "Password1234!" ) delete badObject CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad::~CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_84_bad() free ( password ); 