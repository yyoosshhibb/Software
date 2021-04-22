/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 21/04/2021 17:46:01
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     168000000
#define MX_SYSCLKFreq_VALUE                     168000000
#define MX_HCLKFreq_Value                       168000000
#define MX_FCLKCortexFreq_Value                 168000000
#define MX_CortexFreq_Value                     168000000
#define MX_AHBFreq_Value                        168000000
#define MX_APB1Freq_Value                       42000000
#define MX_APB2Freq_Value                       84000000
#define MX_APB1TimFreq_Value                    84000000
#define MX_APB2TimFreq_Value                    168000000
#define MX_48MHZClocksFreq_Value                84000000
#define MX_EthernetFreq_Value                   168000000
#define MX_I2SClocksFreq_Value                  192000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    168000000

/*-------------------------------- ADC1       --------------------------------*/

#define MX_ADC1                                 1

/* GPIO Configuration */

/* Pin PA1 */
#define MX_ADCx_IN1_Pin                         PA1
#define MX_ADCx_IN1_GPIOx                       GPIOA
#define MX_ADCx_IN1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN1_GPIO_Pin                    GPIO_PIN_1
#define MX_ADCx_IN1_GPIO_Mode                   GPIO_MODE_ANALOG

/*-------------------------------- CAN1       --------------------------------*/

#define MX_CAN1                                 1

/* GPIO Configuration */

/* Pin PB8 */
#define MX_CAN1_RX_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN1_RX_Pin                          PB8
#define MX_CAN1_RX_GPIOx                        GPIOB
#define MX_CAN1_RX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN1_RX_GPIO_Pin                     GPIO_PIN_8
#define MX_CAN1_RX_GPIO_AF                      GPIO_AF9_CAN1
#define MX_CAN1_RX_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB9 */
#define MX_CAN1_TX_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN1_TX_Pin                          PB9
#define MX_CAN1_TX_GPIOx                        GPIOB
#define MX_CAN1_TX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN1_TX_GPIO_Pin                     GPIO_PIN_9
#define MX_CAN1_TX_GPIO_AF                      GPIO_AF9_CAN1
#define MX_CAN1_TX_GPIO_Mode                    GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC CAN1_RX0_IRQn */
#define MX_CAN1_RX0_IRQn_interruptPremptionPriority 0
#define MX_CAN1_RX0_IRQn_PriorityGroup          NVIC_PRIORITYGROUP_4
#define MX_CAN1_RX0_IRQn_Subriority             0

/* NVIC CAN1_RX1_IRQn */
#define MX_CAN1_RX1_IRQn_interruptPremptionPriority 0
#define MX_CAN1_RX1_IRQn_PriorityGroup          NVIC_PRIORITYGROUP_4
#define MX_CAN1_RX1_IRQn_Subriority             0

/*-------------------------------- CAN2       --------------------------------*/

#define MX_CAN2                                 1

/* GPIO Configuration */

/* Pin PB12 */
#define MX_CAN2_RX_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN2_RX_Pin                          PB12
#define MX_CAN2_RX_GPIOx                        GPIOB
#define MX_CAN2_RX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN2_RX_GPIO_Pin                     GPIO_PIN_12
#define MX_CAN2_RX_GPIO_AF                      GPIO_AF9_CAN2
#define MX_CAN2_RX_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB13 */
#define MX_CAN2_TX_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN2_TX_Pin                          PB13
#define MX_CAN2_TX_GPIOx                        GPIOB
#define MX_CAN2_TX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN2_TX_GPIO_Pin                     GPIO_PIN_13
#define MX_CAN2_TX_GPIO_AF                      GPIO_AF9_CAN2
#define MX_CAN2_TX_GPIO_Mode                    GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC CAN2_RX0_IRQn */
#define MX_CAN2_RX0_IRQn_interruptPremptionPriority 0
#define MX_CAN2_RX0_IRQn_PriorityGroup          NVIC_PRIORITYGROUP_4
#define MX_CAN2_RX0_IRQn_Subriority             0

/* NVIC CAN2_RX1_IRQn */
#define MX_CAN2_RX1_IRQn_interruptPremptionPriority 0
#define MX_CAN2_RX1_IRQn_PriorityGroup          NVIC_PRIORITYGROUP_4
#define MX_CAN2_RX1_IRQn_Subriority             0

/*-------------------------------- I2C1       --------------------------------*/

#define MX_I2C1                                 1

/* GPIO Configuration */

/* Pin PB6 */
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB7 */
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- SPI1       --------------------------------*/

#define MX_SPI1                                 1

/* GPIO Configuration */

/* Pin PA6 */
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA7 */
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_Pin                        PA7
#define MX_SPI1_MOSI_GPIOx                      GPIOA
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_7
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA5 */
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- TIM4       --------------------------------*/

#define MX_TIM4                                 1

/* GPIO Configuration */

/* Pin PD15 */
#define MX_S_TIM4_CH4_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH4_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH4_Pin                       PD15
#define MX_S_TIM4_CH4_GPIOx                     GPIOD
#define MX_S_TIM4_CH4_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH4_GPIO_Pin                  GPIO_PIN_15
#define MX_S_TIM4_CH4_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD12 */
#define MX_S_TIM4_CH1_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH1_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH1_Pin                       PD12
#define MX_S_TIM4_CH1_GPIOx                     GPIOD
#define MX_S_TIM4_CH1_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH1_GPIO_Pin                  GPIO_PIN_12
#define MX_S_TIM4_CH1_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD13 */
#define MX_S_TIM4_CH2_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH2_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH2_Pin                       PD13
#define MX_S_TIM4_CH2_GPIOx                     GPIOD
#define MX_S_TIM4_CH2_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH2_GPIO_Pin                  GPIO_PIN_13
#define MX_S_TIM4_CH2_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD14 */
#define MX_S_TIM4_CH3_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH3_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH3_Pin                       PD14
#define MX_S_TIM4_CH3_GPIOx                     GPIOD
#define MX_S_TIM4_CH3_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH3_GPIO_Pin                  GPIO_PIN_14
#define MX_S_TIM4_CH3_GPIO_AF                   GPIO_AF2_TIM4

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PA0-WKUP */
#define MX_PA0_WKUP_Pin                         PA0_WKUP
#define MX_PA0_WKUP_GPIOx                       GPIOA
#define MX_PA0_WKUP_GPIO_PuPd                   GPIO_NOPULL
#define MX_PA0_WKUP_GPIO_Pin                    GPIO_PIN_0
#define MX_PA0_WKUP_GPIO_ModeDefaultEXTI        GPIO_MODE_IT_RISING

#endif  /* __MX_DEVICE_H */

