static sg_remove_sfp_usercontext(struct work_struct *work) struct sg_fd * sfp = container_of ( work , struct sg_fd , ew . work ) while ( sfp -> headrp )  sg_finish_rem_req ( sfp -> headrp ); static sg_finish_rem_req(Sg_request *srp) Sg_fd * sfp = srp -> parentfp ; Sg_scatter_hold * req_schp = & srp -> data ; if ( srp -> res_used )  sg_remove_scat ( sfp , req_schp ); static sg_remove_scat(Sg_fd * sfp, Sg_scatter_hold * schp) memset ( schp , 0 , sizeof ( * schp ) ); 