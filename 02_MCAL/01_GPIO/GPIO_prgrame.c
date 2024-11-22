#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void GPIO_voidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Mode) {
    volatile u32 *MODER;
    // Determine the MODER register based on the port
    if (Copy_u8Port == GPIOA) {
        MODER = &GPIOA_MODER;
    } else if (Copy_u8Port == GPIOB) {
        MODER = &GPIOB_MODER;
    } else {
        // Invalid port, return or handle error
        return;
    }
    // Clear the two bits corresponding to the pin
    *MODER &= ~(0b11 << (2 * Copy_u8Pin));
    // Set the mode
    *MODER |= (u8Copy_u8Mode << (2 * Copy_u8Pin));
}




void GPIO_voidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Value) {
    volatile u32 *BSRR;

    // Select the correct BSRR register for the port
    if (Copy_u8Port == GPIOA) {
        BSRR = &GPIOA_BSRR;
    } else if (Copy_u8Port == GPIOB) {
        BSRR = &GPIOB_BSRR;
    } else {
        // Invalid port, return or handle error
        return;
    }

    // Set or Reset the pin using the BSRR register
    if (u8Copy_u8Value == HIGH) {
        SET_BIT(*BSRR,Copy_u8Pin);
    } else if (u8Copy_u8Value == LOW) {
        SET_BIT(*BSRR,Copy_u8Pin+16);
    }
}

u8   GPIO_u8GetPinValue( u8 Copy_u8Port , u8 Copy_u8Pin ){
    volatile u32 *IDR;
    volatile u8 LOC_u8Result = 0 ;
    volatile u8 S_IDR = 0 ;
    // Select the correct IDR register for the port
    if (Copy_u8Port == GPIOA) {
        IDR = &GPIOA_IDR;
    } else if (Copy_u8Port == GPIOB) {
        IDR = &GPIOB_IDR;
    } else {
        // Invalid port, return or handle error
        return;
    }

    // get the pin using the IDR register
    S_IDR =GET_BIT(*IDR,Copy_u8Pin);
    if (S_IDR == 1)
    {
        LOC_u8Result = 1;
    }
    else{
        LOC_u8Result = 0;
    }
}
void GPIO_voidSetPortDirection( u8 Copy_u8Port , u8 Copy_u8Position , u8 Copy_u8Mode );
void GPIO_voidSetPortValue( u8 Copy_u8Port , u8 Copy_u8Position , u16 Copy_u8Value );
u16 GPIO_u16GetPortValue( u8 Copy_u8Port , u8 Copy_u8Position );


