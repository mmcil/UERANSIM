/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PHR_Config_H_
#define	_RRC_PHR_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PHR_Config__phr_PeriodicTimer {
	RRC_PHR_Config__phr_PeriodicTimer_sf10	= 0,
	RRC_PHR_Config__phr_PeriodicTimer_sf20	= 1,
	RRC_PHR_Config__phr_PeriodicTimer_sf50	= 2,
	RRC_PHR_Config__phr_PeriodicTimer_sf100	= 3,
	RRC_PHR_Config__phr_PeriodicTimer_sf200	= 4,
	RRC_PHR_Config__phr_PeriodicTimer_sf500	= 5,
	RRC_PHR_Config__phr_PeriodicTimer_sf1000	= 6,
	RRC_PHR_Config__phr_PeriodicTimer_infinity	= 7
} e_RRC_PHR_Config__phr_PeriodicTimer;
typedef enum RRC_PHR_Config__phr_ProhibitTimer {
	RRC_PHR_Config__phr_ProhibitTimer_sf0	= 0,
	RRC_PHR_Config__phr_ProhibitTimer_sf10	= 1,
	RRC_PHR_Config__phr_ProhibitTimer_sf20	= 2,
	RRC_PHR_Config__phr_ProhibitTimer_sf50	= 3,
	RRC_PHR_Config__phr_ProhibitTimer_sf100	= 4,
	RRC_PHR_Config__phr_ProhibitTimer_sf200	= 5,
	RRC_PHR_Config__phr_ProhibitTimer_sf500	= 6,
	RRC_PHR_Config__phr_ProhibitTimer_sf1000	= 7
} e_RRC_PHR_Config__phr_ProhibitTimer;
typedef enum RRC_PHR_Config__phr_Tx_PowerFactorChange {
	RRC_PHR_Config__phr_Tx_PowerFactorChange_dB1	= 0,
	RRC_PHR_Config__phr_Tx_PowerFactorChange_dB3	= 1,
	RRC_PHR_Config__phr_Tx_PowerFactorChange_dB6	= 2,
	RRC_PHR_Config__phr_Tx_PowerFactorChange_infinity	= 3
} e_RRC_PHR_Config__phr_Tx_PowerFactorChange;
typedef enum RRC_PHR_Config__phr_ModeOtherCG {
	RRC_PHR_Config__phr_ModeOtherCG_real	= 0,
	RRC_PHR_Config__phr_ModeOtherCG_virtual	= 1
} e_RRC_PHR_Config__phr_ModeOtherCG;

/* RRC_PHR-Config */
typedef struct RRC_PHR_Config {
	long	 phr_PeriodicTimer;
	long	 phr_ProhibitTimer;
	long	 phr_Tx_PowerFactorChange;
	BOOLEAN_t	 multiplePHR;
	BOOLEAN_t	 dummy;
	BOOLEAN_t	 phr_Type2OtherCell;
	long	 phr_ModeOtherCG;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PHR_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_phr_PeriodicTimer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_phr_ProhibitTimer_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_phr_Tx_PowerFactorChange_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_phr_ModeOtherCG_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PHR_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PHR_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PHR_Config_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PHR_Config_H_ */
#include <asn_internal.h>
