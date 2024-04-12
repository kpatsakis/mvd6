static tvbuff_t CVE_2011_1138_PATCHED_dissect_6lowpan_iphc(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, gint dgram_size) gint offset = 0 ; guint16 iphc_flags ; guint8 iphc_traffic ; guint8 iphc_hop_limit ; guint8 ipv6_class = 0 ; struct ip6_hdr ipv6 ; iphc_flags = tvb_get_ntohs ( tvb , offset ); iphc_traffic = ( iphc_flags & LOWPAN_IPHC_FLAG_FLOW ) >> LOWPAN_IPHC_FLAG_OFFSET_FLOW; iphc_hop_limit = ( iphc_flags & LOWPAN_IPHC_FLAG_HLIM ) >> LOWPAN_IPHC_FLAG_OFFSET_HLIM; offset += sizeof ( guint16 ); if ( iphc_flags & LOWPAN_IPHC_FLAG_CONTEXT_ID )  offset += sizeof ( guint8 ); offset <<= 3; if ( iphc_traffic != LOWPAN_IPHC_FLOW_COMPRESSED )  ipv6_class |= tvb_get_bits8 ( tvb , offset , LOWPAN_IPHC_ECN_BITS ); offset += LOWPAN_IPHC_ECN_BITS; if ( ( iphc_traffic == LOWPAN_IPHC_FLOW_CLASS_LABEL ) || ( iphc_traffic == LOWPAN_IPHC_FLOW_CLASS ) )  ipv6_class |= ( tvb_get_bits8 ( tvb , offset , LOWPAN_IPHC_DSCP_BITS ) << LOWPAN_IPHC_ECN_BITS ); offset += LOWPAN_IPHC_DSCP_BITS; if ( ( iphc_traffic == LOWPAN_IPHC_FLOW_CLASS_LABEL ) || ( iphc_traffic == LOWPAN_IPHC_FLOW_ECN_LABEL ) )  offset += ( ( 4 - offset ) & 0x7 ); ipv6 . ip6_flow = tvb_get_bits32 ( tvb , offset , LOWPAN_IPHC_LABEL_BITS , FALSE ); offset += LOWPAN_IPHC_LABEL_BITS; ipv6 . ip6_flow = 0; ipv6 . ip6_flow = g_ntohl ( ipv6 . ip6_flow ) | ( ipv6_class << LOWPAN_IPV6_FLOW_LABEL_BITS ); ipv6 . ip6_vfc = ( 0x6 << 4 ) | ( ipv6_class >> 4 ); offset >>= 3; if ( ! ( iphc_flags & LOWPAN_IPHC_FLAG_NHDR ) )  ipv6 . ip6_nxt = tvb_get_guint8 ( tvb , offset ); offset += sizeof ( guint8 ); if ( iphc_hop_limit == LOWPAN_IPHC_HLIM_1 )  ipv6 . ip6_hlim = 1; if ( iphc_hop_limit == LOWPAN_IPHC_HLIM_64 )  ipv6 . ip6_hlim = 64; if ( iphc_hop_limit == LOWPAN_IPHC_HLIM_255 )  ipv6 . ip6_hlim = 255; ipv6 . ip6_hlim = tvb_get_guint8 ( tvb , offset ); memset ( & ipv6 . ip6_src , 0 , sizeof ( ipv6 . ip6_src ) ); ipv6 . ip6_src . bytes [ 0 ] = 0xfe; ipv6 . ip6_src . bytes [ 1 ] = 0x80; length = sizeof ( ipv6 . ip6_src ); tvb_memcpy ( tvb , & ipv6 . ip6_src . bytes [ sizeof ( ipv6 . ip6_src ) - length ] , offset , length ); tvb_memcpy ( tvb , & ipv6 . ip6_src . bytes [ sizeof ( ipv6 . ip6_src ) - length ] , offset , length ); tvb_memcpy ( tvb , & ipv6 . ip6_src . bytes [ sizeof ( ipv6 . ip6_src ) - length ] , offset , length ); lowpan_dlsrc_to_ifcid ( pinfo , & ipv6 . ip6_src . bytes [ 8 ] ); ti = proto_tree_add_ipv6 ( tree , hf_6lowpan_source , tvb , offset , length , ( guint8 * ) & ipv6 . ip6_src ); expert_add_info_format ( pinfo , ti , PI_UNDECODED , PI_WARN , "Failed to recover source IPv6 address" ); offset += length; memset ( & ipv6 . ip6_dst , 0 , sizeof ( ipv6 . ip6_dst ) ); ipv6 . ip6_dst . bytes [ 0 ] = 0xfe; ipv6 . ip6_dst . bytes [ 1 ] = 0x80; length = sizeof ( ipv6 . ip6_dst ); tvb_memcpy ( tvb , & ipv6 . ip6_dst . bytes [ sizeof ( ipv6 . ip6_dst ) - length ] , offset , length ); tvb_memcpy ( tvb , & ipv6 . ip6_dst . bytes [ sizeof ( ipv6 . ip6_dst ) - length ] , offset , length ); tvb_memcpy ( tvb , & ipv6 . ip6_dst . bytes [ sizeof ( ipv6 . ip6_dst ) - length ] , offset , length ); lowpan_dldst_to_ifcid ( pinfo , & ipv6 . ip6_dst . bytes [ 8 ] ); tvb_memcpy ( tvb , & ipv6 . ip6_dst . bytes [ sizeof ( ipv6 . ip6_dst ) - length ] , offset , length ); ipv6 . ip6_dst . bytes [ 1 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 11 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 12 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 13 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 14 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 15 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 1 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 13 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 14 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 15 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 15 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 1 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 2 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 12 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 13 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 14 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ipv6 . ip6_dst . bytes [ 15 ] = tvb_get_guint8 ( tvb , offset + ( length ++ ) ); ti = proto_tree_add_ipv6 ( tree , hf_6lowpan_dest , tvb , offset , length , ( guint8 * ) & ipv6 . ip6_dst ); expert_add_info_format ( pinfo , ti , PI_UNDECODED , PI_WARN , "Failed to recover destination IPv6 address" ); offset += length; ipv6 . ip6_nxt = lowpan_parse_nhc_proto ( tvb , offset ); nhdr_list = dissect_6lowpan_iphc_nhc ( tvb , pinfo , tree , offset , dgram_size - sizeof ( struct ip6_hdr ) ); length = ( gint ) tvb_ensure_length_remaining ( tvb , offset ); nhdr_list = ( struct lowpan_nhdr * ) ep_alloc ( sizeof ( struct lowpan_nhdr ) + length ); nhdr_list -> next = NULL; nhdr_list -> proto = ipv6 . ip6_nxt; nhdr_list -> length = length; nhdr_list -> reported = tvb_reported_length_remaining ( tvb , offset ); nhdr_list -> reported = dgram_size - sizeof ( struct ip6_hdr ); tvb_memcpy ( tvb , LOWPAN_NHDR_DATA ( nhdr_list ) , offset , nhdr_list -> length ); ipv6_tvb = lowpan_reassemble_ipv6 ( tvb , & ipv6 , nhdr_list ); add_new_data_source ( pinfo , ipv6_tvb , "Decompressed 6LoWPAN header" ); return ipv6_tvb ; 