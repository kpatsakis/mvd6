void CWE401_Memory_Leak__malloc_realloc_int64_t_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; data [ 0 ] = 5L L data = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( data != NULL )  data [ 0 ] = 10L L int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; int64_t * tmpData ; data [ 0 ] = 5L L tmpData = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] = 10L L free ( data ); 