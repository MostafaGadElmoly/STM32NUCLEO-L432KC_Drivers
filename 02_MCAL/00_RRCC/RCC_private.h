/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    RCC_private.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *  ANC     : RCC: Reset and Clock Control
 *  Author  : MOSTAFA G.B GADELMOLY
 *  Date    : 21 11 2024
 *  Vertion : V01
 *  Layer   : BIN/Services/MCAL/RCC
 *  Usagre  : managing system and peripheral clocks as well as controlling reset operations.
 *
 */

#ifndef RCC_PRIVTE_H_
#define RCC_PRIVTE_H_

// GPIO A/B/C/D/H are on AHB2

#define RCC_B               0x40021000                          // RCC BASE address
#define RCC_CR              (*((volatile u32 *)(RCC_B + 0x00))) // Clock control register
#define RCC_ICSCR           (*((volatile u32 *)(RCC_B + 0x04))) // Internal clock sources calibration register
#define RCC_CFGR            (*((volatile u32 *)(RCC_B + 0x08))) // Clock configuration register
#define RCC_PLLCFRGR        (*((volatile u32 *)(RCC_B + 0x0c))) // PLL configuration register
#define RCC_AHB2RSTR        (*((volatile u32 *)(RCC_B + 0x2c))) // AHB2 peripheral reset register
#define RCC_AHB2ENR         (*((volatile u32 *)(RCC_B + 0x4c))) // AHB2 peripheral clock enable register




#endif