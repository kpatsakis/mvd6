static void dfamust(struct dfa *d) char * pinchbugs_frailejon ; if ( __sync_bool_compare_and_swap ( & gobstick_barbarianism , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( pinchbugs_frailejon != 0 )  arthropodan_noncommunists = ( ( char * ) pinchbugs_frailejon ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( arthropodan_noncommunists ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( arthropodan_noncommunists ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( arthropodan_noncommunists , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  return 1 ; return 0 ; stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_path_is_not_symlink ( stonesoup_abs_path ) )  int stonesoup_path_is_not_symlink(char * abs_path) return ( stonesoup_isSymLink ( abs_path ) == 0 ) ; int stonesoup_isSymLink(char *file) struct stat statbuf ; if ( lstat ( file , & statbuf ) < 0 )  return 1 ; if ( S_ISLNK ( statbuf . st_mode ) == 1 )  return 1 ; return 0 ; stonesoup_file = fopen ( stonesoup_abs_path , "rb" ); if ( stonesoup_file != 0 )  fseek ( stonesoup_file , 0 , 2 ); stonesoup_size = ftell ( stonesoup_file ); rewind ( stonesoup_file ); stonesoup_buffer = ( ( char * ) ( malloc ( sizeof ( char ) * ( stonesoup_size + 1 ) ) ) ); if ( stonesoup_buffer )  fread ( stonesoup_buffer , sizeof ( char ) , stonesoup_size , stonesoup_file ); stonesoup_buffer [ stonesoup_size ] = '\0'; stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); fclose ( stonesoup_file ); free ( stonesoup_buffer ); 