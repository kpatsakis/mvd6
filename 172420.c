static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  VerifyStyleTree ( aPresContext , child , nullptr ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  VerifyStyleTree ( aPresContext , child , nullptr ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; VerifyContextParent ( aPresContext , aFrame , context , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); if ( ! aParentContext )  nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; if ( providerFrame )  aParentContext = providerFrame -> StyleContext ( ); nsStyleContext * actualParentContext = aContext -> GetParent ( ) ; if ( aParentContext )  if ( aParentContext != actualParentContext )  if ( aContext == aParentContext )  fputs ( "should be using: " , stdout ); 