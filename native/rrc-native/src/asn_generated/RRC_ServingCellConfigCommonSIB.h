/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ServingCellConfigCommonSIB_H_
#define	_RRC_ServingCellConfigCommonSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_DownlinkConfigCommonSIB.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ServingCellConfigCommonSIB__n_TimingAdvanceOffset {
	RRC_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n0	= 0,
	RRC_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n25600	= 1,
	RRC_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n39936	= 2
} e_RRC_ServingCellConfigCommonSIB__n_TimingAdvanceOffset;
typedef enum RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell {
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms5	= 0,
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms10	= 1,
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms20	= 2,
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms40	= 3,
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms80	= 4,
	RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms160	= 5
} e_RRC_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell;

/* Forward declarations */
struct RRC_UplinkConfigCommonSIB;
struct RRC_TDD_UL_DL_ConfigCommon;

/* RRC_ServingCellConfigCommonSIB */
typedef struct RRC_ServingCellConfigCommonSIB {
	RRC_DownlinkConfigCommonSIB_t	 downlinkConfigCommon;
	struct RRC_UplinkConfigCommonSIB	*uplinkConfigCommon;	/* OPTIONAL */
	struct RRC_UplinkConfigCommonSIB	*supplementaryUplink;	/* OPTIONAL */
	long	*n_TimingAdvanceOffset;	/* OPTIONAL */
	struct RRC_ServingCellConfigCommonSIB__ssb_PositionsInBurst {
		BIT_STRING_t	 inOneGroup;
		BIT_STRING_t	*groupPresence;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ssb_PositionsInBurst;
	long	 ssb_PeriodicityServingCell;
	struct RRC_TDD_UL_DL_ConfigCommon	*tdd_UL_DL_ConfigurationCommon;	/* OPTIONAL */
	long	 ss_PBCH_BlockPower;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ServingCellConfigCommonSIB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_n_TimingAdvanceOffset_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ssb_PeriodicityServingCell_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ServingCellConfigCommonSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_ServingCellConfigCommonSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ServingCellConfigCommonSIB_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ServingCellConfigCommonSIB_H_ */
#include <asn_internal.h>
