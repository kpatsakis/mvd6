 nestegg_sniff(unsigned char const * buffer, size_t length) nestegg_io io ; struct sniff_buffer userdata ; userdata . buffer = buffer; userdata . length = length; userdata . offset = 0; io . read = ne_buffer_read; io . seek = ne_buffer_seek; io . tell = ne_buffer_tell; io . userdata = & userdata; return ne_match_webm ( io , length ) ; static ne_match_webm(nestegg_io io, int64_t max_offset) int r ; uint64_t id ; nestegg * ctx ; if ( ! ( io . read && io . seek && io . tell ) )  ctx = ne_alloc ( sizeof ( * ctx ) ); static void ne_alloc(size_t size) return calloc ( 1 , size ) ; if ( ! ctx )  ctx -> io = ne_alloc ( sizeof ( * ctx -> io ) ); static void ne_alloc(size_t size) return calloc ( 1 , size ) ; if ( ! ctx -> io )  * ctx -> io = io; ctx -> alloc_pool = ne_pool_init ( ); static struct pool_ctx ne_pool_init(void) return h_malloc ( sizeof ( struct pool_ctx ) ) ; if ( ! ctx -> alloc_pool )  ctx -> log = ne_null_log_callback; r = ne_peek_element ( ctx , & id , NULL ); static ne_peek_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; if ( ctx -> last_valid )  return 1 ; r = ne_read_id ( ctx -> io , & ctx -> last_id , NULL ); if ( r != 1 )  return r ; r = ne_read_vint ( ctx -> io , & ctx -> last_size , NULL ); if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  if ( id != ID_EBML )  ne_parse ( ctx , NULL , max_offset ); static ne_parse(nestegg * ctx, struct ebml_element_desc * top_level, int64_t max_offset) int r ; int64_t * data_offset ; uint64_t id , size , peeked_id ; struct ebml_element_desc * element ; if ( ! ctx -> ancestor )  if ( max_offset > 0 && ne_io_tell ( ctx -> io ) >= max_offset )  r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  element = ne_find_element ( id , ctx -> ancestor -> node ); if ( element )  if ( element -> flags & DESC_FLAG_SUSPEND )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  if ( element -> flags & DESC_FLAG_OFFSET )  data_offset = ( int64_t * ) ( ctx -> ancestor -> data + element -> data_offset ); * data_offset = ne_io_tell ( ctx -> io ); if ( * data_offset < 0 )  if ( element -> type == TYPE_MASTER )  if ( element -> flags & DESC_FLAG_MULTI )  if ( ne_read_master ( ctx , element ) < 0 )  if ( ne_read_single_master ( ctx , element ) < 0 )  r = ne_read_simple ( ctx , element , size ); if ( r < 0 )  if ( ne_is_ancestor_element ( id , ctx -> ancestor -> previous ) )  if ( top_level && ctx -> ancestor -> node == top_level )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_io_read_skip ( ctx -> io , size ); if ( r != 1 )  static ne_read_single_master(nestegg * ctx, struct ebml_element_desc * desc) assert ( desc -> type == TYPE_MASTER && ! ( desc -> flags & DESC_FLAG_MULTI ) ); 