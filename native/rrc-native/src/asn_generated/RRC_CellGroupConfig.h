/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CellGroupConfig_H_
#define	_RRC_CellGroupConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_CellGroupId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "RRC_LogicalChannelIdentity.h"
#include "RRC_SCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CellGroupConfig__ext1__reportUplinkTxDirectCurrent_v1530 {
	RRC_CellGroupConfig__ext1__reportUplinkTxDirectCurrent_v1530_true	= 0
} e_RRC_CellGroupConfig__ext1__reportUplinkTxDirectCurrent_v1530;

/* Forward declarations */
struct RRC_MAC_CellGroupConfig;
struct RRC_PhysicalCellGroupConfig;
struct RRC_SpCellConfig;
struct RRC_RLC_BearerConfig;
struct RRC_SCellConfig;

/* RRC_CellGroupConfig */
typedef struct RRC_CellGroupConfig {
	RRC_CellGroupId_t	 cellGroupId;
	struct RRC_CellGroupConfig__rlc_BearerToAddModList {
		A_SEQUENCE_OF(struct RRC_RLC_BearerConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToAddModList;
	struct RRC_CellGroupConfig__rlc_BearerToReleaseList {
		A_SEQUENCE_OF(RRC_LogicalChannelIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToReleaseList;
	struct RRC_MAC_CellGroupConfig	*mac_CellGroupConfig;	/* OPTIONAL */
	struct RRC_PhysicalCellGroupConfig	*physicalCellGroupConfig;	/* OPTIONAL */
	struct RRC_SpCellConfig	*spCellConfig;	/* OPTIONAL */
	struct RRC_CellGroupConfig__sCellToAddModList {
		A_SEQUENCE_OF(struct RRC_SCellConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToAddModList;
	struct RRC_CellGroupConfig__sCellToReleaseList {
		A_SEQUENCE_OF(RRC_SCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_CellGroupConfig__ext1 {
		long	*reportUplinkTxDirectCurrent_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CellGroupConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_reportUplinkTxDirectCurrent_v1530_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CellGroupConfig;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CellGroupConfig_H_ */
#include <asn_internal.h>
