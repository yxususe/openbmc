/*
 *
 * Copyright 2016-present Facebook. All Rights Reserved.
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __VR_H__
#define __VR_H__

#define VR_BIT0(Din, Dout) ((Din >> 0) ^ (Din >> 6) ^ (Din >> 9) ^ (Din >> 10) ^ (Din >> 12) ^ (Din >> 16) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 6) ^ (Dout >> 9) ^ (Dout >> 10) ^ (Dout >> 12) ^ (Dout >> 16) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 30) ^ (Dout >> 31))
#define VR_BIT1(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 9) ^ (Din >> 11) ^ (Din >> 12) ^ (Din >> 13) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 24) ^ (Din >> 27) ^ (Din >> 28) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 9) ^ (Dout >> 11) ^ (Dout >> 12) ^ (Dout >> 13) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 24) ^ (Dout >> 27) ^ (Dout >> 28))
#define VR_BIT2(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 2) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 9) ^ (Din >> 13) ^ (Din >> 14) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 9) ^ (Dout >> 13) ^ (Dout >> 14) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 30) ^ (Dout >> 31))
#define VR_BIT3(Din, Dout) ((Din >> 1) ^ (Din >> 2) ^ (Din >> 3) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 9) ^ (Din >> 10) ^ (Din >> 14) ^ (Din >> 15) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 25) ^ (Din >> 27) ^ (Din >> 31) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 9) ^ (Dout >> 10) ^ (Dout >> 14) ^ (Dout >> 15) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 25) ^ (Dout >> 27) ^ (Dout >> 31))
#define VR_BIT4(Din, Dout) ((Din >> 0) ^ (Din >> 2) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 6) ^ (Din >> 8) ^ (Din >> 11) ^ (Din >> 12) ^ (Din >> 15) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 29) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 6) ^ (Dout >> 8) ^ (Dout >> 11) ^ (Dout >> 12) ^ (Dout >> 15) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 29) ^ (Dout >> 30) ^ (Dout >> 31))
#define VR_BIT5(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 10) ^ (Din >> 13) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 24) ^ (Din >> 28) ^ (Din >> 29) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 10) ^ (Dout >> 13) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 24) ^ (Dout >> 28) ^ (Dout >> 29))
#define VR_BIT6(Din, Dout) ((Din >> 1) ^ (Din >> 2) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 11) ^ (Din >> 14) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 25) ^ (Din >> 29) ^ (Din >> 30) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 11) ^ (Dout >> 14) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 25) ^ (Dout >> 29) ^ (Dout >> 30))
#define VR_BIT7(Din, Dout) ((Din >> 0) ^ (Din >> 2) ^ (Din >> 3) ^ (Din >> 5) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 10) ^ (Din >> 15) ^ (Din >> 16) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 28) ^ (Din >> 29) ^ (Dout >> 0) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 5) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 10) ^ (Dout >> 15) ^ (Dout >> 16) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 28) ^ (Dout >> 29))
#define VR_BIT8(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 8) ^ (Din >> 10) ^ (Din >> 11) ^ (Din >> 12) ^ (Din >> 17) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 28) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 8) ^ (Dout >> 10) ^ (Dout >> 11) ^ (Dout >> 12) ^ (Dout >> 17) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 28) ^ (Dout >> 31))
#define VR_BIT9(Din, Dout) ((Din >> 1) ^ (Din >> 2) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 9) ^ (Din >> 11) ^ (Din >> 12) ^ (Din >> 13) ^ (Din >> 18) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 29) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 9) ^ (Dout >> 11) ^ (Dout >> 12) ^ (Dout >> 13) ^ (Dout >> 18) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 29))
#define VR_BIT10(Din, Dout) ((Din >> 0) ^ (Din >> 2) ^ (Din >> 3) ^ (Din >> 5) ^ (Din >> 9) ^ (Din >> 13) ^ (Din >> 14) ^ (Din >> 16) ^ (Din >> 19) ^ (Din >> 26) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 5) ^ (Dout >> 9) ^ (Dout >> 13) ^ (Dout >> 14) ^ (Dout >> 16) ^ (Dout >> 19) ^ (Dout >> 26) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT11(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 9) ^ (Din >> 12) ^ (Din >> 14) ^ (Din >> 15) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 20) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 9) ^ (Dout >> 12) ^ (Dout >> 14) ^ (Dout >> 15) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 20) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 31))
#define VR_BIT12(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 2) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 9) ^ (Din >> 12) ^ (Din >> 13) ^ (Din >> 15) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 21) ^ (Din >> 24) ^ (Din >> 27) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 9) ^ (Dout >> 12) ^ (Dout >> 13) ^ (Dout >> 15) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 21) ^ (Dout >> 24) ^ (Dout >> 27) ^ (Dout >> 30) ^ (Dout >> 31))
#define VR_BIT13(Din, Dout) ((Din >> 1) ^ (Din >> 2) ^ (Din >> 3) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 10) ^ (Din >> 13) ^ (Din >> 14) ^ (Din >> 16) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 22) ^ (Din >> 25) ^ (Din >> 28) ^ (Din >> 31) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 10) ^ (Dout >> 13) ^ (Dout >> 14) ^ (Dout >> 16) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 22) ^ (Dout >> 25) ^ (Dout >> 28) ^ (Dout >> 31))
#define VR_BIT14(Din, Dout) ((Din >> 2) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 11) ^ (Din >> 14) ^ (Din >> 15) ^ (Din >> 17) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 23) ^ (Din >> 26) ^ (Din >> 29) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 11) ^ (Dout >> 14) ^ (Dout >> 15) ^ (Dout >> 17) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 23) ^ (Dout >> 26) ^ (Dout >> 29))
#define VR_BIT15(Din, Dout) ((Din >> 3) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 9) ^ (Din >> 12) ^ (Din >> 15) ^ (Din >> 16) ^ (Din >> 18) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 24) ^ (Din >> 27) ^ (Din >> 30) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 9) ^ (Dout >> 12) ^ (Dout >> 15) ^ (Dout >> 16) ^ (Dout >> 18) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 24) ^ (Dout >> 27) ^ (Dout >> 30))
#define VR_BIT16(Din, Dout) ((Din >> 0) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 8) ^ (Din >> 12) ^ (Din >> 13) ^ (Din >> 17) ^ (Din >> 19) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 29) ^ (Din >> 30) ^ (Dout >> 0) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 8) ^ (Dout >> 12) ^ (Dout >> 13) ^ (Dout >> 17) ^ (Dout >> 19) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 29) ^ (Dout >> 30))
#define VR_BIT17(Din, Dout) ((Din >> 1) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 9) ^ (Din >> 13) ^ (Din >> 14) ^ (Din >> 18) ^ (Din >> 20) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 25) ^ (Din >> 27) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 1) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 9) ^ (Dout >> 13) ^ (Dout >> 14) ^ (Dout >> 18) ^ (Dout >> 20) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 25) ^ (Dout >> 27) ^ (Dout >> 30) ^ (Dout >> 31))
#define VR_BIT18(Din, Dout) ((Din >> 2) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 10) ^ (Din >> 14) ^ (Din >> 15) ^ (Din >> 19) ^ (Din >> 21) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 28) ^ (Din >> 31) ^ (Dout >> 2) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 10) ^ (Dout >> 14) ^ (Dout >> 15) ^ (Dout >> 19) ^ (Dout >> 21) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 28) ^ (Dout >> 31))
#define VR_BIT19(Din, Dout) ((Din >> 3) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 11) ^ (Din >> 15) ^ (Din >> 16) ^ (Din >> 20) ^ (Din >> 22) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 27) ^ (Din >> 29) ^ (Dout >> 3) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 11) ^ (Dout >> 15) ^ (Dout >> 16) ^ (Dout >> 20) ^ (Dout >> 22) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 27) ^ (Dout >> 29))
#define VR_BIT20(Din, Dout) ((Din >> 4) ^ (Din >> 8) ^ (Din >> 9) ^ (Din >> 12) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 21) ^ (Din >> 23) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 28) ^ (Din >> 30) ^ (Dout >> 4) ^ (Dout >> 8) ^ (Dout >> 9) ^ (Dout >> 12) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 21) ^ (Dout >> 23) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 28) ^ (Dout >> 30))
#define VR_BIT21(Din, Dout) ((Din >> 5) ^ (Din >> 9) ^ (Din >> 10) ^ (Din >> 13) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 22) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 5) ^ (Dout >> 9) ^ (Dout >> 10) ^ (Dout >> 13) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 22) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT22(Din, Dout) ((Din >> 0) ^ (Din >> 9) ^ (Din >> 11) ^ (Din >> 12) ^ (Din >> 14) ^ (Din >> 16) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 9) ^ (Dout >> 11) ^ (Dout >> 12) ^ (Dout >> 14) ^ (Dout >> 16) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT23(Din, Dout) ((Din >> 0) ^ (Din >> 1) ^ (Din >> 6) ^ (Din >> 9) ^ (Din >> 13) ^ (Din >> 15) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 1) ^ (Dout >> 6) ^ (Dout >> 9) ^ (Dout >> 13) ^ (Dout >> 15) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT24(Din, Dout) ((Din >> 1) ^ (Din >> 2) ^ (Din >> 7) ^ (Din >> 10) ^ (Din >> 14) ^ (Din >> 16) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 30) ^ (Dout >> 1) ^ (Dout >> 2) ^ (Dout >> 7) ^ (Dout >> 10) ^ (Dout >> 14) ^ (Dout >> 16) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 30))
#define VR_BIT25(Din, Dout) ((Din >> 2) ^ (Din >> 3) ^ (Din >> 8) ^ (Din >> 11) ^ (Din >> 15) ^ (Din >> 17) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 2) ^ (Dout >> 3) ^ (Dout >> 8) ^ (Dout >> 11) ^ (Dout >> 15) ^ (Dout >> 17) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT26(Din, Dout) ((Din >> 0) ^ (Din >> 3) ^ (Din >> 4) ^ (Din >> 6) ^ (Din >> 10) ^ (Din >> 18) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 28) ^ (Din >> 31) ^ (Dout >> 0) ^ (Dout >> 3) ^ (Dout >> 4) ^ (Dout >> 6) ^ (Dout >> 10) ^ (Dout >> 18) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 28) ^ (Dout >> 31))
#define VR_BIT27(Din, Dout) ((Din >> 1) ^ (Din >> 4) ^ (Din >> 5) ^ (Din >> 7) ^ (Din >> 11) ^ (Din >> 19) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 29) ^ (Dout >> 1) ^ (Dout >> 4) ^ (Dout >> 5) ^ (Dout >> 7) ^ (Dout >> 11) ^ (Dout >> 19) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 29))
#define VR_BIT28(Din, Dout) ((Din >> 2) ^ (Din >> 5) ^ (Din >> 6) ^ (Din >> 8) ^ (Din >> 12) ^ (Din >> 20) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 30) ^ (Dout >> 2) ^ (Dout >> 5) ^ (Dout >> 6) ^ (Dout >> 8) ^ (Dout >> 12) ^ (Dout >> 20) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 30))
#define VR_BIT29(Din, Dout) ((Din >> 3) ^ (Din >> 6) ^ (Din >> 7) ^ (Din >> 9) ^ (Din >> 13) ^ (Din >> 21) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 25) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 31) ^ (Dout >> 3) ^ (Dout >> 6) ^ (Dout >> 7) ^ (Dout >> 9) ^ (Dout >> 13) ^ (Dout >> 21) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 25) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 31))
#define VR_BIT30(Din, Dout) ((Din >> 4) ^ (Din >> 7) ^ (Din >> 8) ^ (Din >> 10) ^ (Din >> 14) ^ (Din >> 22) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 26) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 30) ^ (Dout >> 4) ^ (Dout >> 7) ^ (Dout >> 8) ^ (Dout >> 10) ^ (Dout >> 14) ^ (Dout >> 22) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 26) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 30))
#define VR_BIT31(Din, Dout) ((Din >> 5) ^ (Din >> 8) ^ (Din >> 9) ^ (Din >> 11) ^ (Din >> 15) ^ (Din >> 23) ^ (Din >> 24) ^ (Din >> 25) ^ (Din >> 27) ^ (Din >> 28) ^ (Din >> 29) ^ (Din >> 30) ^ (Din >> 31) ^ (Dout >> 5) ^ (Dout >> 8) ^ (Dout >> 9) ^ (Dout >> 11) ^ (Dout >> 15) ^ (Dout >> 23) ^ (Dout >> 24) ^ (Dout >> 25) ^ (Dout >> 27) ^ (Dout >> 28) ^ (Dout >> 29) ^ (Dout >> 30) ^ (Dout >> 31))

#define DATA_START_ADDR 18

#endif
