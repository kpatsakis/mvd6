static CVE_2014_6429_VULN_SnifferDecompress(unsigned char *inbuf, size_t inlen, unsigned char size_t outlen, int *err) unsigned char * pin = inbuf ; unsigned char * pout = outbuf ; unsigned char * pin_end = pin + inlen ; unsigned char * pout_end = pout + outlen ; unsigned int bit_mask ; unsigned int bit_value = 0 ; unsigned int code_type ; unsigned int code_low ; int length ; int offset ; if ( inlen > G_MAXUINT16 )  bit_mask = 0; while ( 1 )  bit_mask = bit_mask >> 1; if ( 0 == bit_mask )  bit_mask = 0x8000; bit_value = pletoh16 ( pin ); pin += 2; if ( pin >= pin_end )  if ( ! ( bit_mask & bit_value ) )  * ( pout ++ ) = * ( pin ++ ); code_type = ( unsigned int ) ( ( * pin ) >> 4 ) & 0xF; code_low = ( unsigned int ) ( ( * pin ) & 0xF ); pin ++; if ( pin >= pin_end )  switch ( code_type )  length = code_low + 3; if ( pout + length > pout_end )  memset ( pout , * pin ++ , length ); pout += length; length = code_low + ( ( unsigned int ) ( * pin ++ ) << 4 ) + 19; if ( pin >= pin_end )  if ( pout + length > pout_end )  memset ( pout , * pin ++ , length ); pout += length; offset = code_low + ( ( unsigned int ) ( * pin ++ ) << 4 ) + 3; if ( pin >= pin_end )  if ( pout - offset < outbuf )  length = ( unsigned int ) ( * pin ++ ) + 16; if ( pout + length > pout_end )  memcpy ( pout , pout - offset , length ); pout += length; offset = code_low + ( ( unsigned int ) ( * pin ++ ) << 4 ) + 3; if ( pout - offset < outbuf )  length = code_type; if ( pout + length > pout_end )  memcpy ( pout , pout - offset , length ); pout += length; if ( pin >= pin_end )  return ( int ) ( pout - outbuf ) ; 