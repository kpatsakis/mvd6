static CVE_2013_2481_VULN_dissect_mount_dirpath_call(tvbuff_t *tvb, int offset, packet_info proto_tree *tree) if ( ( ! pinfo -> fd -> flags . visited ) && nfs_file_name_snooping )  rpc_call_info_value * civ = pinfo -> private_data ; if ( civ -> request && ( civ -> proc == 1 ) )  const gchar * host ; unsigned char * name ; int len ; host = ip_to_str ( pinfo -> dst . data ); len = tvb_get_ntohl ( tvb , offset ); name = g_malloc ( strlen ( host ) + 1 + len + 1 + 200 ); ptr = name; memcpy ( ptr , host , strlen ( host ) ); ptr += strlen ( host ); * ptr ++ = ':'; tvb_memcpy ( tvb , ptr , offset + 4 , len ); ptr += len; * ptr = 0; nfs_name_snoop_add_name ( civ -> xid , tvb , - 1 , ( gint ) strlen ( name ) , 0 , 0 , name ); 