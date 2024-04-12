qcms_profile* qcms_profile_sRGB(void) qcms_profile * profile ; uint16_t * table ; qcms_CIE_xyYTRIPLE Rec709Primaries = { { 0.6400 , 0.3300 , 1.0 } , { 0.3000 , 0.6000 , 1.0 } , { 0.1500 , 0.0600 , 1.0 } } ; qcms_CIE_xyY D65 ; D65 = white_point_from_temp ( 6504 ); static qcms_CIE_xyY white_point_from_temp(int temp_K) qcms_CIE_xyY white_point ; double x , y ; double T , T2 , T3 ; T = temp_K; T2 = T * T; T3 = T2 * T; if ( T >= 4000. && T <= 7000. )  x = - 4.6070 * ( 1E9 / T3 ) + 2.9678 * ( 1E6 / T2 ) + 0.09911 * ( 1E3 / T ) + 0.244063; if ( T > 7000.0 && T <= 25000.0 )  x = - 2.0064 * ( 1E9 / T3 ) + 1.9018 * ( 1E6 / T2 ) + 0.24748 * ( 1E3 / T ) + 0.237040; white_point . x = - 1.0; white_point . y = - 1.0; white_point . Y = - 1.0; return white_point ; y = - 3.000 * ( x * x ) + 2.870 * x - 0.275; white_point . x = x; white_point . y = y; white_point . Y = 1.0; return white_point ; table = build_sRGB_gamma_table ( 1024 ); static uint16_t *build_sRGB_gamma_table(int num_entries) int i ; double gamma = 2.4 ; double a = 1. / 1.055 ; double b = 0.055 / 1.055 ; double c = 1. / 12.92 ; double d = 0.04045 ; uint16_t * table = malloc ( sizeof ( uint16_t ) * num_entries ) ; if ( ! table )  return NULL ; for (i=0; i<num_entries; i++) double x = ( double ) i / ( num_entries - 1 ) ; double y , output ; if ( x >= d )  double e = ( a * x + b ) ; if ( e > 0 )  y = pow ( e , gamma ); y = 0; y = c * x; output = y * 65535. + .5; if ( output > 65535. )  output = 65535; if ( output < 0 )  output = 0; table [ i ] = ( uint16_t ) floor ( output ); return table ; if ( ! table )  profile = qcms_profile_create_rgb_with_table ( D65 , Rec709Primaries , table , 1024 ); qcms_profile* qcms_CIE_xyY qcms_CIE_xyYTRIPLE uint16_t *table, int num_entries) qcms_profile * profile = qcms_profile_create ( ) ; qcms_profile *qcms_profile_create(void) return calloc ( sizeof ( qcms_profile ) , 1 ) ; if ( ! profile )  if ( ! set_rgb_colorants ( profile , white_point , primaries ) )  qcms_profile_release ( profile ); void qcms_profile_release(qcms_profile *profile) free ( profile ); 