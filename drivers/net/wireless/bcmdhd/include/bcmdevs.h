/*
 * Broadcom device-specific manifest constants.
 *
 * Copyright (C) 1999-2011, Broadcom Corporation
 *
 *         Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *      Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a license
 * other than the GPL, without Broadcom's express prior written consent.
 *
 * $Id: bcmdevs.h,v 13.285.2.39 2011-02-04 05:03:16 Exp $
 */

#ifndef	_BCMDEVS_H
#define	_BCMDEVS_H


#define	VENDOR_EPIGRAM		0xfeda
#define	VENDOR_BROADCOM		0x14e4
#define	VENDOR_3COM		0x10b7
#define	VENDOR_NETGEAR		0x1385
#define	VENDOR_DIAMOND		0x1092
#define	VENDOR_INTEL		0x8086
#define	VENDOR_DELL		0x1028
#define	VENDOR_HP		0x103c
#define	VENDOR_HP_COMPAQ	0x0e11
#define	VENDOR_APPLE		0x106b
#define VENDOR_SI_IMAGE		0x1095
#define VENDOR_BUFFALO		0x1154
#define VENDOR_TI		0x104c
#define VENDOR_RICOH		0x1180
#define VENDOR_JMICRON		0x197b



#define	VENDOR_BROADCOM_PCMCIA	0x02d0


#define	VENDOR_BROADCOM_SDIO	0x00BF


#define BCM_DNGL_VID		0x0a5c
#define BCM_DNGL_BL_PID_4328	0xbd12
#define BCM_DNGL_BL_PID_4322	0xbd13
#define BCM_DNGL_BL_PID_4319    0xbd16
#define BCM_DNGL_BL_PID_43236   0xbd17
#define BCM_DNGL_BL_PID_4332	0xbd18
#define BCM_DNGL_BL_PID_4330	0xbd19
#define BCM_DNGL_BL_PID_43239   0xbd1b
#define BCM_DNGL_BDC_PID	0x0bdc
#define BCM_DNGL_JTAG_PID	0x4a44
#define BCM_HWUSB_PID_43239     43239
#define	BCM4210_DEVICE_ID	0x1072
#define	BCM4230_DEVICE_ID	0x1086
#define	BCM4401_ENET_ID		0x170c
#define	BCM3352_DEVICE_ID	0x3352
#define	BCM3360_DEVICE_ID	0x3360
#define	BCM4211_DEVICE_ID	0x4211
#define	BCM4231_DEVICE_ID	0x4231
#define	BCM4303_D11B_ID		0x4303
#define	BCM4311_D11G_ID		0x4311
#define	BCM4311_D11DUAL_ID	0x4312
#define	BCM4311_D11A_ID		0x4313
#define	BCM4328_D11DUAL_ID	0x4314
#define	BCM4328_D11G_ID		0x4315
#define	BCM4328_D11A_ID		0x4316
#define	BCM4318_D11G_ID		0x4318
#define	BCM4318_D11DUAL_ID	0x4319
#define	BCM4318_D11A_ID		0x431a
#define	BCM4325_D11DUAL_ID	0x431b
#define	BCM4325_D11G_ID		0x431c
#define	BCM4325_D11A_ID		0x431d
#define	BCM4306_D11G_ID		0x4320
#define	BCM4306_D11A_ID		0x4321
#define	BCM4306_UART_ID		0x4322
#define	BCM4306_V90_ID		0x4323
#define	BCM4306_D11DUAL_ID	0x4324
#define	BCM4306_D11G_ID2	0x4325
#define	BCM4321_D11N_ID		0x4328
#define	BCM4321_D11N2G_ID	0x4329
#define	BCM4321_D11N5G_ID	0x432a
#define BCM4322_D11N_ID		0x432b
#define BCM4322_D11N2G_ID	0x432c
#define BCM4322_D11N5G_ID	0x432d
#define BCM4329_D11N_ID		0x432e
#define BCM4329_D11N2G_ID	0x432f
#define BCM4329_D11N5G_ID	0x4330
#define	BCM4315_D11DUAL_ID	0x4334
#define	BCM4315_D11G_ID		0x4335
#define	BCM4315_D11A_ID		0x4336
#define BCM4319_D11N_ID		0x4337
#define BCM4319_D11N2G_ID	0x4338
#define BCM4319_D11N5G_ID	0x4339
#define BCM43231_D11N2G_ID	0x4340
#define BCM43221_D11N2G_ID	0x4341
#define BCM43222_D11N_ID	0x4350
#define BCM43222_D11N2G_ID	0x4351
#define BCM43222_D11N5G_ID	0x4352
#define BCM43224_D11N_ID	0x4353
#define BCM43224_D11N_ID_VEN1	0x0576
#define BCM43226_D11N_ID	0x4354
#define BCM43236_D11N_ID	0x4346
#define BCM43236_D11N2G_ID	0x4347
#define BCM43236_D11N5G_ID	0x4348
#define BCM43225_D11N2G_ID	0x4357
#define BCM43421_D11N_ID	0xA99D
#define BCM4313_D11N2G_ID	0x4727
#define BCM4330_D11N_ID         0x4360
#define BCM4330_D11N2G_ID       0x4361
#define BCM4330_D11N5G_ID       0x4362
#define BCM4336_D11N_ID		0x4343
#define BCM6362_D11N_ID		0x435f
#define BCM4331_D11N_ID		0x4331
#define BCM4331_D11N2G_ID	0x4332
#define BCM4331_D11N5G_ID	0x4333
#define BCM43237_D11N_ID	0x4355
#define BCM43237_D11N5G_ID	0x4356
#define BCM43227_D11N2G_ID	0x4358
#define BCM43228_D11N_ID		0x4359
#define BCM43228_D11N5G_ID	0x435a
#define BCM43362_D11N_ID	0x4363
#define BCM43239_D11N_ID	0x4370


