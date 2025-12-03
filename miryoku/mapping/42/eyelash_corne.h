// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
             K00, K01, K02, K03, K04,                                  K05, K06, K07, K08, K09, \
             K10, K11, K12, K13, K14,                                  K15, K16, K17, K18, K19, \
             K20, K21, K22, K23, K24,                                  K25, K26, K27, K28, K29, \
             N30, N31, K32, K33, K34,                                  K35, K36, K37, N38, N39 \
) \
&u_to_U_BASE K00  K01  K02  K03  K04                   U_MS_U          K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LCTRL    K10  K11  K12  K13  K14           U_MS_L  U_BTN1  U_MS_R  K15  K16  K17  K18  K19  XXX \
&kp LSHFT    K20  K21  K22  K23  K24  &kp C_PP         U_MS_D          K25  K26  K27  K28  K29  XXX \
                       K32  K33  K34                                   K35  K36  K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE
