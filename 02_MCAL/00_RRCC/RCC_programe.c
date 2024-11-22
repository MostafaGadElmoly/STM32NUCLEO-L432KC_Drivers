/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    RCC_programe.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *  ANC     : RCC: Reset and Clock Control
 *  Author  : MOSTAFA G.B GADELMOLY
 *  Date    : 21 11 2024
 *  Vertion : V01
 *  Layer   : BIN/Services/MCAL/RCC
 *  Usagre  : managing system and peripheral clocks as well as controlling reset operations.
 *
 */

/* include Libraries  */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* Own Driver Files */
#include "RCC_interface.h"
#include "RCC_config.h"
#include "RCC_private.h"

void RCC_voidInitSysClock(void)
{
	#if     RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		RCC_CR   = 0x00010000; /* Enable HSE with no bypass */
		RCC_CFGR = 0x00000001;

	#elif   RCC_CLOCK_TYPE == RCC_HSE_RC
		RCC_CR   = 0x00050000; /* Enable HSE with bypass */
		RCC_CFGR = 0x00000001;

	#elif   RCC_CLOCK_TYPE == RCC_HSI
		RCC_CR   = 0x00000081; /* Enable HSI + Trimming = 0 */
		RCC_CFGR = 0x00000000;

	#elif   RCC_CLOCK_TYPE == RCC_PLL
		#if   RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2

		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2

		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE

		#endif

	#else
		#error("You chosed Wrong Clock type")
	#endif
}



void RCC_voidEnablePeripheralClock  ( u8 Copy_u8BusId  , u8 Copy_u8PeripheralId ){
    if(Copy_u8BusId <= 32)
    {
            switch (Copy_u8BusId)
            {
                case AHB2_BUS   : SET_BIT (RCC_AHB2ENR,Copy_u8PeripheralId);   break; 
            }
    }
}

void RCC_voidDisablePeripheralClock ( u8 Copy_u8BusId  , u8 Copy_u8PeripheralId ){
    if(Copy_u8BusId <= 32)
    {
            switch (Copy_u8BusId)
            {
                case AHB2_BUS   : CLR_BIT (RCC_AHB2ENR,Copy_u8PeripheralId);   break; 
            }
    }
}











//==============================================================================================================
                                    /* ANCS */
/*
RCC_HSE_CRYSTAL: High-Speed External crystal oscillator.
RCC_HSE_RC: High-Speed External RC oscillator.
RCC_HSI: High-Speed Internal RC oscillator.
RCC_PLL: Phase-Locked Loop (derived from HSI or HSE).
*/