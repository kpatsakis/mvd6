static JS_ALWAYS_INLINE REMatchState CVE_2011_2998_PATCHED_ExecuteREBytecode(REGlobalData *gData, REMatchState *x) REMatchState * result = NULL ; REBackTrackData * backTrackData ; jsbytecode * nextpc , * testpc ; REOp nextop ; const jschar * startcp ; size_t parenIndex , k ; size_t parenSoFar = 0 ; jschar matchCh1 , matchCh2 ; RECharSet * charSet ; JSBool anchor ; jsbytecode * pc = gData -> regexp -> program ; REOp op = ( REOp ) * pc ++ ; if ( REOP_IS_SIMPLE ( op ) && ! ( gData -> regexp -> flags & JSREG_STICKY ) )  anchor = JS_FALSE; while ( x -> cp <= gData -> cpend )  nextpc = pc; result = SimpleMatch ( gData , x , op , & nextpc , JS_TRUE ); if ( result )  anchor = JS_TRUE; x = result; pc = nextpc; op = ( REOp ) * pc ++; gData -> skipped ++; x -> cp ++; if ( ! anchor )  const char * opname = reop_names [ op ] ; re_debug ( "\n%06d: %*s%s" , pc - gData -> regexp -> program , gData -> stateStackTop * 2 , "" , opname ); if ( REOP_IS_SIMPLE ( op ) )  result = SimpleMatch ( gData , x , op , & pc , JS_TRUE ); curState = & gData -> stateStack [ gData -> stateStackTop ]; switch ( op )  nextpc = pc + GET_OFFSET ( pc ); pc += ARG_LEN; matchCh2 = GET_ARG ( pc ); pc += ARG_LEN; k = GET_ARG ( pc ); pc += ARG_LEN; if ( x -> cp != gData -> cpend )  if ( * x -> cp == matchCh2 )  charSet = & gData -> regexp -> classList [ k ]; if ( ! charSet -> converted && ! MatcherProcessCharSet ( gData , charSet ) )  matchCh1 = * x -> cp; k = matchCh1 >> 3; if ( ( matchCh1 > charSet -> length || ! ( charSet -> u . bits [ k ] & ( 1 << ( matchCh1 & 0x7 ) ) ) ) ^ charSet -> sense )  result = NULL; nextpc = pc + GET_OFFSET ( pc ); pc += ARG_LEN; matchCh1 = GET_ARG ( pc ); pc += ARG_LEN; matchCh2 = GET_ARG ( pc ); pc += ARG_LEN; if ( x -> cp == gData -> cpend || ( * x -> cp != matchCh1 && * x -> cp != matchCh2 ) )  result = NULL; nextpc = pc + GET_OFFSET ( pc ); pc += ARG_LEN; curState -> parenSoFar = parenSoFar; op = ( REOp ) * pc ++; startcp = x -> cp; if ( REOP_IS_SIMPLE ( op ) )  if ( ! SimpleMatch ( gData , x , op , & pc , JS_TRUE ) )  op = ( REOp ) * nextpc ++; pc = nextpc; result = x; op = ( REOp ) * pc ++; nextop = ( REOp ) * nextpc ++; if ( ! PushBackTrackState ( gData , nextop , nextpc , x , startcp , 0 , 0 ) )  if ( ! result )  result = x; if ( gData -> stateStackTop )  pc += GET_OFFSET ( pc ); op = ( REOp ) * pc ++; if ( ! result )  result = x; if ( gData -> stateStackTop )  op = ( REOp ) * pc ++; pc = ReadCompactIndex ( pc , & parenIndex ); JS_ASSERT ( parenIndex < gData -> regexp -> parenCount ); if ( parenIndex + 1 > parenSoFar )  parenSoFar = parenIndex + 1; x -> parens [ parenIndex ] . index = x -> cp - gData -> cpbegin; x -> parens [ parenIndex ] . length = 0; op = ( REOp ) * pc ++; pc = ReadCompactIndex ( pc , & parenIndex ); JS_ASSERT ( parenIndex < gData -> regexp -> parenCount ); cap = & x -> parens [ parenIndex ]; delta = x -> cp - ( gData -> cpbegin + cap -> index ); cap -> length = ( delta < 0 ) ? 0 : ( size_t ) delta; op = ( REOp ) * pc ++; if ( ! result )  result = x; nextpc = pc + GET_OFFSET ( pc ); pc += ARG_LEN; op = ( REOp ) * pc ++; testpc = pc; if ( REOP_IS_SIMPLE ( op ) && ! SimpleMatch ( gData , x , op , & testpc , JS_FALSE ) )  result = NULL; curState -> u . assertion . top = ( char * ) gData -> backTrackSP - ( char * ) gData -> backTrackStack; curState -> u . assertion . sz = gData -> cursz; curState -> index = x -> cp - gData -> cpbegin; curState -> parenSoFar = parenSoFar; if ( ! PushBackTrackState ( gData , REOP_ASSERTTEST , nextpc , x , x -> cp , 0 , 0 ) )  nextpc = pc + GET_OFFSET ( pc ); pc += ARG_LEN; op = ( REOp ) * pc ++; testpc = pc; if ( REOP_IS_SIMPLE ( op ) && SimpleMatch ( gData , x , op , & testpc , JS_FALSE ) && * testpc == REOP_ASSERTNOTTEST )  result = NULL; curState -> u . assertion . top = ( char * ) gData -> backTrackSP - ( char * ) gData -> backTrackStack; curState -> u . assertion . sz = gData -> cursz; curState -> index = x -> cp - gData -> cpbegin; curState -> parenSoFar = parenSoFar; if ( ! PushBackTrackState ( gData , REOP_ASSERTNOTTEST , nextpc , x , x -> cp , 0 , 0 ) )  if ( gData -> stateStackTop )  x -> cp = gData -> cpbegin + curState -> index; gData -> backTrackSP = ( REBackTrackData * ) ( ( char * ) gData -> backTrackStack + curState -> u . assertion . top ); gData -> cursz = curState -> u . assertion . sz; if ( result )  result = x; if ( gData -> stateStackTop )  -- gData -> stateStackTop; x -> cp = gData -> cpbegin + curState -> index; gData -> backTrackSP = ( REBackTrackData * ) ( ( char * ) gData -> backTrackStack + curState -> u . assertion . top ); gData -> cursz = curState -> u . assertion . sz; result = ( ! result ) ? x : NULL; curState -> u . quantifier . min = 0; curState -> u . quantifier . max = ( uintN ) - 1; curState -> u . quantifier . min = 1; curState -> u . quantifier . max = ( uintN ) - 1; curState -> u . quantifier . min = 0; curState -> u . quantifier . max = 1; pc = ReadCompactIndex ( pc , & k ); curState -> u . quantifier . min = k; pc = ReadCompactIndex ( pc , & k ); curState -> u . quantifier . max = k - 1; JS_ASSERT ( curState -> u . quantifier . min <= curState -> u . quantifier . max ); if ( curState -> u . quantifier . max == 0 )  pc = pc + GET_OFFSET ( pc ); op = ( REOp ) * pc ++; result = x; nextpc = pc + ARG_LEN; op = ( REOp ) * nextpc ++; startcp = x -> cp; if ( REOP_IS_SIMPLE ( op ) )  if ( ! SimpleMatch ( gData , x , op , & nextpc , JS_TRUE ) )  if ( curState -> u . quantifier . min == 0 )  result = x; result = NULL; pc = pc + GET_OFFSET ( pc ); op = ( REOp ) * nextpc ++; result = x; curState -> index = startcp - gData -> cpbegin; curState -> continue_op = REOP_REPEAT; curState -> continue_pc = pc; curState -> parenSoFar = parenSoFar; PUSH_STATE_STACK ( gData ); if ( curState -> u . quantifier . min == 0 && ! PushBackTrackState ( gData , REOP_REPEAT , pc , x , startcp , 0 , 0 ) )  pc = nextpc; pc = curState [ - 1 ] . continue_pc; op = ( REOp ) curState [ - 1 ] . continue_op; if ( ! result )  result = x; if ( gData -> stateStackTop )  -- gData -> stateStackTop; if ( ! result )  if ( curState -> u . quantifier . min == 0 )  if ( curState -> u . quantifier . min == 0 && x -> cp == gData -> cpbegin + curState -> index )  result = NULL; if ( curState -> u . quantifier . min != 0 )  curState -> u . quantifier . min --; if ( curState -> u . quantifier . max != ( uintN ) - 1 )  curState -> u . quantifier . max --; if ( curState -> u . quantifier . max == 0 )  nextpc = pc + ARG_LEN; nextop = ( REOp ) * nextpc; startcp = x -> cp; if ( REOP_IS_SIMPLE ( nextop ) )  nextpc ++; if ( ! SimpleMatch ( gData , x , nextop , & nextpc , JS_TRUE ) )  if ( curState -> u . quantifier . min == 0 )  result = NULL; result = x; curState -> index = startcp - gData -> cpbegin; PUSH_STATE_STACK ( gData ); if ( curState -> u . quantifier . min == 0 && ! PushBackTrackState ( gData , REOP_REPEAT , pc , x , startcp , curState -> parenSoFar , parenSoFar - curState -> parenSoFar ) )  while ( * nextpc == REOP_ENDCHILD )  pc = nextpc; op = ( REOp ) * pc ++; parenSoFar = curState -> parenSoFar; result = x; pc += GET_OFFSET ( pc ); curState -> u . quantifier . min = 0; curState -> u . quantifier . max = ( uintN ) - 1; curState -> u . quantifier . min = 1; curState -> u . quantifier . max = ( uintN ) - 1; curState -> u . quantifier . min = 0; curState -> u . quantifier . max = 1; pc = ReadCompactIndex ( pc , & k ); curState -> u . quantifier . min = k; pc = ReadCompactIndex ( pc , & k ); curState -> u . quantifier . max = k - 1; JS_ASSERT ( curState -> u . quantifier . min <= curState -> u . quantifier . max ); curState -> index = x -> cp - gData -> cpbegin; curState -> parenSoFar = parenSoFar; PUSH_STATE_STACK ( gData ); if ( curState -> u . quantifier . min != 0 )  curState -> continue_op = REOP_MINIMALREPEAT; curState -> continue_pc = pc; pc += OFFSET_LEN; op = ( REOp ) * pc ++; if ( ! PushBackTrackState ( gData , REOP_MINIMALREPEAT , pc , x , x -> cp , 0 , 0 ) )  if ( gData -> stateStackTop )  -- gData -> stateStackTop; pc = pc + GET_OFFSET ( pc ); op = ( REOp ) * pc ++; if ( gData -> stateStackTop )  -- gData -> stateStackTop; re_debug ( "{%d,%d}" , curState -> u . quantifier . min , curState -> u . quantifier . max ); curState -> index = x -> cp - gData -> cpbegin; curState -> continue_op = REOP_MINIMALREPEAT; curState -> continue_pc = pc; pc += ARG_LEN; for (k = curState->parenSoFar; k < parenSoFar; k++)                   x->parens[k].index = -1;                                          PUSH_STATE_STACK(gData);                                              op = (REOp) *pc++;                                                    JS_ASSERT(op < REOP_LIMIT);                                           JS_END_MACRO if ( ! result )  if ( curState -> u . quantifier . max == ( uintN ) - 1 || curState -> u . quantifier . max > 0 )  if ( curState -> u . quantifier . min == 0 && x -> cp == gData -> cpbegin + curState -> index )  result = NULL; if ( curState -> u . quantifier . min != 0 )  curState -> u . quantifier . min --; if ( curState -> u . quantifier . max != ( uintN ) - 1 )  curState -> u . quantifier . max --; if ( curState -> u . quantifier . min != 0 )  curState -> index = x -> cp - gData -> cpbegin; curState -> parenSoFar = parenSoFar; PUSH_STATE_STACK ( gData ); if ( ! PushBackTrackState ( gData , REOP_MINIMALREPEAT , pc , x , x -> cp , curState -> parenSoFar , parenSoFar - curState -> parenSoFar ) )  if ( gData -> stateStackTop )  -- gData -> stateStackTop; pc = pc + GET_OFFSET ( pc ); op = ( REOp ) * pc ++; JS_ASSERT ( op < REOP_LIMIT ); result = NULL; if ( ! result )  if ( gData -> cursz == 0 )  if ( ! JS_CHECK_OPERATION_LIMIT ( gData -> cx ) )  gData -> ok = JS_FALSE; gData -> backTrackCount ++; if ( gData -> backTrackLimit && gData -> backTrackCount >= gData -> backTrackLimit )  JS_ReportErrorNumber ( gData -> cx , js_GetErrorMessage , NULL , JSMSG_REGEXP_TOO_COMPLEX ); gData -> ok = JS_FALSE; backTrackData = gData -> backTrackSP; gData -> cursz = backTrackData -> sz; gData -> backTrackSP = ( REBackTrackData * ) ( ( char * ) backTrackData - backTrackData -> sz ); x -> cp = backTrackData -> cp; pc = backTrackData -> backtrack_pc; op = ( REOp ) backTrackData -> backtrack_op; JS_ASSERT ( op < REOP_LIMIT ); gData -> stateStackTop = backTrackData -> saveStateStackTop; JS_ASSERT ( gData -> stateStackTop ); memcpy ( gData -> stateStack , backTrackData + 1 , sizeof ( REProgState ) * backTrackData -> saveStateStackTop ); curState = & gData -> stateStack [ gData -> stateStackTop - 1 ]; if ( backTrackData -> parenCount )  memcpy ( & x -> parens [ backTrackData -> parenIndex ] , ( char * ) ( backTrackData + 1 ) + sizeof ( REProgState ) * backTrackData -> saveStateStackTop , sizeof ( RECapture ) * backTrackData -> parenCount ); parenSoFar = backTrackData -> parenIndex + backTrackData -> parenCount; for (k = curState->parenSoFar; k < parenSoFar; k++) x -> parens [ k ] . index = - 1; parenSoFar = curState -> parenSoFar; re_debug ( "\tBT_Pop: %ld,%ld" , ( unsigned long ) backTrackData -> parenIndex , ( unsigned long ) backTrackData -> parenCount ); x = result; op = ( REOp ) * pc ++; JS_ASSERT ( op < REOP_LIMIT ); return x ; 