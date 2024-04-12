static uint64_t eepro100_read(void *opaque, hwaddr unsigned size) EEPRO100State * s = opaque ; switch ( size )  return eepro100_read2 ( s , addr ) ; static uint16_t eepro100_read2(EEPRO100State * s, uint32_t addr) uint16_t val = 0 ; if ( addr <= sizeof ( s -> mem ) - sizeof ( val ) )  val = e100_read_reg2 ( s , addr ); switch ( addr )  val = eepro100_read_eeprom ( s ); val = ( uint16_t ) ( eepro100_read_mdi ( s ) >> ( 8 * ( addr & 3 ) ) ); static uint32_t eepro100_read_mdi(EEPRO100State * s) uint32_t val = e100_read_reg4 ( s , SCBCtrlMDI ) ; val |= BIT ( 28 ); return val ; logout ( "addr=%s val=0x%04x\n" , regname ( addr ) , val ); static char *regname(uint32_t addr) static char buf [ 32 ] ; if ( addr < PCI_IO_SIZE )  snprintf ( buf , sizeof ( buf ) , "??? 0x%08x" , addr ); return buf ; 