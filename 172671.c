static void eepro100_write(void *opaque, hwaddr uint64_t data, unsigned size) EEPRO100State * s = opaque ; switch ( size )  eepro100_write2 ( s , addr , data ); static void eepro100_write2(EEPRO100State * s, uint32_t addr, uint16_t val) switch ( addr )  s -> mem [ SCBAck ] = ( val >> 8 ); eepro100_write_command ( s , val ); static void eepro100_write_command(EEPRO100State * s, uint8_t val) eepro100_ru_command ( s , val & 0x0f ); static void eepro100_ru_command(EEPRO100State * s, uint8_t val) switch ( val )  if ( get_ru_state ( s ) != ru_idle )  assert ( ! "wrong RU state" ); 