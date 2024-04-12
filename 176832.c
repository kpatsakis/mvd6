static int handle_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  transmit_definetimedate ( d ); static void transmit_definetimedate(struct skinny_device *d) struct skinny_req * req ; struct timeval now = ast_tvnow ( ) ; struct ast_tm cmtime ; if ( ! ( req = req_alloc ( sizeof ( struct definetimedate_message ) , DEFINETIMEDATE_MESSAGE ) ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; req -> data . definetimedate . year = htolel ( cmtime . tm_year + 1900 ); req -> data . definetimedate . month = htolel ( cmtime . tm_mon + 1 ); req -> data . definetimedate . dayofweek = htolel ( cmtime . tm_wday ); req -> data . definetimedate . day = htolel ( cmtime . tm_mday ); req -> data . definetimedate . hour = htolel ( cmtime . tm_hour ); req -> data . definetimedate . minute = htolel ( cmtime . tm_min ); req -> data . definetimedate . seconds = htolel ( cmtime . tm_sec ); req -> data . definetimedate . milliseconds = htolel ( cmtime . tm_usec / 1000 ); req -> data . definetimedate . timestamp = htolel ( now . tv_sec ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  