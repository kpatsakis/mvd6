void bad() char * data ; data = NULL; data = new char [ 50 ]; data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_loop_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_loop_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_loop_82_bad::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 