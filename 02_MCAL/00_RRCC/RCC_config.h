/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    RCC_config.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *  ANC     : RCC: Reset and Clock Control
 *  Author  : MOSTAFA G.B GADELMOLY
 *  Date    : 21 11 2024
 *  Vertion : V01
 *  Layer   : BIN/Services/MCAL/RCC
 *  Usagre  : managing system and peripheral clocks as well as controlling reset operations.
 *
 */
#ifndef RCC_CONFG_H_
#define RCC_CONFG_H_



#define CLOCK_TYPE       HSE
#define PLL_SOURCE       PLL_HSE_DIVIDED_BY_2
#define CLOCK_FACTOR     PLL_CLOCK_MULTIPLE_BY_16

#define CLOCK_SECURITY_SYSTEM     DISABLE_CLOCK_SECURITY_SYSTEM




#endif