static void good2() if ( STATIC_CONST_FIVE == 5 )  wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wchar_t * tmpData ; wcscpy ( data , L "A String" ) tmpData = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( tmpData != NULL )  data = tmpData; wcscpy ( data , L "New String" ) free ( data ); 