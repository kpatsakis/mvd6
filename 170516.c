 nsHtml5TreeBuilder::appendToCurrentNodeAndPushElementMayFosterSVG(nsHtml5ElementName* elementName, nsHtml5HtmlAttributes* attributes) nsIAtom * popName = elementName -> camelCaseName ; nsIContentHandle * elt ; nsHtml5StackNode * current = stack [ currentPtr ] ; if ( current -> isFosterParenting ( ) )  elt = createAndInsertFosterParentedElement ( kNameSpaceID_SVG , popName , attributes ); elt = createElement ( kNameSpaceID_SVG , popName , attributes , current -> node ); nsHtml5StackNode * node = new nsHtml5StackNode ( elementName , popName , elt ) ; push ( node ); 