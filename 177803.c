static void goodG2B() int h ; wchar_t * password ; for(h = 0; h < 1; h++) password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( wchar_t ) ) )  wcscpy ( password , L "Password1234!" ) if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 