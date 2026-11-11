#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include <stdint.h>
#include <stdbool.h>

/* Board Hardware Profile: 5-inch Autonomous Wall-Inspection FC */
#define BOARD_NAME          "FC_5IN_INSPECTION_H7"
#define MCU_TYPE            "STM32H743VIT6"
#define HSE_VALUE           25000000UL /* 25 MHz External Crystal */
#define SYSCLK_FREQ         480000000UL

/* Pin Mappings */
/* Status LEDs */
#define LED_PWR_PIN         GPIO_PIN_2   /* Blue LED (3.3V) */
#define LED_ARM_PIN         GPIO_PIN_3   /* Green LED (Status/Armed) */
#define LED_PORT            GPIOD

/* SPI1 - ICM-42688-P IMU */
#define IMU_SPI             SPI1
#define IMU_CS_PIN          GPIO_PIN_4
#define IMU_CS_PORT         GPIOA
#define IMU_INT_PIN         GPIO_PIN_5
#define IMU_INT_PORT        GPIOC

/* I2C1 - DPS310 Barometer */
#define BARO_I2C            I2C1
#define BARO_SCL_PIN        GPIO_PIN_8
#define BARO_SDA_PIN        GPIO_PIN_9
#define BARO_PORT           GPIOB

/* SPI2 - W25Q128 Flash */
#define FLASH_SPI           SPI2
#define FLASH_CS_PIN        GPIO_PIN_12
#define FLASH_CS_PORT       GPIOB

/* Motor PWM / DShot (TIM1 / TIM4) */
#define MOTOR1_PIN          GPIO_PIN_9
#define MOTOR2_PIN          GPIO_PIN_11
#define MOTOR3_PIN          GPIO_PIN_13
#define MOTOR4_PIN          GPIO_PIN_14
#define MOTOR_PORT          GPIOE

/* Navigation & Peripherals */
#define TOF_UART            USART2       /* J_WALL_TOF */
#define FLOW_UART           UART4        /* J_FLOW */
#define GPS_UART            USART1       /* J_GPS */
#define MAVLINK_UART        USART3       /* J_MAVLINK */
#define RC_UART             UART7        /* J_RC (CRSF/ELRS) */

/* Strobe & Buzzer FET Outputs */
#define STROBE_PIN          GPIO_PIN_8   /* 2N7002 FET */
#define STROBE_PORT         GPIOC
#define BUZZER_PIN          GPIO_PIN_15  /* 2N7002 FET */
#define BUZZER_PORT         GPIOB

#endif /* BOARD_CONFIG_H */
