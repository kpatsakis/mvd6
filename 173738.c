static void rtl8139_io_writel(void *opaque, uint8_t addr, uint32_t val) switch ( addr )  rtl8139_io_writeb ( opaque , addr + 2 , ( val >> 16 ) & 0xff ); static void rtl8139_io_writeb(void *opaque, uint8_t addr, uint32_t val) RTL8139State * s = opaque ; switch ( addr )  if ( val == 'R' )  if ( val == 'H' )  s -> clock_enabled = 0; s -> TxThresh = val; if ( val & ( 1 << 6 ) )  rtl8139_cplus_transmit ( s ); static void rtl8139_cplus_transmit(RTL8139State *s) while ( rtl8139_cplus_transmit_one ( s ) )  static int rtl8139_cplus_transmit_one(RTL8139State *s) if ( ! rtl8139_transmitter_enabled ( s ) )  static int rtl8139_transmitter_enabled(RTL8139State *s) return s -> bChipCmdState & CmdTxEnb ; if ( ! rtl8139_cp_transmitter_enabled ( s ) )  static int rtl8139_cp_transmitter_enabled(RTL8139State *s) return s -> CpCmd & CPlusTxEnb ; uint32_t val , txdw0 , txdw1 , txbufLO , txbufHI ; txdw0 = le32_to_cpu ( val ); if ( ! ( txdw0 & CP_TX_OWN ) )  if ( txdw0 & CP_TX_FS )  s -> cplus_txbuffer_offset = 0; int txsize = txdw0 & CP_TX_BUFFER_SIZE_MASK ; if ( ! s -> cplus_txbuffer )  s -> cplus_txbuffer_len = CP_TX_BUFFER_SIZE; s -> cplus_txbuffer = g_malloc ( s -> cplus_txbuffer_len ); s -> cplus_txbuffer_offset = 0; if ( s -> cplus_txbuffer_offset + txsize >= s -> cplus_txbuffer_len )  txsize = s -> cplus_txbuffer_len - s -> cplus_txbuffer_offset; s -> cplus_txbuffer_offset += txsize; if ( txdw0 & CP_TX_EOR )  s -> currCPlusTxDesc = 0; if ( s -> currCPlusTxDesc >= 64 )  s -> currCPlusTxDesc = 0; txdw0 &= ~CP_RX_OWN; txdw0 &= ~CP_TX_STATUS_UNF; txdw0 &= ~CP_TX_STATUS_TES; txdw0 &= ~CP_TX_STATUS_OWC; txdw0 &= ~CP_TX_STATUS_LNKF; txdw0 &= ~CP_TX_STATUS_EXC; if ( txdw0 & CP_TX_LS )  uint8_t * saved_buffer = s -> cplus_txbuffer ; if ( txdw0 & ( CP_TX_IPCS | CP_TX_UDPCS | CP_TX_TCPCS | CP_TX_LGSEN ) )  ip_header * ip = NULL ; int hlen = 0 ; uint8_t ip_protocol = 0 ; uint8_t * eth_payload_data = NULL ; int proto = be16_to_cpu ( * ( uint16_t * ) ( saved_buffer + 12 ) ) ; if ( proto == ETH_P_IP )  eth_payload_data = saved_buffer + ETH_HLEN; ip = ( ip_header * ) eth_payload_data; if ( IP_HEADER_VERSION ( ip ) != IP_HEADER_VERSION_4 )  ip = NULL; hlen = IP_HEADER_LENGTH ( ip ); ip_protocol = ip -> ip_p; if ( ip )  if ( ( txdw0 & CP_TX_LGSEN ) && ip_protocol == IP_PROTO_TCP )  if ( txdw0 & ( CP_TX_TCPCS | CP_TX_UDPCS ) )  uint8_t saved_ip_header [ 60 ] ; memcpy ( saved_ip_header , eth_payload_data , hlen ); memcpy ( eth_payload_data , saved_ip_header , hlen ); 