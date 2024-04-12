int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle int AVPacket *avpkt) if ( ! avpkt -> data && avpkt -> size )  if ( ! avctx -> codec )  if ( avctx -> codec -> type != AVMEDIA_TYPE_SUBTITLE )  if ( ( avctx -> codec -> capabilities & AV_CODEC_CAP_DELAY ) || avpkt -> size )  AVPacket pkt_recoded ; AVPacket tmp = * avpkt ; int did_split = av_packet_split_side_data ( & tmp ) ; if ( did_split )  memset ( tmp . data + tmp . size , 0 , FFMIN ( avpkt -> size - tmp . size , AV_INPUT_BUFFER_PADDING_SIZE ) ); pkt_recoded = tmp; ret = recode_subtitle ( avctx , & pkt_recoded , & tmp ); static int recode_subtitle(AVCodecContext AVPacket *outpkt, const AVPacket *inpkt) char * inb , * outb ; size_t inl , outl ; AVPacket tmp ; if ( avctx -> sub_charenc_mode != FF_SUB_CHARENC_MODE_PRE_DECODER || inpkt -> size == 0 )  cd = iconv_open ( "UTF-8" , avctx -> sub_charenc ); inb = inpkt -> data; inl = inpkt -> size; if ( inl >= INT_MAX / UTF8_MAX_BYTES - AV_INPUT_BUFFER_PADDING_SIZE )  ret = av_new_packet ( & tmp , inl * UTF8_MAX_BYTES ); if ( ret < 0 )  outpkt -> buf = tmp . buf; outpkt -> data = tmp . data; outpkt -> size = tmp . size; outb = outpkt -> data; outl = outpkt -> size; if ( iconv ( cd , & inb , & inl , & outb , & outl ) == ( size_t ) - 1 || iconv ( cd , NULL , NULL , & outb , & outl ) == ( size_t ) - 1 || outl >= outpkt -> size || inl != 0 )  outpkt -> size -= outl; memset ( outpkt -> data + outpkt -> size , 0 , outl ); 