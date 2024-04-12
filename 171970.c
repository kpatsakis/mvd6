static int skinny_extensionstate_cb(const char *context, const char *exten, enum ast_extension_states state, void *data) struct skinny_container * container = data ; if ( container -> type == SKINNY_SDCONTAINER )  if ( container -> type == SKINNY_SUBLINECONTAINER )  struct skinny_subline * subline = container -> data ; struct skinny_line * l = subline -> line ; d = l -> device; subline -> extenstate = state; if ( subline -> callid == 0 )  switch ( state )  if ( subline -> sub && ( subline -> sub -> substate == SKINNY_CONNECTED ) )  transmit_selectsoftkeys ( d , l -> instance , subline -> callid , KEYDEF_SLACONNECTEDNOTACTIVE ); static void transmit_selectsoftkeys(struct skinny_device *d, int instance, int callid, int softkey) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct select_soft_keys_message ) , SELECT_SOFT_KEYS_MESSAGE ) ) )  req -> data . selectsoftkey . instance = htolel ( instance ); req -> data . selectsoftkey . reference = htolel ( callid ); req -> data . selectsoftkey . softKeySetIndex = htolel ( softkey ); req -> data . selectsoftkey . validKeyMask = htolel ( 0xFFFFFFFF ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 