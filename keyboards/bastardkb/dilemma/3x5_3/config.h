/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { GP4, GP5, GP27, GP26 }
#define MATRIX_COL_PINS \
    { GP8, GP9, GP7, GP6, GP28 }

/* Handedness. */
#define SPLIT_HAND_PIN GP29
#define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

/* RGB settings. */
//#define RGB_DI_PIN GP0  // Per-key.
#define WS2812_DI_PIN GP10
// #define RGB_DI_PIN GP10 // Underglow.

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

/* Cirque trackpad over SPI. */
#define SPI_SCK_PIN GP22
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20
#define POINTING_DEVICE_CS_PIN GP21

/* OLED over i2c. */
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_16_9
#define OLED_DISPLAY_HEIGHT 128

#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
#define DILEMMA_MINIMUM_DEFAULT_DPI 400
#define CIRQUE_PINNACLE_CURVED_OVERLAY

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* RGB settings. */
#define RGBLED_NUM 36
#define RGBLED_SPLIT \
    { 18, 18 } 


#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define PERMISSIVE_HOLD 

/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif
