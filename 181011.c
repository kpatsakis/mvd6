static void vmsvga_update_display(void *opaque) struct vmsvga_state_s * s = opaque ; if ( ! s -> enable )  vmsvga_update_rect_flush ( s ); static inline void vmsvga_update_rect_flush(struct vmsvga_state_s *s) struct vmsvga_rect_s * rect ; if ( s -> invalidated )  while ( s -> redraw_fifo_first != s -> redraw_fifo_last )  rect = & s -> redraw_fifo [ s -> redraw_fifo_first ++ ]; s -> redraw_fifo_first &= REDRAW_FIFO_LEN - 1; vmsvga_update_rect ( s , rect -> x , rect -> y , rect -> w , rect -> h ); static inline void vmsvga_update_rect(struct vmsvga_state_s int x, int y, int w, int h) DisplaySurface * surface = qemu_console_surface ( s -> vga . con ) ; if ( ! vmsvga_verify_rect ( surface , __func__ , x , y , w , h ) )  static inline bool vmsvga_verify_rect(DisplaySurface const char int x, int y, int w, int h) if ( x < 0 )  if ( x > SVGA_MAX_WIDTH )  if ( w < 0 )  if ( w > SVGA_MAX_WIDTH )  fprintf ( stderr , "%s: w was > %d (%d)\n" , name , SVGA_MAX_WIDTH , w ); 