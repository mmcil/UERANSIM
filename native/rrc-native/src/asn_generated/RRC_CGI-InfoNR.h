/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CGI_InfoNR_H_
#define	_RRC_CGI_InfoNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "RRC_PDCCH-ConfigSIB1.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_PLMN_IdentityInfoList;
struct RRC_MultiFrequencyBandListNR;

/* RRC_CGI-InfoNR */
typedef struct RRC_CGI_InfoNR {
	struct RRC_PLMN_IdentityInfoList	*plmn_IdentityInfoList;	/* OPTIONAL */
	struct RRC_MultiFrequencyBandListNR	*frequencyBandList;	/* OPTIONAL */
	struct RRC_CGI_InfoNR__noSIB1 {
		long	 ssb_SubcarrierOffset;
		RRC_PDCCH_ConfigSIB1_t	 pdcch_ConfigSIB1;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *noSIB1;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CGI_InfoNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CGI_InfoNR;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CGI_InfoNR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CGI_InfoNR_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CGI_InfoNR_H_ */
#include <asn_internal.h>
