 proto_item_prepend_text(proto_item *pi, const char *format, ...) char representation [ ITEM_LABEL_LENGTH ] ; fi = PITEM_FINFO ( pi ); if ( fi == NULL )  if ( ! PROTO_ITEM_IS_HIDDEN ( pi ) )  if ( fi -> rep == NULL )  proto_item_fill_label ( fi , representation );  proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; guint8 * bytes ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  bytes = ( guint8 * ) fvalue_get ( & fi -> value ); if ( bytes )  switch ( hfinfo -> display )  str = ( char * ) bytestring_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) , '.' ); str = ( char * ) bytestring_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) , '-' ); str = ( char * ) bytestring_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) , ':' ); str = ( char * ) bytestring_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) , ' ' ); if ( prefs . display_byte_fields_with_spaces )  str = ( char * ) bytestring_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) , ' ' ); str = ( char * ) bytes_to_str ( NULL , bytes , fvalue_length ( & fi -> value ) ); label_fill ( label_str , 0 , hfinfo , str ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 