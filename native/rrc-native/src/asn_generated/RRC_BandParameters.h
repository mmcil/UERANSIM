/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_BandParameters_H_
#define	_RRC_BandParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_FreqBandIndicatorEUTRA.h"
#include "RRC_CA-BandwidthClassEUTRA.h"
#include <constr_SEQUENCE.h>
#include "RRC_FreqBandIndicatorNR.h"
#include "RRC_CA-BandwidthClassNR.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_BandParameters_PR {
	RRC_BandParameters_PR_NOTHING,	/* No components present */
	RRC_BandParameters_PR_eutra,
	RRC_BandParameters_PR_nr
} RRC_BandParameters_PR;

/* RRC_BandParameters */
typedef struct RRC_BandParameters {
	RRC_BandParameters_PR present;
	union RRC_BandParameters_u {
		struct RRC_BandParameters__eutra {
			RRC_FreqBandIndicatorEUTRA_t	 bandEUTRA;
			RRC_CA_BandwidthClassEUTRA_t	*ca_BandwidthClassDL_EUTRA;	/* OPTIONAL */
			RRC_CA_BandwidthClassEUTRA_t	*ca_BandwidthClassUL_EUTRA;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *eutra;
		struct RRC_BandParameters__nr {
			RRC_FreqBandIndicatorNR_t	 bandNR;
			RRC_CA_BandwidthClassNR_t	*ca_BandwidthClassDL_NR;	/* OPTIONAL */
			RRC_CA_BandwidthClassNR_t	*ca_BandwidthClassUL_NR;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_BandParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_BandParameters;
extern asn_CHOICE_specifics_t asn_SPC_RRC_BandParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_BandParameters_1[2];
extern asn_per_constraints_t asn_PER_type_RRC_BandParameters_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_BandParameters_H_ */
#include <asn_internal.h>