#define	BCMGPRS_UART_ID		0x4333
#define	BCMGPRS2_UART_ID	0x4344
#define FPGA_JTAGM_ID		0x43f0
#define BCM_JTAGM_ID		0x43f1
#define SDIOH_FPGA_ID		0x43f2
#define BCM_SDIOH_ID		0x43f3
#define SDIOD_FPGA_ID		0x43f4
#define SPIH_FPGA_ID		0x43f5
#define BCM_SPIH_ID		0x43f6
#define MIMO_FPGA_ID		0x43f8
#define BCM_JTAGM2_ID		0x43f9
#define SDHCI_FPGA_ID		0x43fa
#define	BCM4402_ENET_ID		0x4402
#define	BCM4402_V90_ID		0x4403
#define	BCM4410_DEVICE_ID	0x4410
#define	BCM4412_DEVICE_ID	0x4412
#define	BCM4430_DEVICE_ID	0x4430
#define	BCM4432_DEVICE_ID	0x4432
#define	BCM4704_ENET_ID		0x4706
#define	BCM4710_DEVICE_ID	0x4710
#define	BCM47XX_AUDIO_ID	0x4711
#define	BCM47XX_V90_ID		0x4712
#define	BCM47XX_ENET_ID		0x4713
#define	BCM47XX_EXT_ID		0x4714
#define	BCM47XX_GMAC_ID		0x4715
#define	BCM47XX_USBH_ID		0x4716
#define	BCM47XX_USBD_ID		0x4717
#define	BCM47XX_IPSEC_ID	0x4718
#define	BCM47XX_ROBO_ID		0x4719
#define	BCM47XX_USB20H_ID	0x471a
#define	BCM47XX_USB20D_ID	0x471b
#define	BCM47XX_ATA100_ID	0x471d
#define	BCM47XX_SATAXOR_ID	0x471e
#define	BCM47XX_GIGETH_ID	0x471f
#define	BCM4712_MIPS_ID		0x4720
#define	BCM4716_DEVICE_ID	0x4722
#define BCM47XX_SMBUS_EMU_ID	0x47fe
#define	BCM47XX_XOR_EMU_ID	0x47ff
#define	EPI41210_DEVICE_ID	0xa0fa
#define	EPI41230_DEVICE_ID	0xa10e
#define JINVANI_SDIOH_ID	0x4743
#define BCM27XX_SDIOH_ID	0x2702
#define PCIXX21_FLASHMEDIA_ID	0x803b
#define PCIXX21_SDIOH_ID	0x803c
#define R5C822_SDIOH_ID		0x0822
#define JMICRON_SDIOH_ID	0x2381


