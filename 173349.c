static void md_common_write(void *opaque, uint32_t at, uint16_t value) struct md_s * s = ( struct md_s * ) opaque ; at -= s -> io_base; switch ( s -> opt & OPT_MODE )  if ( ( at & ~0x3ff ) == 0x400 )  at = 0; at &= 0xf; if ( ( at & ~0xf ) == 0x3f0 )  at -= 0x3e8; if ( ( at & ~0xf ) == 0x1f0 )  at -= 0x1f0; if ( ( at & ~0xf ) == 0x370 )  at -= 0x368; if ( ( at & ~0xf ) == 0x170 )  at -= 0x170; switch ( at )  if ( s -> cycle )  s -> io = value & 0xff; s -> cycle = ! s -> cycle; s -> io = value & 0xff; s -> cycle = ! s -> cycle; s -> ctrl = value; if ( s -> stat & STAT_PWRDWN )  s -> pins |= PINS_CRDY; s -> stat &= ~STAT_PWRDWN; ide_ioport_write ( s -> ide , at , value ); static void ide_ioport_write(void *opaque, uint32_t addr, uint32_t val) IDEState * ide_if = opaque ; IDEState * s ; int unit , n ; addr &= 7; if ( addr != 7 && ( ide_if -> cur_drive -> status & ( BUSY_STAT | DRQ_STAT ) ) )  switch ( addr )  ide_if [ 0 ] . hob_feature = ide_if [ 0 ] . feature; ide_if [ 1 ] . hob_feature = ide_if [ 1 ] . feature; ide_if [ 0 ] . feature = val; ide_if [ 1 ] . feature = val; ide_if [ 0 ] . hob_nsector = ide_if [ 0 ] . nsector; ide_if [ 1 ] . hob_nsector = ide_if [ 1 ] . nsector; ide_if [ 0 ] . nsector = val; ide_if [ 1 ] . nsector = val; ide_if [ 0 ] . hob_sector = ide_if [ 0 ] . sector; ide_if [ 1 ] . hob_sector = ide_if [ 1 ] . sector; ide_if [ 0 ] . sector = val; ide_if [ 1 ] . sector = val; ide_if [ 0 ] . hob_lcyl = ide_if [ 0 ] . lcyl; ide_if [ 1 ] . hob_lcyl = ide_if [ 1 ] . lcyl; ide_if [ 0 ] . lcyl = val; ide_if [ 1 ] . lcyl = val; ide_if [ 0 ] . hob_hcyl = ide_if [ 0 ] . hcyl; ide_if [ 1 ] . hob_hcyl = ide_if [ 1 ] . hcyl; ide_if [ 0 ] . hcyl = val; ide_if [ 1 ] . hcyl = val; ide_if [ 0 ] . select = ( val & ~0x10 ) | 0xa0; ide_if [ 1 ] . select = ( val | 0x10 ) | 0xa0; unit = ( val >> 4 ) & 1; s = ide_if + unit; ide_if -> cur_drive = s; s = ide_if -> cur_drive; if ( ! s -> bs )  if ( ( s -> status & ( BUSY_STAT | DRQ_STAT ) ) && val != WIN_DEVICE_RESET )  switch ( val )  if ( s -> bs && ! s -> is_cdrom )  if ( ! s -> is_cf )  ide_identify ( s ); static void ide_identify(IDEState *s) if ( s -> identify_set )  memcpy ( s -> io_buffer , s -> identify_data , sizeof ( s -> identify_data ) ); 