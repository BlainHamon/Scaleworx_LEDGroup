//
//  Scaleworx_PixmapConstants.cpp
//
//
//  Created by Blain Hamon on 6/17/19.
//

#include "Scaleworx_PixmapConstants.h"

const uint8_t map8x8ZigZagTopLeftRightward[] = {
    0,  1,  2,  3,  4,  5,  6,  7,
    15, 14, 13, 12, 11, 10, 9,  8,
    16, 17, 18, 19, 20, 21, 22, 23,
    31, 30, 29, 28, 27, 26, 25, 24,
    32, 33, 34, 35, 36, 37, 38, 39,
    47, 46, 45, 44, 43, 42, 41, 40,
    48, 49, 50, 51, 52, 53, 54, 55,
    63, 62, 61, 60, 59, 58, 57, 56
 };

const uint8_t map8x8ZigZagBottomLeftRightward[] = {
    63, 62, 61, 60, 59, 58, 57, 56,
    48, 49, 50, 51, 52, 53, 54, 55,
    47, 46, 45, 44, 43, 42, 41, 40,
    32, 33, 34, 35, 36, 37, 38, 39,
    31, 30, 29, 28, 27, 26, 25, 24,
    16, 17, 18, 19, 20, 21, 22, 23,
    15, 14, 13, 12, 11, 10, 9,  8,
    0,  1,  2,  3,  4,  5,  6,  7
 };

const uint8_t map8x8ZigZagTopRightLeftward[] = {
    7,  6,  5,  4,  3,  2,  1,  0,
    8,  9,  10, 11, 12, 13, 14, 15,
    23, 22, 21, 20, 19, 18, 17, 16,
    24, 25, 26, 27, 28, 29, 30, 31,
    39, 38, 37, 36, 35, 34, 33, 32,
    40, 41, 42, 43, 44, 45, 46, 47,
    55, 54, 53, 52, 51, 50, 49, 48,
    56, 57, 58, 59, 60, 61, 62, 63
 };

const uint8_t map8x8ZigZagBottomRightLeftward[] = {
    56, 57, 58, 59, 60, 61, 62, 63,
    55, 54, 53, 52, 51, 50, 49, 48,
    40, 41, 42, 43, 44, 45, 46, 47,
    39, 38, 37, 36, 35, 34, 33, 32,
    24, 25, 26, 27, 28, 29, 30, 31,
    23, 22, 21, 20, 19, 18, 17, 16,
    8,  9,  10, 11, 12, 13, 14, 15,
    7,  6,  5,  4,  3,  2,  1,  0
 };

const uint8_t map8x8ZigZagTopLeftDownward[] = {
    0,  15, 16, 31, 32, 47, 48, 63,
    1,  14, 17, 30, 33, 46, 49, 62,
    2,  13, 18, 29, 34, 45, 50, 61,
    3,  12, 19, 28, 35, 44, 51, 60,
    4,  11, 20, 27, 36, 43, 52, 59,
    5,  10, 21, 26, 37, 42, 53, 58,
    6,  9,  22, 25, 38, 41, 54, 57,
    7,  8,  23, 24, 39, 40, 55, 56
 };

const uint8_t map8x8ZigZagBottomLeftUpward[] = {
    7,  8,  23, 24, 39, 40, 55, 56,
    6,  9,  22, 25, 38, 41, 54, 57,
    5,  10, 21, 26, 37, 42, 53, 58,
    4,  11, 20, 27, 36, 43, 52, 59,
    3,  12, 19, 28, 35, 44, 51, 60,
    2,  13, 18, 29, 34, 45, 50, 61,
    1,  14, 17, 30, 33, 46, 49, 62,
    0,  15, 16, 31, 32, 47, 48, 63
 };

const uint8_t map8x8ZigZagTopRightDownward[] = {
    63, 48, 47, 32, 31, 16,  15, 0,
    62, 49, 46, 33, 30, 17,  14, 1,
    61, 50, 45, 34, 29, 18,  13, 2,
    60, 51, 44, 35, 28, 19,  12, 3,
    59, 52, 43, 36, 27, 20,  11, 4,
    58, 53, 42, 37, 26, 21,  10, 5,
    57, 54, 41, 38, 25, 22,  9,  6,
    56, 55, 40, 39, 24, 23,  8,  7
 };

const uint8_t map8x8ZigZagBottomRightUpward[] = {
    56, 55, 40, 39, 24, 23,  8,  7,
    57, 54, 41, 38, 25, 22,  9,  6,
    58, 53, 42, 37, 26, 21,  10, 5,
    59, 52, 43, 36, 27, 20,  11, 4,
    60, 51, 44, 35, 28, 19,  12, 3,
    61, 50, 45, 34, 29, 18,  13, 2,
    62, 49, 46, 33, 30, 17,  14, 1,
    63, 48, 47, 32, 31, 16,  15, 0
 };

const uint8_t map8x8TopLeftToRight[] = {
    0,  1,  2,  3,  4,  5,  6,  7,
    8,  9,  10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55,
    56, 57, 58, 59, 60, 61, 62, 63
 };

const uint8_t map8x8TopRightToLeft[] = {
    7,  6,  5,  4,  3,  2,  1,  0,
    15, 14, 13, 12, 11, 10, 9,  8,
    23, 22, 21, 20, 19, 18, 17, 16,
    31, 30, 29, 28, 27, 26, 25, 24,
    39, 38, 37, 36, 35, 34, 33, 32,
    47, 46, 45, 44, 43, 42, 41, 40,
    55, 54, 53, 52, 51, 50, 49, 48,
    63, 62, 61, 60, 59, 58, 57, 56
 };
