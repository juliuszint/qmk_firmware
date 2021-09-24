/*
Copyright 2020 Michael Fincham
Copyright 2021 Chad Austin
Copyright 2021 Julius Zint

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
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1209 // https://pid.codes/1209/
#define PRODUCT_ID      0xC848 // made up
#define DEVICE_VER      0x0001
#define MANUFACTURER    Julius Zint
#define PRODUCT         Wired SEK
#define DESCRIPTION     Wired Microsoft Surface Ergonomic Keyboard

#define MATRIX_ROWS 8
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS {F0, F1, F2, F3, A0, A1, A2, A3}
#define MATRIX_COL_PINS {C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, D6, D5, D4, D1, D0, E5, E4}
#define UNUSED_PINS { B0, B1, B2, B3, C7, E6, E7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST
#define USB_POLLING_INTERVAL_MS 1
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 400
#define HOLD_ON_OTHER_KEY_PRESS
