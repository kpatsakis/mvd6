void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_17_bad() int i ; twoIntsStruct * data ; twoIntsStruct dataBadBuffer [ 50 ] ; for(i = 0; i < 1; i++) data = dataBadBuffer; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 