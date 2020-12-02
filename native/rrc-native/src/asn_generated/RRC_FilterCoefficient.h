/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FilterCoefficient_H_
#define	_RRC_FilterCoefficient_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_FilterCoefficient {
	RRC_FilterCoefficient_fc0	= 0,
	RRC_FilterCoefficient_fc1	= 1,
	RRC_FilterCoefficient_fc2	= 2,
	RRC_FilterCoefficient_fc3	= 3,
	RRC_FilterCoefficient_fc4	= 4,
	RRC_FilterCoefficient_fc5	= 5,
	RRC_FilterCoefficient_fc6	= 6,
	RRC_FilterCoefficient_fc7	= 7,
	RRC_FilterCoefficient_fc8	= 8,
	RRC_FilterCoefficient_fc9	= 9,
	RRC_FilterCoefficient_fc11	= 10,
	RRC_FilterCoefficient_fc13	= 11,
	RRC_FilterCoefficient_fc15	= 12,
	RRC_FilterCoefficient_fc17	= 13,
	RRC_FilterCoefficient_fc19	= 14,
	RRC_FilterCoefficient_spare1	= 15
	/*
	 * Enumeration is extensible
	 */
} e_RRC_FilterCoefficient;

/* RRC_FilterCoefficient */
typedef long	 RRC_FilterCoefficient_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_FilterCoefficient_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_FilterCoefficient;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_FilterCoefficient_specs_1;
asn_struct_free_f RRC_FilterCoefficient_free;
asn_struct_print_f RRC_FilterCoefficient_print;
asn_constr_check_f RRC_FilterCoefficient_constraint;
ber_type_decoder_f RRC_FilterCoefficient_decode_ber;
der_type_encoder_f RRC_FilterCoefficient_encode_der;
xer_type_decoder_f RRC_FilterCoefficient_decode_xer;
xer_type_encoder_f RRC_FilterCoefficient_encode_xer;
per_type_decoder_f RRC_FilterCoefficient_decode_uper;
per_type_encoder_f RRC_FilterCoefficient_encode_uper;
per_type_decoder_f RRC_FilterCoefficient_decode_aper;
per_type_encoder_f RRC_FilterCoefficient_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FilterCoefficient_H_ */
#include <asn_internal.h>