#define	BCM4306_CHIP_ID		0x4306
#define	BCM4311_CHIP_ID		0x4311
#define	BCM43111_CHIP_ID	43111
#define	BCM43112_CHIP_ID	43112
#define	BCM4312_CHIP_ID		0x4312
#define BCM4313_CHIP_ID		0x4313
#define	BCM43131_CHIP_ID	43131
#define	BCM4315_CHIP_ID		0x4315
#define	BCM4318_CHIP_ID		0x4318
#define	BCM4319_CHIP_ID		0x4319
#define	BCM4320_CHIP_ID		0x4320
#define	BCM4321_CHIP_ID		0x4321
#define	BCM43217_CHIP_ID	43217
#define	BCM4322_CHIP_ID		0x4322
#define	BCM43221_CHIP_ID	43221
#define	BCM43222_CHIP_ID	43222
#define	BCM43224_CHIP_ID	43224
#define	BCM43225_CHIP_ID	43225
#define	BCM43227_CHIP_ID	43227
#define	BCM43228_CHIP_ID	43228
#define	BCM43226_CHIP_ID	43226
#define	BCM43231_CHIP_ID	43231
#define	BCM43234_CHIP_ID	43234
#define	BCM43235_CHIP_ID	43235
#define	BCM43236_CHIP_ID	43236
#define	BCM43237_CHIP_ID	43237
#define	BCM43238_CHIP_ID	43238
#define	BCM43239_CHIP_ID	43239
#define	BCM43420_CHIP_ID	43420
#define	BCM43421_CHIP_ID	43421
#define	BCM43428_CHIP_ID	43428
#define	BCM43431_CHIP_ID	43431
#define	BCM4325_CHIP_ID		0x4325
#define	BCM4328_CHIP_ID		0x4328
#define	BCM4329_CHIP_ID		0x4329
#define	BCM4331_CHIP_ID		0x4331
#define BCM4336_CHIP_ID		0x4336
#define BCM43362_CHIP_ID	43362
#define BCM4330_CHIP_ID		0x4330
#define BCM6362_CHIP_ID		0x6362
#define BCM43142_CHIP_ID	43142
#define BCM4314_CHIP_ID		0x4314

#define	BCM4342_CHIP_ID		4342
#define	BCM4402_CHIP_ID		0x4402
#define	BCM4704_CHIP_ID		0x4704
#define	BCM4710_CHIP_ID		0x4710
#define	BCM4712_CHIP_ID		0x4712
#define	BCM4716_CHIP_ID		0x4716
#define	BCM47162_CHIP_ID	47162
#define	BCM4748_CHIP_ID		0x4748
#define	BCM4749_CHIP_ID		0x4749
#define BCM4785_CHIP_ID		0x4785
#define	BCM5350_CHIP_ID		0x5350
#define	BCM5352_CHIP_ID		0x5352
#define	BCM5354_CHIP_ID		0x5354
#define BCM5365_CHIP_ID		0x5365
#define	BCM5356_CHIP_ID		0x5356
#define	BCM5357_CHIP_ID		0x5357
#define	BCM53572_CHIP_ID	53572


#define	BCM4303_PKG_ID		2
#define	BCM4309_PKG_ID		1
#define	BCM4712LARGE_PKG_ID	0
#define	BCM4712SMALL_PKG_ID	1
#define	BCM4712MID_PKG_ID	2
#define BCM4328USBD11G_PKG_ID	2
#define BCM4328USBDUAL_PKG_ID	3
#define BCM4328SDIOD11G_PKG_ID	4
#define BCM4328SDIODUAL_PKG_ID	5
#define BCM4329_289PIN_PKG_ID	0
#define BCM4329_182PIN_PKG_ID	1
#define BCM5354E_PKG_ID		1
#define	BCM4716_PKG_ID		8
#define	BCM4717_PKG_ID		9
#define	BCM4718_PKG_ID		10
#define BCM5356_PKG_NONMODE	1
#define BCM5358U_PKG_ID		8
#define BCM5358_PKG_ID		9
#define BCM47186_PKG_ID		10
#define BCM5357_PKG_ID		11
#define BCM5356U_PKG_ID		12
#define BCM53572_PKG_ID		8
#define BCM47188_PKG_ID		9
#define BCM4331TT_PKG_ID        8
#define BCM4331TN_PKG_ID        9
#define BCM4331TNA0_PKG_ID     0xb


