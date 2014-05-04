/*
 * LPP_PRS-Info.c
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP_PDU-Definitions"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#include <asn_internal.h>

#include "LPP_PRS-Info.h"

static int
prs_Bandwidth_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
prs_Bandwidth_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
prs_Bandwidth_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
prs_Bandwidth_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
prs_Bandwidth_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
prs_Bandwidth_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
prs_Bandwidth_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
prs_Bandwidth_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
prs_Bandwidth_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
prs_Bandwidth_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	prs_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
numDL_Frames_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
numDL_Frames_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
numDL_Frames_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numDL_Frames_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numDL_Frames_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numDL_Frames_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numDL_Frames_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numDL_Frames_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numDL_Frames_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numDL_Frames_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numDL_Frames_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_po2_r9_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_po4_r9_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_po8_r9_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_po16_r9_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_prs_ConfigurationIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_INTEGER_enum_map_t asn_MAP_prs_Bandwidth_value2enum_2[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
	/* This list is extensible */
};
static unsigned int asn_MAP_prs_Bandwidth_enum2value_2[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_prs_Bandwidth_specs_2 = {
	asn_MAP_prs_Bandwidth_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_prs_Bandwidth_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_prs_Bandwidth_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static asn_per_constraints_t asn_PER_prs_Bandwidth_constr_2 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prs_Bandwidth_2 = {
	"prs-Bandwidth",
	"prs-Bandwidth",
	prs_Bandwidth_2_free,
	prs_Bandwidth_2_print,
	prs_Bandwidth_2_constraint,
	prs_Bandwidth_2_decode_ber,
	prs_Bandwidth_2_encode_der,
	prs_Bandwidth_2_decode_xer,
	prs_Bandwidth_2_encode_xer,
	prs_Bandwidth_2_decode_uper,
	prs_Bandwidth_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_prs_Bandwidth_tags_2,
	sizeof(asn_DEF_prs_Bandwidth_tags_2)
		/sizeof(asn_DEF_prs_Bandwidth_tags_2[0]) - 1, /* 1 */
	asn_DEF_prs_Bandwidth_tags_2,	/* Same as above */
	sizeof(asn_DEF_prs_Bandwidth_tags_2)
		/sizeof(asn_DEF_prs_Bandwidth_tags_2[0]), /* 2 */
	&asn_PER_prs_Bandwidth_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_prs_Bandwidth_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_numDL_Frames_value2enum_11[] = {
	{ 0,	4,	"sf-1" },
	{ 1,	4,	"sf-2" },
	{ 2,	4,	"sf-4" },
	{ 3,	4,	"sf-6" }
	/* This list is extensible */
};
static unsigned int asn_MAP_numDL_Frames_enum2value_11[] = {
	0,	/* sf-1(0) */
	1,	/* sf-2(1) */
	2,	/* sf-4(2) */
	3	/* sf-6(3) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_numDL_Frames_specs_11 = {
	asn_MAP_numDL_Frames_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_numDL_Frames_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_numDL_Frames_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static asn_per_constraints_t asn_PER_numDL_Frames_constr_11 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numDL_Frames_11 = {
	"numDL-Frames",
	"numDL-Frames",
	numDL_Frames_11_free,
	numDL_Frames_11_print,
	numDL_Frames_11_constraint,
	numDL_Frames_11_decode_ber,
	numDL_Frames_11_encode_der,
	numDL_Frames_11_decode_xer,
	numDL_Frames_11_encode_xer,
	numDL_Frames_11_decode_uper,
	numDL_Frames_11_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numDL_Frames_tags_11,
	sizeof(asn_DEF_numDL_Frames_tags_11)
		/sizeof(asn_DEF_numDL_Frames_tags_11[0]) - 1, /* 1 */
	asn_DEF_numDL_Frames_tags_11,	/* Same as above */
	sizeof(asn_DEF_numDL_Frames_tags_11)
		/sizeof(asn_DEF_numDL_Frames_tags_11[0]), /* 2 */
	&asn_PER_numDL_Frames_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numDL_Frames_specs_11	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_po2_r9_constr_19 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */
};
static asn_per_constraints_t asn_PER_memb_po4_r9_constr_20 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */
};
static asn_per_constraints_t asn_PER_memb_po8_r9_constr_21 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */
};
static asn_per_constraints_t asn_PER_memb_po16_r9_constr_22 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */
};
static asn_TYPE_member_t asn_MBR_prs_MutingInfo_r9_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, choice.po2_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_po2_r9_constraint_18,
		&asn_PER_memb_po2_r9_constr_19,
		0,
		"po2-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, choice.po4_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_po4_r9_constraint_18,
		&asn_PER_memb_po4_r9_constr_20,
		0,
		"po4-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, choice.po8_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_po8_r9_constraint_18,
		&asn_PER_memb_po8_r9_constr_21,
		0,
		"po8-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, choice.po16_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_po16_r9_constraint_18,
		&asn_PER_memb_po16_r9_constr_22,
		0,
		"po16-r9"
		},
};
static asn_TYPE_tag2member_t asn_MAP_prs_MutingInfo_r9_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* po2-r9 at 2896 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* po4-r9 at 2897 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* po8-r9 at 2898 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* po16-r9 at 2899 */
};
static asn_CHOICE_specifics_t asn_SPC_prs_MutingInfo_r9_specs_18 = {
	sizeof(struct LPP_PRS_Info__prs_MutingInfo_r9),
	offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, _asn_ctx),
	offsetof(struct LPP_PRS_Info__prs_MutingInfo_r9, present),
	sizeof(((struct LPP_PRS_Info__prs_MutingInfo_r9 *)0)->present),
	asn_MAP_prs_MutingInfo_r9_tag2el_18,
	4,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
