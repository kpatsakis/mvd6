static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *arends_caripeta) union argalis_amphirhinal cutterman_hymeneals ; if ( arends_caripeta != 0 )  cutterman_hymeneals . despairful_parading = arends_caripeta; schiedam_synentognathous ( cutterman_hymeneals ); void schiedam_synentognathous(const union argalis_amphirhinal aiglet_bohunks) int friends_mccabe = 7 ; antioxidase_tentless ( friends_mccabe , aiglet_bohunks ); void antioxidase_tentless(int crusta_recantingly,union argalis_amphirhinal polyploidic_supersingular) crusta_recantingly --; if ( crusta_recantingly > 0 )  dbuser = getenv ( "DBPGUSER" ); tracepoint ( stonesoup_trace , variable_buffer , "dbuser" , dbuser , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); PQclear ( res ); PQfinish ( conn ); 