#define HDLSIM5350_PKG_ID	1
#define HDLSIM_PKG_ID		14
#define HWSIM_PKG_ID		15
#define BCM43224_FAB_CSM	0x8
#define BCM43224_FAB_SMIC	0xa
#define BCM4336_WLBGA_PKG_ID	0x8
#define BCM4330_WLBGA_PKG_ID	0x0

#define PCIXX21_FLASHMEDIA0_ID	0x8033
#define PCIXX21_SDIOH0_ID	0x8034


#define	BFL_BTC2WIRE		0x00000001
#define BFL_BTCOEX      0x00000001
#define	BFL_PACTRL		0x00000002
#define BFL_AIRLINEMODE	0x00000004
#define	BFL_ADCDIV		0x00000008
#define	BFL_ENETROBO		0x00000010
#define	BFL_NOPLLDOWN		0x00000020
#define	BFL_CCKHIPWR		0x00000040
#define	BFL_ENETADM		0x00000080
#define	BFL_ENETVLAN		0x00000100
#ifdef WLAFTERBURNER
#define	BFL_AFTERBURNER		0x00000200
#endif
#define BFL_NOPCI		0x00000400
#define BFL_FEM			0x00000800
#define BFL_EXTLNA		0x00001000
#define BFL_HGPA		0x00002000
#define	BFL_BTC2WIRE_ALTGPIO	0x00004000
#define	BFL_ALTIQ		0x00008000
#define BFL_NOPA		0x00010000
#define BFL_RSSIINV		0x00020000
#define BFL_PAREF		0x00040000
#define BFL_3TSWITCH		0x00080000
#define BFL_PHASESHIFT		0x00100000
#define BFL_BUCKBOOST		0x00200000
#define BFL_FEM_BT		0x00400000
#define BFL_NOCBUCK		0x00800000
#define BFL_CCKFAVOREVM		0x01000000
#define BFL_PALDO		0x02000000
#define BFL_LNLDO2_2P5		0x04000000
#define BFL_FASTPWR		0x08000000
#define BFL_UCPWRCTL_MININDX	0x08000000
#define BFL_EXTLNA_5GHz		0x10000000
#define BFL_TRSW_1by2		0x20000000
#define BFL_LO_TRSW_R_5GHz	0x40000000
#define BFL_ELNA_GAINDEF	0x80000000
#define BFL_EXTLNA_TX	0x20000000


#define BFL2_RXBB_INT_REG_DIS	0x00000001
#define BFL2_APLL_WAR		0x00000002
#define BFL2_TXPWRCTRL_EN	0x00000004
#define BFL2_2X4_DIV		0x00000008
#define BFL2_5G_PWRGAIN		0x00000010
#define BFL2_PCIEWAR_OVR	0x00000020
#define BFL2_CAESERS_BRD	0x00000040
#define BFL2_BTC3WIRE		0x00000080
#define BFL2_BTCLEGACY          0x00000080
#define BFL2_SKWRKFEM_BRD	0x00000100
#define BFL2_SPUR_WAR		0x00000200
#define BFL2_GPLL_WAR		0x00000400
#define BFL2_TRISTATE_LED	0x00000800
#define BFL2_SINGLEANT_CCK	0x00001000
#define BFL2_2G_SPUR_WAR	0x00002000
#define BFL2_BPHY_ALL_TXCORES	0x00004000
#define BFL2_FCC_BANDEDGE_WAR	0x00008000
#define BFL2_GPLL_WAR2	        0x00010000
#define BFL2_IPALVLSHIFT_3P3    0x00020000
#define BFL2_INTERNDET_TXIQCAL  0x00040000
#define BFL2_XTALBUFOUTEN       0x00080000
#define BFL2_ANAPACTRL_2G	0x00100000
#define BFL2_ANAPACTRL_5G	0x00200000
#define BFL2_ELNACTRL_TRSW_2G	0x00400000
#define BFL2_BT_SHARE_ANT0	0x00800000
#define BFL2_TEMPSENSE_HIGHER	0x01000000
#define BFL2_BTC3WIREONLY       0x02000000
#define BFL2_PWR_NOMINAL	0x04000000
#define BFL2_EXTLNA_TX		0x08000000

#define BFL2_4313_RADIOREG	0x10000000




