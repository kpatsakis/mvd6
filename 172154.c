qcms_profile* qcms_profile_sRGB(void) qcms_profile * profile ; uint16_t * table ; qcms_CIE_xyYTRIPLE Rec709Primaries = { { 0.6400 , 0.3300 , 1.0 } , { 0.3000 , 0.6000 , 1.0 } , { 0.1500 , 0.0600 , 1.0 } } ; qcms_CIE_xyY D65 ; D65 = white_point_from_temp ( 6504 ); table = build_sRGB_gamma_table ( 1024 ); if ( ! table )  profile = qcms_profile_create_rgb_with_table ( D65 , Rec709Primaries , table , 1024 ); qcms_profile* qcms_CIE_xyY qcms_CIE_xyYTRIPLE uint16_t *table, int num_entries) qcms_profile * profile = qcms_profile_create ( ) ; if ( ! profile )  if ( ! set_rgb_colorants ( profile , white_point , primaries ) )  qcms_profile_release ( profile ); void qcms_profile_release(qcms_profile *profile) if ( profile -> B2A0 )  lut_release ( profile -> B2A0 ); static void lut_release(struct lutType *lut) free ( lut ); 