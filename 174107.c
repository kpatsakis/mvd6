static int tcp_chr_write(CharDriverState *chr, const uint8_t *buf, int len) TCPCharDriver * s = chr -> opaque ; if ( s -> connected )  return send_all ( s -> fd , buf , len ) ; int send_all(int fd, const void *buf, int len1) int ret , len ; len = len1; while ( len > 0 )  ret = send ( fd , buf , len , 0 ); if ( ret < 0 )  errno = WSAGetLastError ( ); if ( errno != WSAEWOULDBLOCK )  if ( ret == 0 )  buf += ret; len -= ret; return len1 - len ; 