#define	BOARD_GPIO_BTC3W_IN	0x850
#define	BOARD_GPIO_BTC3W_OUT	0x020
#define	BOARD_GPIO_BTCMOD_IN	0x010
#define	BOARD_GPIO_BTCMOD_OUT	0x020
#define	BOARD_GPIO_BTC_IN	0x080
#define	BOARD_GPIO_BTC_OUT	0x100
#define	BOARD_GPIO_PACTRL	0x200
#define BOARD_GPIO_12		0x1000
#define BOARD_GPIO_13		0x2000
#define BOARD_GPIO_BTC4_IN	0x0800
#define BOARD_GPIO_BTC4_BT	0x2000
#define BOARD_GPIO_BTC4_STAT	0x4000
#define BOARD_GPIO_BTC4_WLAN	0x8000
#define	BOARD_GPIO_1_WLAN_PWR	0x2
#define	BOARD_GPIO_4_WLAN_PWR	0x10

#define GPIO_BTC4W_OUT_4312  0x010
#define GPIO_BTC4W_OUT_43224  0x020
#define GPIO_BTC4W_OUT_43224_SHARED  0x0e0
#define GPIO_BTC4W_OUT_43225  0x0e0
#define GPIO_BTC4W_OUT_43421  0x020
#define GPIO_BTC4W_OUT_4313  0x060

#define	PCI_CFG_GPIO_SCS	0x10
#define PCI_CFG_GPIO_HWRAD	0x20
#define PCI_CFG_GPIO_XTAL	0x40
#define PCI_CFG_GPIO_PLL	0x80


#define PLL_DELAY		150
#define FREF_DELAY		200
#define MIN_SLOW_CLK		32
#define	XTAL_ON_DELAY		1000


#define	BU4710_BOARD		0x0400
#define	VSIM4710_BOARD		0x0401
#define	QT4710_BOARD		0x0402

#define	BU4309_BOARD		0x040a
#define	BCM94309CB_BOARD	0x040b
#define	BCM94309MP_BOARD	0x040c
#define	BCM4309AP_BOARD		0x040d

#define	BCM94302MP_BOARD	0x040e

#define	BU4306_BOARD		0x0416
#define	BCM94306CB_BOARD	0x0417
#define	BCM94306MP_BOARD	0x0418

#define	BCM94710D_BOARD		0x041a
#define	BCM94710R1_BOARD	0x041b
#define	BCM94710R4_BOARD	0x041c
#define	BCM94710AP_BOARD	0x041d

#define	BU2050_BOARD		0x041f

#define	BCM94306P50_BOARD	0x0420

#define	BCM94309G_BOARD		0x0421

#define	BU4704_BOARD		0x0423
#define	BU4702_BOARD		0x0424

#define	BCM94306PC_BOARD	0x0425

#define	MPSG4306_BOARD		0x0427

#define	BCM94702MN_BOARD	0x0428


#define	BCM94702CPCI_BOARD	0x0429


#define	BCM95380RR_BOARD	0x042a


#define	BCM94306CBSG_BOARD	0x042b


#define	PCSG94306_BOARD		0x042d


#define	BU4704SD_BOARD		0x042e


#define	BCM94704AGR_BOARD	0x042f


#define	BCM94308MP_BOARD	0x0430


#define	BCM94306GPRS_BOARD	0x0432


#define BU5365_FPGA_BOARD	0x0433

#define BU4712_BOARD		0x0444
#define	BU4712SD_BOARD		0x045d
#define	BU4712L_BOARD		0x045f


#define BCM94712AP_BOARD	0x0445
#define BCM94712P_BOARD		0x0446


#define BU4318_BOARD		0x0447
#define CB4318_BOARD		0x0448
#define MPG4318_BOARD		0x0449
#define MP4318_BOARD		0x044a
#define SD4318_BOARD		0x044b


#define BCM94313BU_BOARD	0x050f
#define BCM94313HM_BOARD	0x0510
#define BCM94313EPA_BOARD	0x0511
#define BCM94313HMG_BOARD       0x051C


#define BCM96338_BOARD		0x6338
#define BCM96348_BOARD		0x6348
#define BCM96358_BOARD		0x6358
#define BCM96368_BOARD		0x6368


#define	BCM94306P_BOARD		0x044c


#define	BCM94303MP_BOARD	0x044e


#define	BCM94306MPSGH_BOARD	0x044f


#define BCM94306MPM		0x0450
#define BCM94306MPL		0x0453


