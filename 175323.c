CommandResult NetworkUtils::setUSBTethering(NetworkParams& aOptions) IFProperties interfaceProperties ; if ( strcmp ( interfaceProperties . dns1 , "" ) )  int type = getIpType ( interfaceProperties . dns1 ) ; static int getIpType(const char *aIp) struct addrinfo hint , * ip_info = NULL ; memset ( & hint , 0 , sizeof ( hint ) ); hint . ai_family = AF_UNSPEC; hint . ai_flags = AI_NUMERICHOST; if ( getaddrinfo ( aIp , NULL , & hint , & ip_info ) )  