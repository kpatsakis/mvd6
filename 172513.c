void CWE400_Resource_Exhaustion__fgets_fwrite_63_bad() int count ; count = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); CWE400_Resource_Exhaustion__fgets_fwrite_63b_badSink ( & count ); void CWE400_Resource_Exhaustion__fgets_fwrite_63b_badSink(int * countPtr) int count = * countPtr ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  