#define	BCM94712AGR_BOARD	0x0451


#define	PC4303_BOARD		0x0454


#define	BCM95350K_BOARD		0x0455


#define	BCM95350R_BOARD		0x0456


#define	BCM94306MPLNA_BOARD	0x0457


#define	BU4320_BOARD		0x0458
#define	BU4320S_BOARD		0x0459
#define	BCM94320PH_BOARD	0x045a


#define	BCM94306MPH_BOARD	0x045b


#define	BCM94306PCIV_BOARD	0x045c

#define	BU4712SD_BOARD		0x045d

#define	BCM94320PFLSH_BOARD	0x045e

#define	BU4712L_BOARD		0x045f
#define	BCM94712LGR_BOARD	0x0460
#define	BCM94320R_BOARD		0x0461

#define	BU5352_BOARD		0x0462

#define	BCM94318MPGH_BOARD	0x0463

#define	BU4311_BOARD		0x0464
#define	BCM94311MC_BOARD	0x0465
#define	BCM94311MCAG_BOARD	0x0466

#define	BCM95352GR_BOARD	0x0467


#define	BCM95351AGR_BOARD	0x0470


#define	BCM94704MPCB_BOARD	0x0472


#define BU4785_BOARD		0x0478


#define BU4321_BOARD		0x046b
#define BU4321E_BOARD		0x047c
#define MP4321_BOARD		0x046c
#define CB2_4321_BOARD		0x046d
#define CB2_4321_AG_BOARD	0x0066
#define MC4321_BOARD		0x046e


#define BU4328_BOARD		0x0481
#define BCM4328SDG_BOARD	0x0482
#define BCM4328SDAG_BOARD	0x0483
#define BCM4328UG_BOARD		0x0484
#define BCM4328UAG_BOARD	0x0485
#define BCM4328PC_BOARD		0x0486
#define BCM4328CF_BOARD		0x0487


#define BCM94325DEVBU_BOARD	0x0490
#define BCM94325BGABU_BOARD	0x0491

#define BCM94325SDGWB_BOARD	0x0492

#define BCM94325SDGMDL_BOARD	0x04aa
#define BCM94325SDGMDL2_BOARD	0x04c6
#define BCM94325SDGMDL3_BOARD	0x04c9

#define BCM94325SDABGWBA_BOARD	0x04e1


#define BCM94322MC_SSID		0x04a4
#define BCM94322USB_SSID	0x04a8
#define BCM94322HM_SSID		0x04b0
#define BCM94322USB2D_SSID	0x04bf


#define	BCM4312MCGSG_BOARD	0x04b5


#define BCM94315DEVBU_SSID	0x04c2
#define BCM94315USBGP_SSID	0x04c7
#define BCM94315BGABU_SSID	0x04ca
#define BCM94315USBGP41_SSID	0x04cb


#define BCM94319DEVBU_SSID	0X04e5
#define BCM94319USB_SSID	0X04e6
#define BCM94319SD_SSID		0X04e7


#define BCM94716NR2_SSID	0x04cd


#define BCM94319DEVBU_SSID	0X04e5
#define BCM94319USBNP4L_SSID	0X04e6
#define BCM94319WLUSBN4L_SSID	0X04e7
#define BCM94319SDG_SSID	0X04ea
#define BCM94319LCUSBSDN4L_SSID	0X04eb
#define BCM94319USBB_SSID       0x04ee
#define BCM94319LCSDN4L_SSID	0X0507
#define BCM94319LSUSBN4L_SSID	0X0508
#define BCM94319SDNA4L_SSID	0X0517
#define BCM94319SDELNA4L_SSID	0X0518
#define BCM94319SDELNA6L_SSID	0X0539
#define BCM94319ARCADYAN_SSID	0X0546
#define BCM94319WINDSOR_SSID    0x0561
#define BCM94319MLAP_SSID       0x0562
#define BCM94319SDNA_SSID       0x058b
#define BCM94319BHEMU3_SSID     0x0563
#define BCM94319SDHMB_SSID     0x058c
#define BCM94319SDBREF_SSID     0x05a1
#define BCM94319USBSDB_SSID     0x05a2


