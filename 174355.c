static void *skinny_ss(void *data) struct ast_channel * c = data ; struct skinny_subchannel * sub = c -> tech_pvt ; struct skinny_line * l = sub -> line ; int timeout = firstdigittimeout ; int loop_pause = 100 ; len = strlen ( sub -> exten ); while ( len < AST_MAX_EXTENSION - 1 )  res = 1; while ( strlen ( sub -> exten ) == len )  timeout -= loop_pause; if ( ( timeout -= loop_pause ) <= 0 )  res = 0; res = 1; if ( sub != l -> activesub )  timeout = 0; len = strlen ( sub -> exten ); if ( ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( ! res || ! ast_matchmore_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( l -> getforward )  dialandactivatesub ( sub , sub -> exten ); timeout = matchdigittimeout; if ( res == 0 )  if ( ! ast_canmatch_extension ( c , c -> context , sub -> exten , 1 , S_COR ( c -> caller . id . number . valid , c -> caller . id . number . str , NULL ) ) && ( ( sub -> exten [ 0 ] != '*' ) || ( ! ast_strlen_zero ( sub -> exten ) > 2 ) ) )  if ( ! timeout )  timeout = gendigittimeout; static void dialandactivatesub(struct skinny_subchannel *sub, char exten[AST_MAX_EXTENSION]) activatesub ( sub , SUBSTATE_DIALING ); static void activatesub(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; if ( sub == l -> activesub )  if ( l -> activesub )  if ( l -> activesub -> substate == SUBSTATE_RINGIN )  if ( l -> activesub -> substate != SUBSTATE_HOLD )  setsubstate ( l -> activesub , SUBSTATE_ONHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; ast_queue_control_data ( sub -> owner , AST_CONTROL_HOLD , S_OR ( l -> mohsuggest , NULL ) , ! ast_strlen_zero ( l -> mohsuggest ) ? strlen ( l -> mohsuggest ) + 1 : 0 ); 