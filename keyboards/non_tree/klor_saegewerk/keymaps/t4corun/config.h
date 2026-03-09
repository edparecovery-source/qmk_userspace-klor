/* Copyright 2024 @t4corun
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

#if defined(OLED_ENABLE)
#   define OLED_KEYBOARD_NAME "KLOR Saegewerk"
#endif // OLED_ENABLE

#if defined(RGB_MATRIX_ENABLE)
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#   define RGB_MATRIX_DEFAULT_HUE 4
#   define RGB_MATRIX_DEFAULT_SAT 79
#   define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#   define RGB_MATRIX_DEFAULT_SPD 127
#endif //RGB_MATRIX_ENABLE