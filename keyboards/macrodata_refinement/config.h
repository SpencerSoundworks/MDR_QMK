/*

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

/* USB IDs */
#define VENDOR_ID		0xCA04
#define PRODUCT_ID		0xC024
#define DEVICE_VER		0x0001

/* Keyboard matrix locations */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17
#define MATRIX_ROW_PINS {B11, B10, B2, B1, B0, A3}
#define MATRIX_COL_PINS {A13, A14, A15, B3, B4, B5, B6, B7, B8, B9, A10, A9, A8, B15, B14, B13, B12}

/* Trackball settings */
#define MOUSE_EXTENDED_REPORT
#define PMW33XX_CS_PIN A4
#define PMW33XX_CPI 1600
#define PMW33XX_CLOCK_SPEED 2000000
#define PMW33XX_LIFTOFF_DISTANCE 0x02

/* SPI Settings */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
