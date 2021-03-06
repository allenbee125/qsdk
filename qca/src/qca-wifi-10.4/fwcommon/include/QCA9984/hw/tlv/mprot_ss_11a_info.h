// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MPROT_SS_11A_INFO_H_
#define _MPROT_SS_11A_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	struct l_sig_a l_sig_a_bw20;
//	1	struct l_sig_a l_sig_a_bw40;
//	2	struct l_sig_a l_sig_a_bw80;
//	3	struct l_sig_a l_sig_a_bw160;
//	4	struct tx_service tx_service_bw20;
//	5	struct tx_service tx_service_bw40;
//	6	struct tx_service tx_service_bw80;
//	7	struct tx_service tx_service_bw160;
//	8	duration_bw20[15:0], duration_bw40[31:16]
//	9	duration_bw80[15:0], duration_bw160[31:16]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MPROT_SS_11A_INFO 10

struct mprot_ss_11a_info {
    struct            l_sig_a                       l_sig_a_bw20;
    struct            l_sig_a                       l_sig_a_bw40;
    struct            l_sig_a                       l_sig_a_bw80;
    struct            l_sig_a                       l_sig_a_bw160;
    struct            tx_service                       tx_service_bw20;
    struct            tx_service                       tx_service_bw40;
    struct            tx_service                       tx_service_bw80;
    struct            tx_service                       tx_service_bw160;
    volatile uint32_t duration_bw20                   : 16, //[15:0]
                      duration_bw40                   : 16; //[31:16]
    volatile uint32_t duration_bw80                   : 16, //[15:0]
                      duration_bw160                  : 16; //[31:16]
};

/*

struct l_sig_a l_sig_a_bw20
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct l_sig_a l_sig_a_bw40
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct l_sig_a l_sig_a_bw80
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct l_sig_a l_sig_a_bw160
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct tx_service tx_service_bw20
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_service tx_service_bw40
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_service tx_service_bw80
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_service tx_service_bw160
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

duration_bw20
			
			Duration in the generated RTS/CTS frame for 20 MHz
			transmission.

duration_bw40
			
			Duration in the generated RTS/CTS frame for 40 MHz
			transmission.

duration_bw80
			
			Duration in the generated RTS/CTS frame for 80 MHz
			transmission.

duration_bw160
			
			Duration in the generated RTS/CTS frame for 160 MHz
			transmission.
*/

#define MPROT_SS_11A_INFO_0_L_SIG_A_L_SIG_A_BW20_OFFSET              0x00000000
#define MPROT_SS_11A_INFO_0_L_SIG_A_L_SIG_A_BW20_LSB                 16
#define MPROT_SS_11A_INFO_0_L_SIG_A_L_SIG_A_BW20_MASK                0xffffffff
#define MPROT_SS_11A_INFO_1_L_SIG_A_L_SIG_A_BW40_OFFSET              0x00000004
#define MPROT_SS_11A_INFO_1_L_SIG_A_L_SIG_A_BW40_LSB                 16
#define MPROT_SS_11A_INFO_1_L_SIG_A_L_SIG_A_BW40_MASK                0xffffffff
#define MPROT_SS_11A_INFO_2_L_SIG_A_L_SIG_A_BW80_OFFSET              0x00000008
#define MPROT_SS_11A_INFO_2_L_SIG_A_L_SIG_A_BW80_LSB                 16
#define MPROT_SS_11A_INFO_2_L_SIG_A_L_SIG_A_BW80_MASK                0xffffffff
#define MPROT_SS_11A_INFO_3_L_SIG_A_L_SIG_A_BW160_OFFSET             0x0000000c
#define MPROT_SS_11A_INFO_3_L_SIG_A_L_SIG_A_BW160_LSB                16
#define MPROT_SS_11A_INFO_3_L_SIG_A_L_SIG_A_BW160_MASK               0xffffffff
#define MPROT_SS_11A_INFO_4_TX_SERVICE_TX_SERVICE_BW20_OFFSET        0x00000010
#define MPROT_SS_11A_INFO_4_TX_SERVICE_TX_SERVICE_BW20_LSB           16
#define MPROT_SS_11A_INFO_4_TX_SERVICE_TX_SERVICE_BW20_MASK          0xffffffff
#define MPROT_SS_11A_INFO_5_TX_SERVICE_TX_SERVICE_BW40_OFFSET        0x00000014
#define MPROT_SS_11A_INFO_5_TX_SERVICE_TX_SERVICE_BW40_LSB           16
#define MPROT_SS_11A_INFO_5_TX_SERVICE_TX_SERVICE_BW40_MASK          0xffffffff
#define MPROT_SS_11A_INFO_6_TX_SERVICE_TX_SERVICE_BW80_OFFSET        0x00000018
#define MPROT_SS_11A_INFO_6_TX_SERVICE_TX_SERVICE_BW80_LSB           16
#define MPROT_SS_11A_INFO_6_TX_SERVICE_TX_SERVICE_BW80_MASK          0xffffffff
#define MPROT_SS_11A_INFO_7_TX_SERVICE_TX_SERVICE_BW160_OFFSET       0x0000001c
#define MPROT_SS_11A_INFO_7_TX_SERVICE_TX_SERVICE_BW160_LSB          16
#define MPROT_SS_11A_INFO_7_TX_SERVICE_TX_SERVICE_BW160_MASK         0xffffffff

/* Description		MPROT_SS_11A_INFO_8_DURATION_BW20
			
			Duration in the generated RTS/CTS frame for 20 MHz
			transmission.
*/
#define MPROT_SS_11A_INFO_8_DURATION_BW20_OFFSET                     0x00000020
#define MPROT_SS_11A_INFO_8_DURATION_BW20_LSB                        0
#define MPROT_SS_11A_INFO_8_DURATION_BW20_MASK                       0x0000ffff

/* Description		MPROT_SS_11A_INFO_8_DURATION_BW40
			
			Duration in the generated RTS/CTS frame for 40 MHz
			transmission.
*/
#define MPROT_SS_11A_INFO_8_DURATION_BW40_OFFSET                     0x00000020
#define MPROT_SS_11A_INFO_8_DURATION_BW40_LSB                        16
#define MPROT_SS_11A_INFO_8_DURATION_BW40_MASK                       0xffff0000

/* Description		MPROT_SS_11A_INFO_9_DURATION_BW80
			
			Duration in the generated RTS/CTS frame for 80 MHz
			transmission.
*/
#define MPROT_SS_11A_INFO_9_DURATION_BW80_OFFSET                     0x00000024
#define MPROT_SS_11A_INFO_9_DURATION_BW80_LSB                        0
#define MPROT_SS_11A_INFO_9_DURATION_BW80_MASK                       0x0000ffff

/* Description		MPROT_SS_11A_INFO_9_DURATION_BW160
			
			Duration in the generated RTS/CTS frame for 160 MHz
			transmission.
*/
#define MPROT_SS_11A_INFO_9_DURATION_BW160_OFFSET                    0x00000024
#define MPROT_SS_11A_INFO_9_DURATION_BW160_LSB                       16
#define MPROT_SS_11A_INFO_9_DURATION_BW160_MASK                      0xffff0000


#endif // _MPROT_SS_11A_INFO_H_
