int cpu_memory_rw_debug(CPUState *cpu, target_ulong uint8_t *buf, int len, int is_write) int l ; hwaddr phys_addr ; target_ulong page ; while ( len > 0 )  page = addr & TARGET_PAGE_MASK; phys_addr = cpu_get_phys_page_debug ( cpu , page ); if ( phys_addr == - 1 )  l = ( page + TARGET_PAGE_SIZE ) - addr; if ( l > len )  l = len; phys_addr += ( addr & ~TARGET_PAGE_MASK ); if ( is_write )  cpu_physical_memory_rw ( phys_addr , buf , l , is_write ); len -= l; buf += l; addr += l; void cpu_physical_memory_rw(hwaddr addr, uint8_t int len, int is_write) address_space_rw ( & address_space_memory , addr , buf , len , is_write ); bool address_space_rw(AddressSpace *as, hwaddr addr, uint8_t int len, bool is_write) hwaddr l ; uint8_t * ptr ; hwaddr addr1 ; MemoryRegion * mr ; while ( len > 0 )  l = len; mr = address_space_translate ( as , addr , & addr1 , & l , is_write ); if ( is_write )  if ( ! memory_access_is_direct ( mr , is_write ) )  l = memory_access_size ( mr , l , addr1 ); addr1 += memory_region_get_ram_addr ( mr ); ptr = qemu_get_ram_ptr ( addr1 ); memcpy ( ptr , buf , l ); if ( ! memory_access_is_direct ( mr , is_write ) )  l = memory_access_size ( mr , l , addr1 ); ptr = qemu_get_ram_ptr ( mr -> ram_addr + addr1 ); memcpy ( buf , ptr , l ); len -= l; buf += l; addr += l; 