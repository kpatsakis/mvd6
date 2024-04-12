int av_probe_input_buffer(AVIOContext *pb,AVInputFormat **fmt,const char *filename,void *logctx,unsigned int offset,unsigned int max_probe_size) AVProbeData pd = { ( filename ? filename : "" ) , ( ( ( void * ) 0 ) ) , ( - offset ) } ; unsigned char * buf = ( ( void * ) 0 ) ; uint8_t * mime_type ; int probe_size ; int buf_offset = 0 ; if ( ! max_probe_size )  max_probe_size = ( 1 << 20 ); if ( max_probe_size > ( 1 << 20 ) )  max_probe_size = ( 1 << 20 ); if ( max_probe_size < 2048 )  if ( offset >= max_probe_size )  if ( ! ( * fmt ) && pb -> av_class && av_opt_get ( pb , "mime_type" , 0x1 , & mime_type ) >= 0 && mime_type )  if ( ! av_strcasecmp ( mime_type , "audio/aacp" ) )  * fmt = av_find_input_format ( "aac" ); AVInputFormat *av_find_input_format(const char *short_name) AVInputFormat * fmt = ( ( void * ) 0 ) ; while ( fmt = av_iformat_next ( fmt ) )  AVInputFormat *av_iformat_next(AVInputFormat *f) if ( f )  return f -> next ; return first_iformat ; if ( match_format ( short_name , fmt -> name ) )  static int match_format(const char *name,const char *names) const char * p ; int len ; int namelen ; if ( ! name || ! names )  return 0 ; namelen = ( strlen ( name ) ); while ( p = ( strchr ( names , ',' ) ) )  len = ( ( p - names > namelen ? p - names : namelen ) ); if ( ! av_strncasecmp ( name , names , len ) )  return 1 ; names = p + 1; return ! av_strcasecmp ( name , names ) ; return fmt ; return ( ( void * ) 0 ) ; for (probe_size = 2048; probe_size <= max_probe_size && !( *fmt); probe_size = (((probe_size << 1) > ((max_probe_size > (probe_size + 1)?max_probe_size : (probe_size + 1)))?((max_probe_size > (probe_size + 1)?max_probe_size : (probe_size + 1))) : (probe_size << 1)))) void * buftmp ; if ( probe_size < offset )  buftmp = av_realloc ( buf , ( probe_size + 32 ) ); if ( ! buftmp )  buf = buftmp; if ( ( ret = avio_read ( pb , buf + buf_offset , probe_size - buf_offset ) ) < 0 )  if ( ret != - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) )  score = 0; ret = 0; pd . buf_size = buf_offset += ret; pd . buf = & buf [ offset ]; memset ( ( pd . buf + pd . buf_size ) , 0 , 32 ); * fmt = av_probe_input_format2 ( & pd , 1 , & score ); AVInputFormat *av_probe_input_format2(AVProbeData *pd,int is_opened,int *score_max) AVInputFormat * fmt = av_probe_input_format3 ( pd , is_opened , & score_ret ) ; AVInputFormat *av_probe_input_format3(AVProbeData *pd,int is_opened,int *score_ret) AVProbeData lpd = * pd ; AVInputFormat * fmt1 = ( ( void * ) 0 ) ; static const uint8_t zerobuffer [ 32 ] ; if ( ! lpd . buf )  lpd . buf = zerobuffer; if ( lpd . buf_size > '\n' && ff_id3v2_match ( lpd . buf , "ID3" ) )  int id3len = ff_id3v2_tag_len ( lpd . buf ) ; if ( lpd . buf_size > id3len + 16 )  lpd . buf += id3len; lpd . buf_size -= id3len; while ( fmt1 = av_iformat_next ( fmt1 ) )  AVInputFormat *av_iformat_next(AVInputFormat *f) if ( f )  return f -> next ; return first_iformat ; if ( ! is_opened == ! ( fmt1 -> flags & 0x1 ) )  if ( fmt1 -> read_probe )  if ( fmt1 -> extensions && av_match_ext ( lpd . filename , fmt1 -> extensions ) )  int av_match_ext(const char *filename,const char *extensions) const char * ext ; if ( ! filename )  ext = ( strrchr ( filename , '.' ) ); if ( ext )  ext ++; if ( ! av_strcasecmp ( ext1 , ext ) )  