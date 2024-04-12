static int CVE_2011_4594_PATCHED___sys_sendmsg(struct socket *sock, struct msghdr __user struct msghdr *msg_sys, unsigned struct used_address *used_address) struct compat_msghdr __user * msg_compat = ( struct compat_msghdr __user * ) msg ; struct iovec iovstack [ UIO_FASTIOV ] , * iov = iovstack ; unsigned char * ctl_buf = ctl ; int err , ctl_len , iov_size , total_len ; err = - EFAULT; if ( MSG_CMSG_COMPAT & flags )  if ( get_compat_msghdr ( msg_sys , msg_compat ) )  if ( copy_from_user ( msg_sys , msg , sizeof ( struct msghdr ) ) )  err = - EMSGSIZE; if ( msg_sys -> msg_iovlen > UIO_MAXIOV )  err = - ENOMEM; iov_size = msg_sys -> msg_iovlen * sizeof ( struct iovec ); if ( msg_sys -> msg_iovlen > UIO_FASTIOV )  iov = sock_kmalloc ( sock -> sk , iov_size , GFP_KERNEL ); if ( ! iov )  if ( MSG_CMSG_COMPAT & flags )  err = verify_compat_iovec ( msg_sys , iov , ( struct sockaddr * ) & address , VERIFY_READ ); err = verify_iovec ( msg_sys , iov , ( struct sockaddr * ) & address , VERIFY_READ ); if ( err < 0 )  total_len = err; err = - ENOBUFS; if ( msg_sys -> msg_controllen > INT_MAX )  ctl_len = msg_sys -> msg_controllen; if ( ( MSG_CMSG_COMPAT & flags ) && ctl_len )  err = cmsghdr_from_user_compat_to_kern ( msg_sys , sock -> sk , ctl , sizeof ( ctl ) ); if ( err )  if ( ctl_len )  if ( ctl_len > sizeof ( ctl ) )  ctl_buf = sock_kmalloc ( sock -> sk , ctl_len , GFP_KERNEL ); if ( ctl_buf == NULL )  err = - EFAULT; if ( copy_from_user ( ctl_buf , ( void __user __force * ) msg_sys -> msg_control , ctl_len ) )  msg_sys -> msg_control = ctl_buf; msg_sys -> msg_flags = flags; if ( sock -> file -> f_flags & O_NONBLOCK )  msg_sys -> msg_flags |= MSG_DONTWAIT; if ( used_address && msg_sys -> msg_name && used_address -> name_len == msg_sys -> msg_namelen && ! memcmp ( & used_address -> name , msg_sys -> msg_name , used_address -> name_len ) )  err = sock_sendmsg ( sock , msg_sys , total_len ); if ( used_address && err >= 0 )  used_address -> name_len = msg_sys -> msg_namelen; if ( msg_sys -> msg_name )  memcpy ( & used_address -> name , msg_sys -> msg_name , used_address -> name_len ); 