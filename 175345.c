static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; strcat ( data , "file.txt" ); myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) char * data = myStruct . structFirst ; outputFile . open ( ( char * ) data ); 