/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PUCCH_Resource_H_
#define	_RRC_PUCCH_Resource_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_PUCCH-ResourceId.h"
#include "RRC_PRB-Id.h"
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PUCCH_Resource__intraSlotFrequencyHopping {
	RRC_PUCCH_Resource__intraSlotFrequencyHopping_enabled	= 0
} e_RRC_PUCCH_Resource__intraSlotFrequencyHopping;
typedef enum RRC_PUCCH_Resource__format_PR {
	RRC_PUCCH_Resource__format_PR_NOTHING,	/* No components present */
	RRC_PUCCH_Resource__format_PR_format0,
	RRC_PUCCH_Resource__format_PR_format1,
	RRC_PUCCH_Resource__format_PR_format2,
	RRC_PUCCH_Resource__format_PR_format3,
	RRC_PUCCH_Resource__format_PR_format4
} RRC_PUCCH_Resource__format_PR;

/* Forward declarations */
struct RRC_PUCCH_format0;
struct RRC_PUCCH_format1;
struct RRC_PUCCH_format2;
struct RRC_PUCCH_format3;
struct RRC_PUCCH_format4;

/* RRC_PUCCH-Resource */
typedef struct RRC_PUCCH_Resource {
	RRC_PUCCH_ResourceId_t	 pucch_ResourceId;
	RRC_PRB_Id_t	 startingPRB;
	long	*intraSlotFrequencyHopping;	/* OPTIONAL */
	RRC_PRB_Id_t	*secondHopPRB;	/* OPTIONAL */
	struct RRC_PUCCH_Resource__format {
		RRC_PUCCH_Resource__format_PR present;
		union RRC_PUCCH_Resource__RRC_format_u {
			struct RRC_PUCCH_format0	*format0;
			struct RRC_PUCCH_format1	*format1;
			struct RRC_PUCCH_format2	*format2;
			struct RRC_PUCCH_format3	*format3;
			struct RRC_PUCCH_format4	*format4;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} format;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PUCCH_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_intraSlotFrequencyHopping_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PUCCH_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PUCCH_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PUCCH_Resource_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PUCCH_Resource_H_ */
#include <asn_internal.h>
