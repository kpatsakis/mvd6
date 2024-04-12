static int CVE_2013_0868_PATCHED_read_old_huffman_tables(HYuvContext *s) GetBitContext gb ; int i ; if ( read_len_table ( s -> len [ 0 ] , & gb ) < 0 )  if ( read_len_table ( s -> len [ 1 ] , & gb ) < 0 )  for(i=0; i<256; i++) s->bits[0][i] = classic_add_luma  [i]; for(i=0; i<256; i++) s->bits[1][i] = classic_add_chroma[i]; if ( s -> bitstream_bpp >= 24 )  memcpy ( s -> bits [ 1 ] , s -> bits [ 0 ] , 256 * sizeof ( uint32_t ) ); memcpy ( s -> len [ 1 ] , s -> len [ 0 ] , 256 * sizeof ( uint8_t ) ); memcpy ( s -> bits [ 2 ] , s -> bits [ 1 ] , 256 * sizeof ( uint32_t ) ); memcpy ( s -> len [ 2 ] , s -> len [ 1 ] , 256 * sizeof ( uint8_t ) ); ff_free_vlc ( & s -> vlc [ i ] ); if ( ( ret = init_vlc ( & s -> vlc [ i ] , VLC_BITS , 256 , s -> len [ i ] , 1 , 1 , s -> bits [ i ] , 4 , 4 , 0 ) ) < 0 )  return ret ; generate_joint_tables ( s ); 