bool bindContinues(ParseNode* pn, const LabelVector* maybeLabels) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  return * alloc_ ; TempAllocator &     alloc() const MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; bool newBlockWithDepth(MBasicBlock* pred, unsigned loopDepth, MBasicBlock** block, ParseNode* pn) * block = MBasicBlock :: NewAsmJS ( mirGraph ( ) , info ( ) , pred , MBasicBlock :: NORMAL ); CompileInfo &  info() const MOZ_ASSERT ( info_ ); CompileInfo &  info() const return * info_ ; MIRGraph &     mirGraph() const MOZ_ASSERT ( graph_ ); MIRGraph &     mirGraph() const return * graph_ ; if ( ! * block )  noteBasicBlockPosition ( * block , pn ); void noteBasicBlockPosition(MBasicBlock* blk, ParseNode* pn) if ( pn )  m ( ) . tokenStream ( ) . srcCoords . lineNumAndColumnIndex ( pn -> pn_pos . begin , & line , & column ); TokenStream& tokenStream() const return parser_ . tokenStream ; TokenStream& tokenStream() const ModuleCompiler &    m() const return m_ ; ModuleCompiler &    m() const blk -> setLineno ( line ); blk -> setColumnIndex ( column ); mirGraph ( ) . addBlock ( * block ); MIRGraph &     mirGraph() const MOZ_ASSERT ( graph_ ); MIRGraph &     mirGraph() const return * graph_ ; ( * block ) -> setLoopDepth ( loopDepth ); if ( curBlock_ )  if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  TempAllocator &     alloc() const return * alloc_ ; TempAllocator &     alloc() const curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  