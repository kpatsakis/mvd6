static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; strcat ( data , "file.txt" ); dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; inputFile . open ( ( char * ) data ); 