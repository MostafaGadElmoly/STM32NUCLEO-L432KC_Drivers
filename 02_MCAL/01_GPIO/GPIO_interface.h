#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_


void GPIO_voidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u8 u8Copy_u8Mode );
void GPIO_voidSetPinValue( u8 Copy_u8Port , u8 Copy_u8Pin , u8 u8Copy_u8Value );
u8   GPIO_u8GetPinValue( u8 Copy_u8Port , u8 Copy_u8Pin );
void GPIO_voidSetPortDirection( u8 Copy_u8Port , u8 Copy_u8Position , u8 Copy_u8Mode );
void GPIO_voidSetPortValue( u8 Copy_u8Port , u8 Copy_u8Position , u16 Copy_u8Value );
u16 GPIO_u16GetPortValue( u8 Copy_u8Port , u8 Copy_u8Position );


 /*       PORTS        */
#define GPIOA   0
#define GPIOB   1

 /*       PINS        */
#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10    10
#define PIN11    11
#define PIN12    12
#define PIN13    13
#define PIN14    14
#define PIN15    15


 /*       MODE        */

#define INPUT     0
#define OUTPUT    1
#define ALTFUN    2
#define ANALOGM   3

 /*       MODE        */
 #define HIGH      1
 #define LOW       0



#endif
