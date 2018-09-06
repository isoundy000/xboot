#ifndef __RK3399_IRQ_H__
#define __RK3399_IRQ_H__

#ifdef __cplusplus
extern "C" {
#endif

#define RK3399_IRQ_HYPERVISOR_TIMER			(26)
#define RK3399_IRQ_VIRTUAL_TIMER			(27)
#define RK3399_IRQ_SECURE_PHYSICAL_TIMER	(29)
#define RK3399_IRQ_NONSECURE_PHYSICAL_TIMER	(30)

#define RK3399_IRQ_CRYPTO0					(32)
#define RK3399_IRQ_DCF_DONE					(33)
#define RK3399_IRQ_DCF_ERROR				(34)
#define RK3399_IRQ_DDRC0					(35)
#define RK3399_IRQ_DDRC1					(36)
#define RK3399_IRQ_DMAC0_ABORT				(37)
#define RK3399_IRQ_DMAC0					(38)
#define RK3399_IRQ_DMAC1_ABORT				(39)
#define RK3399_IRQ_DMAC1					(40)
#define RK3399_IRQ_DP						(41)
#define RK3399_IRQ_EDP						(42)
#define RK3399_IRQ_EMMCCORE					(43)
#define RK3399_IRQ_GMAC						(44)
#define RK3399_IRQ_GMAC_PMT					(45)
#define RK3399_IRQ_GPIO0					(46)
#define RK3399_IRQ_GPIO1					(47)
#define RK3399_IRQ_GPIO2					(48)
#define RK3399_IRQ_GPIO3					(49)
#define RK3399_IRQ_GPIO4					(50)
#define RK3399_IRQ_GPU						(51)
#define RK3399_IRQ_GPUJOB					(52)
#define RK3399_IRQ_GPUMMU					(53)
#define RK3399_IRQ_HDCP22					(54)
#define RK3399_IRQ_HDMI						(55)
#define RK3399_IRQ_HDMI_WAKEUP				(56)
#define RK3399_IRQ_HOST0_ARB				(57)
#define RK3399_IRQ_HOST0_EHCI				(58)
#define RK3399_IRQ_HOST0_LINESTATE			(59)
#define RK3399_IRQ_HOST0_OHCI				(60)
#define RK3399_IRQ_HOST1_ARB				(61)
#define RK3399_IRQ_HOST1_EHCI				(62)
#define RK3399_IRQ_HOST1_LINESTATE			(63)
#define RK3399_IRQ_HOST1_OHCI				(64)
#define RK3399_IRQ_HSIC						(65)
#define RK3399_IRQ_I2C3						(66)
#define RK3399_IRQ_I2C2						(67)
#define RK3399_IRQ_I2C7						(68)
#define RK3399_IRQ_I2C6						(69)
#define RK3399_IRQ_I2C5						(70)
#define RK3399_IRQ_I2S0						(71)
#define RK3399_IRQ_I2S1						(72)
#define RK3399_IRQ_I2S2						(73)
#define RK3399_IRQ_IEP						(74)
#define RK3399_IRQ_ISP0						(75)
#define RK3399_IRQ_ISP1						(76)
#define RK3399_IRQ_MIPI_DSI_HOST0			(77)
#define RK3399_IRQ_MIPI_DSI_HOST1			(78)
#define RK3399_IRQ_CCI						(79)
#define RK3399_IRQ_NOC						(80)
#define RK3399_IRQ_PCIE_SYS					(81)
#define RK3399_IRQ_PCIE_LEGACY				(82)
#define RK3399_IRQ_PCIE_CLIENT				(83)
#define RK3399_IRQ_SPI2						(84)
#define RK3399_IRQ_SPI1						(85)
#define RK3399_IRQ_PMU						(86)
#define RK3399_IRQ_RGA						(87)
#define RK3399_IRQ_I2C4						(88)
#define RK3399_IRQ_I2C0						(89)
#define RK3399_IRQ_I2C8						(90)
#define RK3399_IRQ_I2C1						(91)
#define RK3399_IRQ_SPI3						(92)
#define RK3399_IRQ_PWM						(93)
#define RK3399_IRQ_SARADC					(94)
#define RK3399_IRQ_SD_DETECT				(95)
#define RK3399_IRQ_SDIO						(96)
#define RK3399_IRQ_SDMMC					(97)
#define RK3399_IRQ_SPDIF					(98)
#define RK3399_IRQ_SPI4						(99)
#define RK3399_IRQ_SPI0						(100)
#define RK3399_IRQ_STIMER0					(101)
#define RK3399_IRQ_STIMER1					(102)
#define RK3399_IRQ_STIMER2					(103)
#define RK3399_IRQ_STIMER3					(104)
#define RK3399_IRQ_STIMER4					(105)
#define RK3399_IRQ_STIMER5					(106)
#define RK3399_IRQ_STIMER6					(107)
#define RK3399_IRQ_STIMER7					(108)
#define RK3399_IRQ_STIMER8					(109)
#define RK3399_IRQ_STIMER9					(110)
#define RK3399_IRQ_STIMER10					(111)
#define RK3399_IRQ_STIMER11					(112)
#define RK3399_IRQ_TIMER0					(113)
#define RK3399_IRQ_TIMER1					(114)
#define RK3399_IRQ_TIMER2					(115)
#define RK3399_IRQ_TIMER3					(116)
#define RK3399_IRQ_TIMER4					(117)
#define RK3399_IRQ_TIMER5					(118)
#define RK3399_IRQ_TIMER6					(119)
#define RK3399_IRQ_TIMER7					(120)
#define RK3399_IRQ_TIMER8					(121)
#define RK3399_IRQ_TIMER9					(122)
#define RK3399_IRQ_TIMER10					(123)
#define RK3399_IRQ_TIMER11					(124)
#define RK3399_IRQ_PERF_A53					(125)
#define RK3399_IRQ_PERF_A72					(126)
#define RK3399_IRQ_PMUTIMER0				(127)
#define RK3399_IRQ_PMUTIMER1				(128)
#define RK3399_IRQ_TSADC					(129)
#define RK3399_IRQ_UART1					(130)
#define RK3399_IRQ_UART0					(131)
#define RK3399_IRQ_UART2					(132)
#define RK3399_IRQ_UART3					(133)
#define RK3399_IRQ_UART4					(134)
#define RK3399_IRQ_USB3OTG0_BVALID			(135)
#define RK3399_IRQ_USB3OTG0_ID				(136)
#define RK3399_IRQ_USB3OTG0					(137)
#define RK3399_IRQ_USB3OTG0_LINESTATE		(138)
#define RK3399_IRQ_USB3OTG0_RXDET			(139)
#define RK3399_IRQ_USB3OTG1_BVALID			(140)
#define RK3399_IRQ_USB3OTG1_ID				(141)
#define RK3399_IRQ_USB3OTG1					(142)
#define RK3399_IRQ_USB3OTG1_LINESTATE		(143)
#define RK3399_IRQ_USB3OTG1_RXDET			(144)
#define RK3399_IRQ_VCODEC_DEC				(145)
#define RK3399_IRQ_VCODEC_ENC				(146)
#define RK3399_IRQ_VCODEC_MMU				(147)
#define RK3399_IRQ_VDU_DEC					(148)
#define RK3399_IRQ_VDU_MMU					(149)
#define RK3399_IRQ_VOPB						(150)
#define RK3399_IRQ_VOPL						(151)
#define RK3399_IRQ_WDT0						(152)
#define RK3399_IRQ_WDT1						(153)
#define RK3399_IRQ_WDT2						(154)
#define RK3399_IRQ_USB3OTG0_PME				(155)
#define RK3399_IRQ_USB3OTG0_HOST_SMI		(156)
#define RK3399_IRQ_USB3OTG0_HOST_ERR		(157)
#define RK3399_IRQ_USB3OTG1_PME				(158)
#define RK3399_IRQ_USB3OTG1_HOST_SMI		(159)
#define RK3399_IRQ_USB3OTG1_HOST_ERR		(160)
#define RK3399_IRQ_VOPB_DDR					(161)
#define RK3399_IRQ_VOPL_DDR					(162)
#define RK3399_IRQ_DDR_MON					(163)
#define RK3399_IRQ_SPI5						(164)
#define RK3399_IRQ_TCPD_INT0				(165)
#define RK3399_IRQ_TCPD_INT1				(166)
#define RK3399_IRQ_CRYPTO1					(167)
#define RK3399_IRQ_GASKET					(168)
#define RK3399_IRQ_PCIE_RC_MODE_IDLE		(169)
#define RK3399_IRQ_MAILBOX1_INT0			(172)
#define RK3399_IRQ_MAILBOX1_INT1			(173)
#define RK3399_IRQ_MAILBOX1_INT2			(174)
#define RK3399_IRQ_MAILBOX1_INT3			(175)
#define RK3399_IRQ_MAILBOX0_INT0			(176)
#define RK3399_IRQ_MAILBOX0_INT1			(177)
#define RK3399_IRQ_MAILBOX0_INT2			(178)
#define RK3399_IRQ_MAILBOX0_INT3			(179)
#define RK3399_IRQ_PD_CORE_L				(180)
#define RK3399_IRQ_PD_CORE_B				(181)

#define RK3399_IRQ_GPIO0_A0					(192)
#define RK3399_IRQ_GPIO0_A1					(193)
#define RK3399_IRQ_GPIO0_A2					(194)
#define RK3399_IRQ_GPIO0_A3					(195)
#define RK3399_IRQ_GPIO0_A4					(196)
#define RK3399_IRQ_GPIO0_A5					(197)
#define RK3399_IRQ_GPIO0_A6					(198)
#define RK3399_IRQ_GPIO0_A7					(199)
#define RK3399_IRQ_GPIO0_B0					(200)
#define RK3399_IRQ_GPIO0_B1					(201)
#define RK3399_IRQ_GPIO0_B2					(202)
#define RK3399_IRQ_GPIO0_B3					(203)
#define RK3399_IRQ_GPIO0_B4					(204)
#define RK3399_IRQ_GPIO0_B5					(205)

#define RK3399_IRQ_GPIO1_A0					(224)
#define RK3399_IRQ_GPIO1_A1					(225)
#define RK3399_IRQ_GPIO1_A2					(226)
#define RK3399_IRQ_GPIO1_A3					(227)
#define RK3399_IRQ_GPIO1_A4					(228)
#define RK3399_IRQ_GPIO1_A5					(229)
#define RK3399_IRQ_GPIO1_A6					(230)
#define RK3399_IRQ_GPIO1_A7					(231)
#define RK3399_IRQ_GPIO1_B0					(232)
#define RK3399_IRQ_GPIO1_B1					(233)
#define RK3399_IRQ_GPIO1_B2					(234)
#define RK3399_IRQ_GPIO1_B3					(235)
#define RK3399_IRQ_GPIO1_B4					(236)
#define RK3399_IRQ_GPIO1_B5					(237)
#define RK3399_IRQ_GPIO1_B6					(238)
#define RK3399_IRQ_GPIO1_B7					(239)
#define RK3399_IRQ_GPIO1_C0					(240)
#define RK3399_IRQ_GPIO1_C1					(241)
#define RK3399_IRQ_GPIO1_C2					(242)
#define RK3399_IRQ_GPIO1_C3					(243)
#define RK3399_IRQ_GPIO1_C4					(244)
#define RK3399_IRQ_GPIO1_C5					(245)
#define RK3399_IRQ_GPIO1_C6					(246)
#define RK3399_IRQ_GPIO1_C7					(247)
#define RK3399_IRQ_GPIO1_D0					(248)

#define RK3399_IRQ_GPIO2_A0					(256)
#define RK3399_IRQ_GPIO2_A1					(257)
#define RK3399_IRQ_GPIO2_A2					(258)
#define RK3399_IRQ_GPIO2_A3					(259)
#define RK3399_IRQ_GPIO2_A4					(260)
#define RK3399_IRQ_GPIO2_A5					(261)
#define RK3399_IRQ_GPIO2_A6					(262)
#define RK3399_IRQ_GPIO2_A7					(263)
#define RK3399_IRQ_GPIO2_B0					(264)
#define RK3399_IRQ_GPIO2_B1					(265)
#define RK3399_IRQ_GPIO2_B2					(266)
#define RK3399_IRQ_GPIO2_B3					(267)
#define RK3399_IRQ_GPIO2_B4					(268)
#define RK3399_IRQ_GPIO2_C0					(272)
#define RK3399_IRQ_GPIO2_C1					(273)
#define RK3399_IRQ_GPIO2_C2					(274)
#define RK3399_IRQ_GPIO2_C3					(275)
#define RK3399_IRQ_GPIO2_C4					(276)
#define RK3399_IRQ_GPIO2_C5					(277)
#define RK3399_IRQ_GPIO2_C6					(278)
#define RK3399_IRQ_GPIO2_C7					(279)
#define RK3399_IRQ_GPIO2_D0					(280)
#define RK3399_IRQ_GPIO2_D1					(281)
#define RK3399_IRQ_GPIO2_D2					(282)
#define RK3399_IRQ_GPIO2_D3					(283)
#define RK3399_IRQ_GPIO2_D4					(284)

#define RK3399_IRQ_GPIO3_A0					(288)
#define RK3399_IRQ_GPIO3_A1					(289)
#define RK3399_IRQ_GPIO3_A2					(290)
#define RK3399_IRQ_GPIO3_A3					(291)
#define RK3399_IRQ_GPIO3_A4					(292)
#define RK3399_IRQ_GPIO3_A5					(293)
#define RK3399_IRQ_GPIO3_A6					(294)
#define RK3399_IRQ_GPIO3_A7					(295)
#define RK3399_IRQ_GPIO3_B0					(296)
#define RK3399_IRQ_GPIO3_B1					(297)
#define RK3399_IRQ_GPIO3_B2					(298)
#define RK3399_IRQ_GPIO3_B3					(299)
#define RK3399_IRQ_GPIO3_B4					(300)
#define RK3399_IRQ_GPIO3_B5					(301)
#define RK3399_IRQ_GPIO3_B6					(302)
#define RK3399_IRQ_GPIO3_B7					(303)
#define RK3399_IRQ_GPIO3_C0					(304)
#define RK3399_IRQ_GPIO3_C1					(305)
#define RK3399_IRQ_GPIO3_D0					(312)
#define RK3399_IRQ_GPIO3_D1					(313)
#define RK3399_IRQ_GPIO3_D2					(314)
#define RK3399_IRQ_GPIO3_D3					(315)
#define RK3399_IRQ_GPIO3_D4					(316)
#define RK3399_IRQ_GPIO3_D5					(317)
#define RK3399_IRQ_GPIO3_D6					(318)
#define RK3399_IRQ_GPIO3_D7					(319)

#define RK3399_IRQ_GPIO4_A0					(320)
#define RK3399_IRQ_GPIO4_A1					(321)
#define RK3399_IRQ_GPIO4_A2					(322)
#define RK3399_IRQ_GPIO4_A3					(323)
#define RK3399_IRQ_GPIO4_A4					(324)
#define RK3399_IRQ_GPIO4_A5					(325)
#define RK3399_IRQ_GPIO4_A6					(326)
#define RK3399_IRQ_GPIO4_A7					(327)
#define RK3399_IRQ_GPIO4_B0					(328)
#define RK3399_IRQ_GPIO4_B1					(329)
#define RK3399_IRQ_GPIO4_B2					(330)
#define RK3399_IRQ_GPIO4_B3					(331)
#define RK3399_IRQ_GPIO4_B4					(332)
#define RK3399_IRQ_GPIO4_B5					(333)
#define RK3399_IRQ_GPIO4_C0					(336)
#define RK3399_IRQ_GPIO4_C1					(337)
#define RK3399_IRQ_GPIO4_C2					(338)
#define RK3399_IRQ_GPIO4_C3					(339)
#define RK3399_IRQ_GPIO4_C4					(340)
#define RK3399_IRQ_GPIO4_C5					(341)
#define RK3399_IRQ_GPIO4_C6					(342)
#define RK3399_IRQ_GPIO4_C7					(343)
#define RK3399_IRQ_GPIO4_D0					(344)
#define RK3399_IRQ_GPIO4_D1					(345)
#define RK3399_IRQ_GPIO4_D2					(346)
#define RK3399_IRQ_GPIO4_D3					(347)
#define RK3399_IRQ_GPIO4_D4					(348)
#define RK3399_IRQ_GPIO4_D5					(349)
#define RK3399_IRQ_GPIO4_D6					(350)

#ifdef __cplusplus
}
#endif

#endif /* __RK3399_IRQ_H__ */
