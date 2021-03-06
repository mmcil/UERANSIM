/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SIB1_H_
#define	_RRC_SIB1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_CellAccessRelatedInfo.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include "RRC_Q-RxLevMin.h"
#include <NativeInteger.h>
#include "RRC_Q-QualMin.h"
#include <constr_SEQUENCE.h>
#include "RRC_UAC-BarringInfoSetList.h"
#include "RRC_UAC-AccessCategory1-SelectionAssistanceInfo.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_SIB1__ims_EmergencySupport {
	RRC_SIB1__ims_EmergencySupport_true	= 0
} e_RRC_SIB1__ims_EmergencySupport;
typedef enum RRC_SIB1__eCallOverIMS_Support {
	RRC_SIB1__eCallOverIMS_Support_true	= 0
} e_RRC_SIB1__eCallOverIMS_Support;
typedef enum RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR {
	RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR_NOTHING,	/* No components present */
	RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR_plmnCommon,
	RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR_individualPLMNList
} RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR;
typedef enum RRC_SIB1__useFullResumeID {
	RRC_SIB1__useFullResumeID_true	= 0
} e_RRC_SIB1__useFullResumeID;

/* Forward declarations */
struct RRC_ConnEstFailureControl;
struct RRC_SI_SchedulingInfo;
struct RRC_ServingCellConfigCommonSIB;
struct RRC_UE_TimersAndConstants;
struct RRC_UAC_BarringPerCatList;
struct RRC_UAC_BarringPerPLMN_List;

/* RRC_SIB1 */
typedef struct RRC_SIB1 {
	struct RRC_SIB1__cellSelectionInfo {
		RRC_Q_RxLevMin_t	 q_RxLevMin;
		long	*q_RxLevMinOffset;	/* OPTIONAL */
		RRC_Q_RxLevMin_t	*q_RxLevMinSUL;	/* OPTIONAL */
		RRC_Q_QualMin_t	*q_QualMin;	/* OPTIONAL */
		long	*q_QualMinOffset;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellSelectionInfo;
	RRC_CellAccessRelatedInfo_t	 cellAccessRelatedInfo;
	struct RRC_ConnEstFailureControl	*connEstFailureControl;	/* OPTIONAL */
	struct RRC_SI_SchedulingInfo	*si_SchedulingInfo;	/* OPTIONAL */
	struct RRC_ServingCellConfigCommonSIB	*servingCellConfigCommon;	/* OPTIONAL */
	long	*ims_EmergencySupport;	/* OPTIONAL */
	long	*eCallOverIMS_Support;	/* OPTIONAL */
	struct RRC_UE_TimersAndConstants	*ue_TimersAndConstants;	/* OPTIONAL */
	struct RRC_SIB1__uac_BarringInfo {
		struct RRC_UAC_BarringPerCatList	*uac_BarringForCommon;	/* OPTIONAL */
		struct RRC_UAC_BarringPerPLMN_List	*uac_BarringPerPLMN_List;	/* OPTIONAL */
		RRC_UAC_BarringInfoSetList_t	 uac_BarringInfoSetList;
		struct RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo {
			RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo_PR present;
			union RRC_SIB1__RRC_uac_BarringInfo__RRC_uac_AccessCategory1_SelectionAssistanceInfo_u {
				RRC_UAC_AccessCategory1_SelectionAssistanceInfo_t	 plmnCommon;
				struct RRC_SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo__individualPLMNList {
					A_SEQUENCE_OF(RRC_UAC_AccessCategory1_SelectionAssistanceInfo_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *individualPLMNList;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *uac_AccessCategory1_SelectionAssistanceInfo;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uac_BarringInfo;
	long	*useFullResumeID;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRC_SIB1__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SIB1_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ims_EmergencySupport_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_eCallOverIMS_Support_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_useFullResumeID_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SIB1;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SIB1_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SIB1_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SIB1_H_ */
#include <asn_internal.h>
