 main(int argc, char **argv) char * userstr , * str2 ; if ( argc > 1 )  userstr = argv [ 1 ]; str2 = shortstr ( userstr , strlen ( userstr ) , MAXSIZE - 1 ); char shortstr(char *p, int n, int targ) if ( n > targ )  return shortstr ( p + 1 , n - 1 , targ ) ; char shortstr(char *p, int n, int targ) if ( n > targ )  return shortstr ( p + 1 , n - 1 , targ ) ; return p ; return p ; test ( str2 );  test(char *str) char buf [ MAXSIZE ] ; strcpy ( buf , str ); printf ( "result: %s\n" , buf ); 