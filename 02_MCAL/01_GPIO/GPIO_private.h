#ifndef GPIO_PRIVTE_H_
#define GPIO_PRIVTE_H_



#define GPIOA_BASE         0x48000000
#define GPIOB_BASE         0x48000400 

        /*       REGISTERS ADDRESSES FOR Port A        */
#define GPIOA_MODER                 *((u32*)(GPIOA_BASE + 0x00)) //GPIO port mode register 
#define GPIOA_OTYPER                *((u32*)(GPIOA_BASE + 0x04)) //GPIO port output type register 
#define GPIOA_OSPEEDR               *((u32*)(GPIOA_BASE + 0x08)) //GPIO port output speed register
#define GPIOA_PUPDR                 *((u32*)(GPIOA_BASE + 0x0c)) //GPIO port pull-up/pull-down register 
#define GPIOA_IDR                   *((u32*)(GPIOA_BASE + 0x10)) //GPIO port input data register 
#define GPIOA_ODR                   *((u32*)(GPIOA_BASE + 0x14)) //GPIO port output data register  
#define GPIOA_BSRR                  *((u32*)(GPIOA_BASE + 0x18)) //GPIO port bit set/reset register
#define GPIOA_LCKR                  *((u32*)(GPIOA_BASE + 0x1c)) //GPIO port configuration lock register
#define GPIOA_AFRL                  *((u32*)(GPIOA_BASE + 0x20)) //GPIO alternate function low register
#define GPIOA_AFRH                  *((u32*)(GPIOA_BASE + 0x24)) //GPIO alternate function high register
#define GPIOA_BRR                   *((u32*)(GPIOA_BASE + 0x28)) //GPIO port bit reset register 



        /*       REGISTERS ADDRESSES FOR Port A        */

#define GPIOB_MODER                 *((u32*)(GPIOB_BASE + 0x00)) //GPIO port mode register 
#define GPIOB_OTYPER                *((u32*)(GPIOB_BASE + 0x04)) //GPIO port output type register 
#define GPIOB_OSPEEDR               *((u32*)(GPIOB_BASE + 0x08)) //GPIO port output speed register
#define GPIOB_PUPDR                 *((u32*)(GPIOB_BASE + 0x0c)) //GPIO port pull-up/pull-down register 
#define GPIOB_IDR                   *((u32*)(GPIOB_BASE + 0x10)) //GPIO port input data register 
#define GPIOB_ODR                   *((u32*)(GPIOB_BASE + 0x14)) //GPIO port output data register  
#define GPIOB_BSRR                  *((u32*)(GPIOB_BASE + 0x18)) //GPIO port bit set/reset register
#define GPIOB_LCKR                  *((u32*)(GPIOB_BASE + 0x1c)) //GPIO port configuration lock register
#define GPIOB_AFRL                  *((u32*)(GPIOB_BASE + 0x20)) //GPIO alternate function low register
#define GPIOB_AFRH                  *((u32*)(GPIOB_BASE + 0x24)) //GPIO alternate function high register
#define GPIOB_BRR                   *((u32*)(GPIOB_BASE + 0x28)) //GPIO port bit reset register 


#endif