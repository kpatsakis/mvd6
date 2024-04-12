static struct wireless_dev *brcmf_cfg80211_add_iface(struct wiphy const char unsigned char enum nl80211_iftype u32 struct vif_params *params) struct wireless_dev * wdev ; int err ; err = brcmf_vif_add_validate ( wiphy_to_cfg ( wiphy ) , type ); static int brcmf_vif_add_validate(struct brcmf_cfg80211_info enum nl80211_iftype new_type) int iftype_num [ NUM_NL80211_IFTYPES ] ; struct brcmf_cfg80211_vif * pos ; iftype_num [ pos -> wdev . iftype ] ++; iftype_num [ new_type ] ++; return cfg80211_check_combinations ( cfg -> wiphy , 1 , 0 , iftype_num ) ; if ( err )  switch ( type )  wdev = brcmf_ap_add_vif ( wiphy , name , flags , params );  struct wireless_dev *brcmf_ap_add_vif(struct wiphy *wiphy, const char u32 *flags, struct vif_params *params) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct brcmf_if * ifp = netdev_priv ( cfg_to_ndev ( cfg ) ) ; struct brcmf_cfg80211_vif * vif ; int err ; if ( brcmf_cfg80211_vif_event_armed ( cfg ) )  bool brcmf_cfg80211_vif_event_armed(struct brcmf_cfg80211_info *cfg) struct brcmf_cfg80211_vif_event * event = & cfg -> vif_event ; bool armed ; armed = event -> vif != NULL; return armed ; vif = brcmf_alloc_vif ( cfg , NL80211_IFTYPE_AP , false ); struct brcmf_cfg80211_vif *brcmf_alloc_vif(struct brcmf_cfg80211_info enum nl80211_iftype bool pm_block) struct brcmf_cfg80211_vif * vif ; bool mbss ; vif = kzalloc ( sizeof ( * vif ) , GFP_KERNEL ); if ( ! vif )  return ERR_PTR ( - ENOMEM ) ; vif -> wdev . wiphy = cfg -> wiphy; vif -> wdev . iftype = type; vif -> pm_block = pm_block; if ( type == NL80211_IFTYPE_AP )  mbss = false; vif -> mbss = mbss; return vif ; if ( IS_ERR ( vif ) )  err = brcmf_cfg80211_request_ap_if ( ifp ); static int brcmf_cfg80211_request_ap_if(struct brcmf_if *ifp) struct brcmf_mbss_ssid_le mbss_ssid_le ; int bsscfgidx ; int err ; memset ( & mbss_ssid_le , 0 , sizeof ( mbss_ssid_le ) ); bsscfgidx = brcmf_get_next_free_bsscfgidx ( ifp -> drvr ); if ( bsscfgidx < 0 )  return bsscfgidx ; mbss_ssid_le . bsscfgidx = cpu_to_le32 ( bsscfgidx ); mbss_ssid_le . SSID_len = cpu_to_le32 ( 5 ); sprintf ( mbss_ssid_le . SSID , "ssid%d" , bsscfgidx ); err = brcmf_fil_bsscfg_data_set ( ifp , "bsscfg:ssid" , & mbss_ssid_le , sizeof ( mbss_ssid_le ) ); return err ; if ( err )  err = brcmf_cfg80211_wait_vif_event ( cfg , BRCMF_E_IF_ADD , BRCMF_VIF_EVENT_TIMEOUT ); int brcmf_cfg80211_wait_vif_event(struct brcmf_cfg80211_info u8 action, ulong timeout) struct brcmf_cfg80211_vif_event * event = & cfg -> vif_event ; return wait_event_timeout ( event -> vif_wq , vif_event_equals ( event , action ) , timeout ) ; static inline bool vif_event_equals(struct brcmf_cfg80211_vif_event u8 action) u8 evt_action ; evt_action = event -> action; return evt_action == action ; if ( ! err )  ifp = vif -> ifp; if ( ! ifp )  strncpy ( ifp -> ndev -> name , name , sizeof ( ifp -> ndev -> name ) - 1 ); err = brcmf_net_attach ( ifp , true ); if ( err )  return ERR_PTR ( err ) ; 