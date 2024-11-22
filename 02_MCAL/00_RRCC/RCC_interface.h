/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    RCC_interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *  ANC     : RCC: Reset and Clock Control
 *  Author  : MOSTAFA G.B GADELMOLY
 *  Date    : 21 11 2024
 *  Vertion : V01
 *  Layer   : BIN/Services/MCAL/RCC
 *  Usagre  : Managing system and peripheral clocks as well as controlling reset operations.
 *
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_
//==============================================================================================================
                                                /* Functions declarations*/

void RCC_voidInitSysClock( void );
void RCC_voidEnablePeripheralClock  ( u8 Copy_u8BusId  , u8 Copy_u8PeripheralId );
void RCC_voidDisablePeripheralClock ( u8 Copy_u8BusId  , u8 Copy_u8PeripheralId );

//==============================================================================================================
#define ENABLE_PERIPHERAL     1
#define DISABLE_PERIPHERAL    0
#define RESET_PERIPHERAL      2
//==============================================================================================================
                                                /* ClockType*/
#define HSI                         1
#define HSE                         2
#define PLL                         3
#define PLL_HSI_DIVIDED_BY_2        4
#define PLL_HSE                     5
#define PLL_HSE_DIVIDED_BY_2        6
#define HSE_BYPASS                  7
//==============================================================================================================
                                            /* ClockFactor For PLL*/

#define NO_CLOCK_FACTOR                                0b0000
#define PLL_CLOCK_MULTIPLE_BY_2                        0b0000
#define PLL_CLOCK_MULTIPLE_BY_3					       0b0001
#define PLL_CLOCK_MULTIPLE_BY_4                        0b0010
#define PLL_CLOCK_MULTIPLE_BY_5                        0b0011
#define PLL_CLOCK_MULTIPLE_BY_6                        0b0100
#define PLL_CLOCK_MULTIPLE_BY_7                        0b0101
#define PLL_CLOCK_MULTIPLE_BY_8                        0b0110
#define PLL_CLOCK_MULTIPLE_BY_9                        0b0111
#define PLL_CLOCK_MULTIPLE_BY_10                       0b1000
#define PLL_CLOCK_MULTIPLE_BY_11                       0b1001
#define PLL_CLOCK_MULTIPLE_BY_12                       0b1010
#define PLL_CLOCK_MULTIPLE_BY_13                       0b1011
#define PLL_CLOCK_MULTIPLE_BY_14                       0b1100
#define PLL_CLOCK_MULTIPLE_BY_15                       0b1101
#define PLL_CLOCK_MULTIPLE_BY_16                       0b1110

//==============================================================================================================
                                    /*  Clock Security System May be*/

#define DISABLE_CLOCK_SECURITY_SYSTEM              0
#define ENABLE_CLOCK_SECURITY_SYSTEM               1
//==============================================================================================================
                                    /*    Peripheral Clock Enable For AHB Bus */

#define    DMA1_RCC         0
#define    DMA2_RCC         1
#define    SRAM_RCC         2
#define    FLITF_RCC        4
#define    CRC_RCC          6
#define    FSMC_RCC         8
#define    SDIO_RCC         10
//==============================================================================================================
                                    /*    Peripheral Clock BUS */
#define AHB2_BUS            0       //HAS THE GPIO
#define AHB1_BUS            1
#define APB2_BUS            2 
//==============================================================================================================
                                    /*    Peripheral Clock Enable For APB2 Bus RCC_AHB2ENR */

#define     GPIOA_EN        0
#define     GPIOB_EN        1
#define     GPIOC_EN        2
#define     GPIOH_EN        7



#endif