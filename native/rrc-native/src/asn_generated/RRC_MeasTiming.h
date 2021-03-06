/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasTiming_H_
#define	_RRC_MeasTiming_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueNR.h"
#include "RRC_SubcarrierSpacing.h"
#include "RRC_SSB-MTC.h"
#include <constr_SEQUENCE.h>
#include "RRC_PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_SS_RSSI_Measurement;
struct RRC_SSB_ToMeasure;

/* RRC_MeasTiming */
typedef struct RRC_MeasTiming {
	struct RRC_MeasTiming__frequencyAndTiming {
		RRC_ARFCN_ValueNR_t	 carrierFreq;
		RRC_SubcarrierSpacing_t	 ssbSubcarrierSpacing;
		RRC_SSB_MTC_t	 ssb_MeasurementTimingConfiguration;
		struct RRC_SS_RSSI_Measurement	*ss_RSSI_Measurement;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyAndTiming;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_MeasTiming__ext1 {
		struct RRC_SSB_ToMeasure	*ssb_ToMeasure_v1540;	/* OPTIONAL */
		RRC_PhysCellId_t	*physCellId;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasTiming_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasTiming;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasTiming_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasTiming_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasTiming_H_ */
#include <asn_internal.h>
