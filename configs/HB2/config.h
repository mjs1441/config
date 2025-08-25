/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     RP2350B
#define BOARD_NAME        HB2
#define MANUFACTURER_ID   RASP

#define CONFIG_PWM
#define USE_PWM_OUTPUT

// override motor_pwm_rate setting
#define MOTOR_FC_PWM_RATE 16384

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P

#define MAX7456_SPI_INSTANCE SPI1
#define SDCARD_SPI_INSTANCE  SPI1
#define GYRO_1_SPI_INSTANCE  SPI0

#define PICO_TRACE_UART_INSTANCE  1
#define PICO_TRACE_TX_GPIO        8
#define PICO_TRACE_RX_GPIO        9

// beware PWM on PA28..PA31 same slice as PA12..PA15
#define MOTOR1_PIN           PA28
#define MOTOR2_PIN           PA29
#define MOTOR3_PIN           PA30
#define MOTOR4_PIN           PA31

#define LED0_PIN             PA6
#define LED1_PIN             PA7

#define SPI0_SCK_PIN         PA2
#define SPI0_SDI_PIN         PA4
#define SPI0_SDO_PIN         PA3

#define SPI1_SCK_PIN         PA26
#define SPI1_SDI_PIN         PA24
#define SPI1_SDO_PIN         PA27

#define SDCARD_CS_PIN        PA25
#define MAX7456_SPI_CS_PIN   PA17
#define USE_MAX7456

#define GYRO_1_CS_PIN        PA1
#define GYRO_1_EXTI_PIN      PA22

#define GYRO_2_CS_PIN        NONE

#define UART1_TX_PIN         PA20
#define UART1_RX_PIN         PA21

#define USE_BARO
// DPS368 same drivers as for DPS310
#define USE_BARO_DPS310
#define BARO_I2C_INSTANCE    I2CDEV_0
#define I2C0_SDA_PIN         PA44
#define I2C0_SCL_PIN         PA45

#define USE_BEEPER
#define BEEPER_PWM_HZ        1971
// beware PA5 => PWM slice 2 => would interefere with PWM on PA4, PA20, PA21
#define BEEPER_PIN           PA5

#define PICO_BEC_5V_ENABLE_PIN PA14
#define PICO_BEC_9V_ENABLE_PIN PA15

// provisional: using PICO with MCT8329A (so need to set registers etc.)
#define PICO_ESC_MCT8329A
#define MCT8329A_MUX_I2C_INDEX    0
#define MCT8329A_MUX_RESET_GPIO  11
#define MCT8329A_MUX_ADDR      0x70
#define MCT8329A_MCT_ADDR      0x60

// Enable CLI interface
/////#define USE_MCT8329A_REGS

// MCT8329A regs
#define MCT8329A_ISD_CONFIG 0x7F404D04
#define MCT8329A_MOTOR_STARTUP1 0x6C9265B7
#define MCT8329A_MOTOR_STARTUP2 0x332D3295
#define MCT8329A_CLOSED_LOOP1 0x1025E600
#define MCT8329A_CLOSED_LOOP2 0x02A1A430
#define MCT8329A_CLOSED_LOOP3 0x34C92001
#define MCT8329A_CLOSED_LOOP4 0x001AC953
#define MCT8329A_CONST_SPEED 0x30010000
#define MCT8329A_CONST_PWR 0x5EC80640
#define MCT8329A_FAULT_CONFIG1 0x71783604
#define MCT8329A_FAULT_CONFIG2 0x7F85C00A
#define MCT8329A_150_DEG_TWO_PH_PROFILE 0x24DB7200
#define MCT8329A_150_DEG_THREE_PH_PROFILE 0x48DB6946
#define MCT8329A_REF_PROFILES1 0x032184A6
#define MCT8329A_REF_PROFILES2 0x34C80AFC
#define MCT8329A_REF_PROFILES3 0x4787D70C
#define MCT8329A_REF_PROFILES4 0x000C9932
#define MCT8329A_REF_PROFILES5 0x1F6BF200
#define MCT8329A_REF_PROFILES6 0x00708000
#define MCT8329A_PIN_CONFIG1 0x20600004
#define MCT8329A_PIN_CONFIG2 0x3E0020AA
#define MCT8329A_DEVICE_CONFIG 0x27100008
#define MCT8329A_GD_CONFIG1 0x000600FC
#define MCT8329A_GD_CONFIG2 0x00000000

// references (mainly read only apart from algo_ctrl1, device_ctrl?)
// #define MCT8329A_ALGO_CTRL1 0x00000000
// #define MCT8329A_DEVICE_CTRL 0x00008000
// #define MCT8329A_ANA_TRIM3 0x48004800
// #define MCT8329A_ANA_TRIM4 0xC00000000
// #define MCT8329A_ANA_TRIM5 0x0000000C
// #define MCT8329A_ANA_TRIM6 0x00000000
// #define MCT8329A_ANA_TRIM7 0x00ADB85D
// #define MCT8329A_ANA_TRIM8 0x00004C62
// #define MCT8329A_ANA_TRIM9 0x0081A75D
// #define MCT8329A_ANA_TRIM10 0x5379E001
// #define MCT8329A_GATE_DRIVER_FAULT_STATUS 0x00000000
// #define MCT8329A_CONTROLLER_FAULT_STATUS 0x00000000
// #define MCT8329A_SYS_STATUS1 0x012B0000
// #define MCT8329A_SYS_STATUS2 0x60010000
// #define MCT8329A_SYS_STATUS3 0x00000000

