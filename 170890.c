void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_bad() twoIntsStruct * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_structType myStruct ; twoIntsStruct dataBadBuffer [ 50 ] ; data = dataBadBuffer; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 