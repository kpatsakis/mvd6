static void ide_ioport_write(void *opaque, uint32_t addr, uint32_t val) IDEState * ide_if = opaque ; addr &= 7; if ( addr != 7 && ( ide_if -> cur_drive -> status & ( BUSY_STAT | DRQ_STAT ) ) )  switch ( addr )  ide_if [ 0 ] . hob_feature = ide_if [ 0 ] . feature; ide_if [ 1 ] . hob_feature = ide_if [ 1 ] . feature; ide_if [ 0 ] . feature = val; ide_if [ 1 ] . feature = val; ide_if [ 0 ] . hob_nsector = ide_if [ 0 ] . nsector; ide_if [ 1 ] . hob_nsector = ide_if [ 1 ] . nsector; ide_if [ 0 ] . nsector = val; ide_if [ 1 ] . nsector = val; ide_if [ 0 ] . hob_sector = ide_if [ 0 ] . sector; ide_if [ 1 ] . hob_sector = ide_if [ 1 ] . sector; ide_if [ 0 ] . sector = val; ide_if [ 1 ] . sector = val; ide_if [ 0 ] . hob_lcyl = ide_if [ 0 ] . lcyl; ide_if [ 1 ] . hob_lcyl = ide_if [ 1 ] . lcyl; ide_if [ 0 ] . lcyl = val; ide_if [ 1 ] . lcyl = val; ide_if [ 0 ] . hob_hcyl = ide_if [ 0 ] . hcyl; ide_if [ 1 ] . hob_hcyl = ide_if [ 1 ] . hcyl; ide_if [ 0 ] . hcyl = val; ide_if [ 1 ] . hcyl = val; ide_if [ 0 ] . select = ( val & ~0x10 ) | 0xa0; ide_if [ 1 ] . select = ( val | 0x10 ) | 0xa0; buffered_pio_reset ( ide_if -> cur_drive ); static inline buffered_pio_reset(IDEState *s) struct pio_buffer * piobuf ; if ( ( unsigned ) s -> drive_serial - 1 < 2 )  piobuf = & buffered_pio_page -> pio [ PIO_BUFFER_IDE_PRIMARY ]; if ( ( unsigned ) s -> drive_serial - 3 < 2 )  piobuf = & buffered_pio_page -> pio [ PIO_BUFFER_IDE_SECONDARY ]; buffered_pio_flush ( piobuf ); static inline buffered_pio_flush(struct pio_buffer *piobuf) IDEState * s = piobuf -> opaque ; uint32_t pointer = piobuf -> pointer ; if ( s != NULL && pointer > 0 )  __buffered_pio_flush ( piobuf , s , pointer ); static inline __buffered_pio_flush(struct pio_buffer *piobuf, IDEState *s, uint32_t pointer) uint8_t * buf = ( uint8_t * ) buffered_pio_page + piobuf -> page_offset ; memcpy ( s -> data_ptr , buf , pointer ); s -> data_ptr += pointer; 