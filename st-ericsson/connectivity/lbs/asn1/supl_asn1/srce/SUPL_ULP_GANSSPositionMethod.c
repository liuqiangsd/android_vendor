/*
 * SUPL_ULP_GANSSPositionMethod.c
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: david.gowers@stericsson.com for ST-Ericsson.
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
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#include <asn_internal.h>

#include "SUPL_ULP_GANSSPositionMethod.h"

static int
memb_ganssId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 15)) {
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
memb_ganssSBASid_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
    
    if((size == 3)) {
        /* Constraint check succeeded */
        return 0;
    } else {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: constraint failed (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
}

static asn_per_constraints_t asn_PER_memb_ganssId_constr_2 = {
    { APC_CONSTRAINED,     4,  4,  0,  15 }    /* (0..15) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganssSBASid_constr_3 = {
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    { APC_CONSTRAINED,     0,  0,  3,  3 }    /* (SIZE(3..3)) */,
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSPositionMethod_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct GANSSPositionMethod, ganssId),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_ganssId_constraint_1,
        &asn_PER_memb_ganssId_constr_2,
        0,
        "ganssId"
        },
    { ATF_POINTER, 1, offsetof(struct GANSSPositionMethod, ganssSBASid),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_BIT_STRING,
        memb_ganssSBASid_constraint_1,
        &asn_PER_memb_ganssSBASid_constr_3,
        0,
        "ganssSBASid"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GANSSPositionMethod, gANSSPositioningMethodTypes),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_GANSSPositioningMethodTypes,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "gANSSPositioningMethodTypes"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GANSSPositionMethod, gANSSSignals),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_GANSSSignals,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "gANSSSignals"
        },
};
static int asn_MAP_GANSSPositionMethod_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_GANSSPositionMethod_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GANSSPositionMethod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssId at 901 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssSBASid at 902 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gANSSPositioningMethodTypes at 903 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* gANSSSignals at 904 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GANSSPositionMethod_specs_1 = {
    sizeof(struct GANSSPositionMethod),
    offsetof(struct GANSSPositionMethod, _asn_ctx),
    asn_MAP_GANSSPositionMethod_tag2el_1,
    4,    /* Count of tags in the map */
    asn_MAP_GANSSPositionMethod_oms_1,    /* Optional members */
    1, 0,    /* Root/Additions */
    3,    /* Start extensions */
    5    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GANSSPositionMethod = {
    "GANSSPositionMethod",
    "GANSSPositionMethod",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_GANSSPositionMethod_tags_1,
    sizeof(asn_DEF_GANSSPositionMethod_tags_1)
        /sizeof(asn_DEF_GANSSPositionMethod_tags_1[0]), /* 1 */
    asn_DEF_GANSSPositionMethod_tags_1,    /* Same as above */
    sizeof(asn_DEF_GANSSPositionMethod_tags_1)
        /sizeof(asn_DEF_GANSSPositionMethod_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_GANSSPositionMethod_1,
    4,    /* Elements count */
    &asn_SPC_GANSSPositionMethod_specs_1    /* Additional specs */
};
