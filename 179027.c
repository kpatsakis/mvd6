static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; strcat ( data , "c:\\temp\\file.txt" ); char * dataCopy = data ; char * data = dataCopy ; fileDesc = OPEN ( data , O_RDWR | O_CREAT , S_IREAD | S_IWRITE ); if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 