cgiEnvironmentResultType cgiWriteEnvironment(char *filename) FILE * out ; cgiFormEntry * e ; out = fopen ( filename , "wb" ); if ( ! out )  if ( ! cgiWriteString ( out , "CGIC2.0" ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiServerSoftware ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiServerName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiGatewayInterface ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiServerProtocol ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiServerPort ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiRequestMethod ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiPathInfo ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiPathTranslated ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiScriptName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiQueryString ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiRemoteHost ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiRemoteAddr ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiAuthType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiRemoteUser ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiRemoteIdent ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiContentType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiAccept ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiUserAgent ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiReferrer ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , cgiCookie ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteInt ( out , cgiContentLength ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; e = cgiFormEntryFirst; while ( e )  cgiFilePtr fp ; if ( ! cgiWriteString ( out , e -> attr ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , e -> value ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , e -> fileName ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteString ( out , e -> contentType ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; if ( ( ( int ) fwrite ( s , 1 , len , out ) ) != len )  return 0 ; return 1 ; if ( ! cgiWriteInt ( out , e -> valueLength ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; if ( cgiFormFileOpen ( e -> attr , & fp ) == cgiFormSuccess )  cgiFormResultType char *name, cgiFilePtr *cfpp) cgiFormEntry * e ; cgiFilePtr cfp ; e = cgiFormEntryFindFirst ( name ); static cgiFormEntry *cgiFormEntryFindFirst(char *name) return cgiFormEntryFindNext ( ) ; static cgiFormEntry *cgiFormEntryFindNext() while ( cgiFindPos )  cgiFormEntry * c = cgiFindPos ; cgiFindPos = c -> next; if ( ! strcmp ( c -> attr , cgiFindTarget ) )  return c ; return 0 ; if ( ! e )  return cgiFormNotFound ; if ( ! strlen ( e -> tfileName ) )  return cgiFormNotAFile ; cfp = ( cgiFilePtr ) malloc ( sizeof ( cgiFile ) ); if ( ! cfp )  return cgiFormMemory ; cfp -> in = fopen ( e -> tfileName , "rb" ); if ( ! cfp -> in )  return cgiFormIO ; return cgiFormSuccess ; char buffer [ 1024 ] ; int got ; if ( ! cgiWriteInt ( out , 1 ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; while ( cgiFormFileRead ( fp , buffer , sizeof ( buffer ) , & got ) == cgiFormSuccess )  cgiFormResultType cgiFilePtr cfp, char int bufferSize, int *gotP) if ( ! cfp )  return cgiFormOpenFailed ; got = fread ( buffer , 1 , bufferSize , cfp -> in ); if ( got <= 0 )  return cgiFormEOF ; return cgiFormSuccess ; if ( ( ( int ) fwrite ( buffer , 1 , got , out ) ) != got )  if ( cgiFormFileClose ( fp ) != cgiFormSuccess )  cgiFormResultType cgiFormFileClose(cgiFilePtr cfp) if ( ! cfp )  fclose ( cfp -> in ); free ( cfp ); if ( ! cgiWriteInt ( out , 0 ) )  static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  e = e -> next; 