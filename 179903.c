int create_dns_file() unsigned char buf [ 200 ] ; unsigned char * p ; unsigned char * temp ; int i , type , len ; strcat ( buf , "HEADER JUNK:" ); strcat ( buf , "LL.MIT.EDU" ); i = len = strlen ( buf ); p = buf + i; * p ++ = 0; * p ++ = 16; * p ++ = 0; * p ++ = 1; p = buf + i + 4; temp = "BLAH.MIT.EDU"; strcpy ( p , temp ); i = strlen ( temp ); p += i; * p ++ = 0; * p ++ = 16; * p ++ = 0; * p ++ = 1; * p ++ = 0; * p ++ = 0; * p ++ = 0; * p ++ = 255; * p ++ = 0; * p ++ = 20; * p ++ = 30; strcat ( p , "This is random junk in the TXT record that will overflow (*rr)->rr_u.rr_txt" ); for(i=0; i<len; i++, p++) fputc ( * p , f ); 