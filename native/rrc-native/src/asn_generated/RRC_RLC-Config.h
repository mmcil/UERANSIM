/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_RLC_Config_H_
#define	_RRC_RLC_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_UL-AM-RLC.h"
#include "RRC_DL-AM-RLC.h"
#include <constr_SEQUENCE.h>
#include "RRC_UL-UM-RLC.h"
#include "RRC_DL-UM-RLC.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_RLC_Config_PR {
	RRC_RLC_Config_PR_NOTHING,	/* No components present */
	RRC_RLC_Config_PR_am,
	RRC_RLC_Config_PR_um_Bi_Directional,
	RRC_RLC_Config_PR_um_Uni_Directional_UL,
	RRC_RLC_Config_PR_um_Uni_Directional_DL
	/* Extensions may appear below */
	
} RRC_RLC_Config_PR;

/* RRC_RLC-Config */
typedef struct RRC_RLC_Config {
	RRC_RLC_Config_PR present;
	union RRC_RLC_Config_u {
		struct RRC_RLC_Config__am {
			RRC_UL_AM_RLC_t	 ul_AM_RLC;
			RRC_DL_AM_RLC_t	 dl_AM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *am;
		struct RRC_RLC_Config__um_Bi_Directional {
			RRC_UL_UM_RLC_t	 ul_UM_RLC;
			RRC_DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Bi_Directional;
		struct RRC_RLC_Config__um_Uni_Directional_UL {
			RRC_UL_UM_RLC_t	 ul_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Uni_Directional_UL;
		struct RRC_RLC_Config__um_Uni_Directional_DL {
			RRC_DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Uni_Directional_DL;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_RLC_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_RLC_Config;
extern asn_CHOICE_specifics_t asn_SPC_RRC_RLC_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_RLC_Config_1[4];
extern asn_per_constraints_t asn_PER_type_RRC_RLC_Config_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_RLC_Config_H_ */
#include <asn_internal.h>
