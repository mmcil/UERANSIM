/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FrequencyInfoDL_H_
#define	_RRC_FrequencyInfoDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueNR.h"
#include "RRC_MultiFrequencyBandListNR.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_SCS_SpecificCarrier;

/* RRC_FrequencyInfoDL */
typedef struct RRC_FrequencyInfoDL {
	RRC_ARFCN_ValueNR_t	*absoluteFrequencySSB;	/* OPTIONAL */
	RRC_MultiFrequencyBandListNR_t	 frequencyBandList;
	RRC_ARFCN_ValueNR_t	 absoluteFrequencyPointA;
	struct RRC_FrequencyInfoDL__scs_SpecificCarrierList {
		A_SEQUENCE_OF(struct RRC_SCS_SpecificCarrier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scs_SpecificCarrierList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FrequencyInfoDL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FrequencyInfoDL;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FrequencyInfoDL_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FrequencyInfoDL_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FrequencyInfoDL_H_ */
#include <asn_internal.h>
