static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_goodG2B * goodG2BObject = new CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_goodG2B ( data ) ; CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_goodG2B::CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_goodG2B(wchar_t * dataCopy) FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  fclose ( pFile ); 