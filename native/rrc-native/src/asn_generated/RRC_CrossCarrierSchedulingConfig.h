/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CrossCarrierSchedulingConfig_H_
#define	_RRC_CrossCarrierSchedulingConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "RRC_ServCellIndex.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR {
	RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR_NOTHING,	/* No components present */
	RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR_own,
	RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR_other
} RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR;

/* RRC_CrossCarrierSchedulingConfig */
typedef struct RRC_CrossCarrierSchedulingConfig {
	struct RRC_CrossCarrierSchedulingConfig__schedulingCellInfo {
		RRC_CrossCarrierSchedulingConfig__schedulingCellInfo_PR present;
		union RRC_CrossCarrierSchedulingConfig__RRC_schedulingCellInfo_u {
			struct RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__own {
				BOOLEAN_t	 cif_Presence;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *own;
			struct RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__other {
				RRC_ServCellIndex_t	 schedulingCellId;
				long	 cif_InSchedulingCell;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *other;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingCellInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CrossCarrierSchedulingConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CrossCarrierSchedulingConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CrossCarrierSchedulingConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CrossCarrierSchedulingConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CrossCarrierSchedulingConfig_H_ */
#include <asn_internal.h>