#define BCM94329AGB_SSID	0X04b9
#define BCM94329TDKMDL1_SSID	0X04ba
#define BCM94329TDKMDL11_SSID	0X04fc
#define BCM94329OLYMPICN18_SSID	0X04fd
#define BCM94329OLYMPICN90_SSID	0X04fe
#define BCM94329OLYMPICN90U_SSID 0X050c
#define BCM94329OLYMPICN90M_SSID 0X050b
#define BCM94329AGBF_SSID	0X04ff
#define BCM94329OLYMPICX17_SSID	0X0504
#define BCM94329OLYMPICX17M_SSID	0X050a
#define BCM94329OLYMPICX17U_SSID	0X0509
#define BCM94329OLYMPICUNO_SSID	0X0564
#define BCM94329MOTOROLA_SSID   0X0565
#define BCM94329OLYMPICLOCO_SSID	0X0568

#define BCM94336SD_WLBGABU_SSID		0x0511
#define BCM94336SD_WLBGAREF_SSID	0x0519
#define BCM94336SDGP_SSID	0x0538
#define BCM94336SDG_SSID	0x0519
#define BCM94336SDGN_SSID	0x0538
#define BCM94336SDGFC_SSID	0x056B


#define BCM94330SDG_SSID	0x0528
#define BCM94330SD_FCBGABU_SSID	0x052e
#define BCM94330SD_WLBGABU_SSID	0x052f
#define BCM94330SD_FCBGA_SSID	0x0530
#define BCM94330FCSDAGB_SSID		0x0532
#define BCM94330OLYMPICAMG_SSID		0x0549
#define BCM94330OLYMPICAMGEPA_SSID		0x054F
#define BCM94330OLYMPICUNO3_SSID	0x0551
#define BCM94330WLSDAGB_SSID	0x0547
#define BCM94330CSPSDAGBB_SSID	0x054A


#define BCM943224X21        0x056e
#define BCM943224X21_FCC    0x00d1


#define BCM943228BU8_SSID	0x0540
#define BCM943228BU9_SSID	0x0541
#define BCM943228BU_SSID	0x0542
#define BCM943227HM4L_SSID	0x0543
#define BCM943227HMB_SSID	0x0544
#define BCM943228HM4L_SSID	0x0545
#define BCM943228SD_SSID	0x0573


#define BCM943239MOD_SSID	0x05ac


#define BCM94331X19               0x00D6
#define BCM94331PCIEBT3Ax_SSID    0x00E4
#define BCM94331X12_2G_SSID       0x00EC
#define BCM94331X12_5G_SSID       0x00ED
#define BCM94331X29B              0x00EF
#define BCM94331BU_SSID           0x0523
#define BCM94331S9BU_SSID         0x0524
#define BCM94331MC_SSID           0x0525
#define BCM94331MCI_SSID          0x0526
#define BCM94331PCIEBT4_SSID      0x0527
#define BCM94331HM_SSID           0x0574
#define BCM94331PCIEDUAL_SSID     0x059B
#define BCM94331MCH5_SSID         0x05A9
#define BCM94331PCIEDUALV2_SSID   0x05B7
#define BCM94331CS_SSID           0x05C6
#define BCM94331CSAX_SSID         0x00EF



#define BCM953572BU_SSID       0x058D
#define BCM953572NR2_SSID      0x058E
#define BCM947188NR2_SSID      0x058F
#define BCM953572SDRNR2_SSID   0x0590


#define BCM943236OLYMPICSULLEY_SSID 0x594
#define BCM943236PREPROTOBLU2O3_SSID 0x5b9
#define BCM943236USBELNA_SSID 0x5f8


#define GPIO_NUMPINS		32


#define RDL_RAM_BASE_4319 0x60000000
#define RDL_RAM_BASE_4329 0x60000000
#define RDL_RAM_SIZE_4319 0x48000
#define RDL_RAM_SIZE_4329  0x48000
#define RDL_RAM_SIZE_43236 0x70000
#define RDL_RAM_BASE_43236 0x60000000
#define RDL_RAM_SIZE_4328 0x60000
#define RDL_RAM_BASE_4328 0x80000000
#define RDL_RAM_SIZE_4322 0x60000
#define RDL_RAM_BASE_4322 0x60000000


#define MUXENAB_UART		0x00000001
#define MUXENAB_GPIO		0x00000002
#define MUXENAB_ERCX		0x00000004
#define MUXENAB_JTAG		0x00000008
#define MUXENAB_HOST_WAKE	0x00000010

#endif