static asn_per_constraints_t asn_PER_prs_MutingInfo_r9_constr_18 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prs_MutingInfo_r9_18 = {
	"prs-MutingInfo-r9",
	"prs-MutingInfo-r9",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_prs_MutingInfo_r9_constr_18,
	asn_MBR_prs_MutingInfo_r9_18,
	4,	/* Elements count */
	&asn_SPC_prs_MutingInfo_r9_specs_18	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_prs_Bandwidth_constr_2 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_prs_ConfigurationIndex_constr_10 = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_numDL_Frames_constr_11 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_prs_MutingInfo_r9_constr_18 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_LPP_PRS_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info, prs_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_prs_Bandwidth_2,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_prs_Bandwidth_constr_2,
		0,
		"prs-Bandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info, prs_ConfigurationIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_prs_ConfigurationIndex_constraint_1,
		&asn_PER_memb_prs_ConfigurationIndex_constr_10,
		0,
		"prs-ConfigurationIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PRS_Info, numDL_Frames),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numDL_Frames_11,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_numDL_Frames_constr_11,
		0,
		"numDL-Frames"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_PRS_Info, prs_MutingInfo_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_prs_MutingInfo_r9_18,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_prs_MutingInfo_r9_constr_18,
		0,
		"prs-MutingInfo-r9"
		},
};
static int asn_MAP_LPP_PRS_Info_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_LPP_PRS_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_PRS_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prs-Bandwidth at 2891 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prs-ConfigurationIndex at 2892 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numDL-Frames at 2893 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* prs-MutingInfo-r9 at 2896 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_PRS_Info_specs_1 = {
	sizeof(struct LPP_PRS_Info),
	offsetof(struct LPP_PRS_Info, _asn_ctx),
	asn_MAP_LPP_PRS_Info_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LPP_PRS_Info_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_PRS_Info = {
	"LPP_PRS-Info",
	"LPP_PRS-Info",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPP_PRS_Info_tags_1,
	sizeof(asn_DEF_LPP_PRS_Info_tags_1)
		/sizeof(asn_DEF_LPP_PRS_Info_tags_1[0]), /* 1 */
	asn_DEF_LPP_PRS_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_PRS_Info_tags_1)
		/sizeof(asn_DEF_LPP_PRS_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_PRS_Info_1,
	4,	/* Elements count */
	&asn_SPC_LPP_PRS_Info_specs_1	/* Additional specs */
};
