// ----------------------------------------------------------------------------
// Pre-compiled second stage boot code for RP2040.
//
// Copyright (c) 2019-2021 Raspberry Pi (Trading) Ltd.
// SPDX-License-Identifier: BSD-3-Clause
// ----------------------------------------------------------------------------

#include <stdint.h>

#define BOOTLOADER_SECTION __attribute__ ((used, section (".boot2")))

#if defined(RP2040_FLASH_AT25SF128A)

uint8_t BOOTLOADER_SECTION BOOT2_AT25SF128A[256] = {
  0x00, 0xb5, 0x31, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21,
  0x88, 0x43, 0x98, 0x60, 0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2d, 0x4b,
  0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61, 0x01, 0x21, 0xf0, 0x22,
  0x99, 0x50, 0x2a, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
  0x00, 0xf0, 0x42, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x12, 0xd0, 0x06, 0x21,
  0x19, 0x66, 0x00, 0xf0, 0x32, 0xf8, 0x19, 0x6e, 0x31, 0x21, 0x19, 0x66,
  0x1a, 0x66, 0x00, 0xf0, 0x2c, 0xf8, 0x19, 0x6e, 0x19, 0x6e, 0x19, 0x6e,
  0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21, 0x08, 0x42, 0xf9, 0xd1,
  0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60,
  0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xeb, 0x21,
  0x19, 0x66, 0x20, 0x21, 0x19, 0x66, 0x00, 0xf0, 0x12, 0xf8, 0x00, 0x21,
  0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60,
  0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x12, 0x48, 0x13, 0x49,
  0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x03, 0xb5,
  0x99, 0x6a, 0x04, 0x20, 0x01, 0x42, 0xfb, 0xd0, 0x01, 0x20, 0x01, 0x42,
  0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66, 0x18, 0x66, 0xff, 0xf7,
  0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd, 0x00, 0x00, 0x02, 0x40,
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x5f, 0x00,
  0x21, 0x22, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x18, 0x22, 0x20, 0x00, 0x20,
  0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0xdd, 0xc0, 0xb5
};

#elif defined(RP2040_FLASH_GD25Q64CS)

uint8_t BOOTLOADER_SECTION BOOT2_GD25Q64CS[256] = {
  0x00, 0xb5, 0x31, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21,
  0x88, 0x43, 0x98, 0x60, 0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2d, 0x4b,
  0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61, 0x01, 0x21, 0xf0, 0x22,
  0x99, 0x50, 0x2a, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
  0x00, 0xf0, 0x42, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x12, 0xd0, 0x06, 0x21,
  0x19, 0x66, 0x00, 0xf0, 0x32, 0xf8, 0x19, 0x6e, 0x31, 0x21, 0x19, 0x66,
  0x1a, 0x66, 0x00, 0xf0, 0x2c, 0xf8, 0x19, 0x6e, 0x19, 0x6e, 0x19, 0x6e,
  0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21, 0x08, 0x42, 0xf9, 0xd1,
  0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60,
  0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xe7, 0x21,
  0x19, 0x66, 0xa0, 0x21, 0x19, 0x66, 0x00, 0xf0, 0x12, 0xf8, 0x00, 0x21,
  0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60,
  0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x12, 0x48, 0x13, 0x49,
  0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x03, 0xb5,
  0x99, 0x6a, 0x04, 0x20, 0x01, 0x42, 0xfb, 0xd0, 0x01, 0x20, 0x01, 0x42,
  0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66, 0x18, 0x66, 0xff, 0xf7,
  0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd, 0x00, 0x00, 0x02, 0x40,
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x5f, 0x00,
  0x21, 0x12, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x18, 0x22, 0x10, 0x00, 0xa0,
  0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe2, 0xd9, 0xa2, 0xb5
};

#elif defined(RP2040_FLASH_W25X10CL)

uint8_t BOOTLOADER_SECTION BOOT2_W25X10CL[256] = {
  0x00, 0xb5, 0x14, 0x4b, 0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61,
  0x12, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60, 0x11, 0x49, 0x12, 0x48,
  0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xbb, 0x21, 0x19, 0x66, 0x02, 0x21,
  0x19, 0x66, 0x08, 0x21, 0x98, 0x6a, 0x08, 0x42, 0xfc, 0xd0, 0x00, 0x21,
  0x99, 0x60, 0x0c, 0x49, 0x0a, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60,
  0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x08, 0x48, 0x09, 0x49,
  0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x18, 0x00, 0x03, 0x3f, 0x00, 0x1d, 0x12, 0x00, 0x00,
  0xf4, 0x00, 0x00, 0x18, 0x1e, 0x10, 0x00, 0x20, 0x00, 0x01, 0x00, 0x10,
  0x08, 0xed, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7c, 0x81, 0x53, 0x9a
};

#elif defined(RP2040_FLASH_IS25LP080)

uint8_t BOOTLOADER_SECTION BOOT2_IS25LP080[256] = {
  0x00, 0xb5, 0x2b, 0x4b, 0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61,
  0x29, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x28, 0x48, 0x00, 0xf0,
  0x42, 0xf8, 0x28, 0x4a, 0x90, 0x42, 0x12, 0xd0, 0x06, 0x21, 0x19, 0x66,
  0x00, 0xf0, 0x32, 0xf8, 0x19, 0x6e, 0x01, 0x21, 0x19, 0x66, 0x00, 0x20,
  0x1a, 0x66, 0x00, 0xf0, 0x2b, 0xf8, 0x19, 0x6e, 0x19, 0x6e, 0x1f, 0x48,
  0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21, 0x08, 0x42, 0xf9, 0xd1, 0x00, 0x21,
  0x99, 0x60, 0x1d, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60, 0x1c, 0x49,
  0x1c, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xeb, 0x21, 0x19, 0x66,
  0xa0, 0x21, 0x19, 0x66, 0x00, 0xf0, 0x12, 0xf8, 0x00, 0x21, 0x99, 0x60,
  0x17, 0x49, 0x16, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0x01, 0xbc,
  0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x14, 0x48, 0x14, 0x49, 0x08, 0x60,
  0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x03, 0xb5, 0x99, 0x6a,
  0x04, 0x20, 0x01, 0x42, 0xfb, 0xd0, 0x01, 0x20, 0x01, 0x42, 0xf8, 0xd1,
  0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66, 0x18, 0x66, 0xff, 0xf7, 0xf2, 0xff,
  0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
  0x00, 0x00, 0x07, 0x00, 0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x5f, 0x00, 0x21, 0x22, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x18,
  0x22, 0x20, 0x00, 0xa0, 0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x33, 0x43, 0xb2
};

#elif defined(RP2040_FLASH_GENERIC_03H)

uint8_t BOOTLOADER_SECTION BOOT2_GENERIC_03H[256] = {
  0x00, 0xb5, 0x0c, 0x4b, 0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61,
  0x0a, 0x49, 0x19, 0x60, 0x0a, 0x49, 0x0b, 0x48, 0x01, 0x60, 0x00, 0x21,
  0x59, 0x60, 0x01, 0x21, 0x99, 0x60, 0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0,
  0x00, 0x47, 0x07, 0x48, 0x07, 0x49, 0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3,
  0x08, 0x88, 0x08, 0x47, 0x00, 0x00, 0x00, 0x18, 0x00, 0x03, 0x1f, 0x00,
  0x18, 0x02, 0x00, 0x03, 0xf4, 0x00, 0x00, 0x18, 0x00, 0x01, 0x00, 0x10,
  0x08, 0xed, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0xec, 0x21, 0x0d
};

#else

uint8_t BOOTLOADER_SECTION BOOT2_W25Q080[256] = {
  0x00, 0xb5, 0x32, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21,
  0x88, 0x43, 0x98, 0x60, 0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2e, 0x4b,
  0x00, 0x21, 0x99, 0x60, 0x04, 0x21, 0x59, 0x61, 0x01, 0x21, 0xf0, 0x22,
  0x99, 0x50, 0x2b, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
  0x00, 0xf0, 0x44, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x14, 0xd0, 0x06, 0x21,
  0x19, 0x66, 0x00, 0xf0, 0x34, 0xf8, 0x19, 0x6e, 0x01, 0x21, 0x19, 0x66,
  0x00, 0x20, 0x18, 0x66, 0x1a, 0x66, 0x00, 0xf0, 0x2c, 0xf8, 0x19, 0x6e,
  0x19, 0x6e, 0x19, 0x6e, 0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21,
  0x08, 0x42, 0xf9, 0xd1, 0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60,
  0x00, 0x21, 0x59, 0x60, 0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21,
  0x99, 0x60, 0xeb, 0x21, 0x19, 0x66, 0xa0, 0x21, 0x19, 0x66, 0x00, 0xf0,
  0x12, 0xf8, 0x00, 0x21, 0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60,
  0x01, 0x21, 0x99, 0x60, 0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47,
  0x12, 0x48, 0x13, 0x49, 0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88,
  0x08, 0x47, 0x03, 0xb5, 0x99, 0x6a, 0x04, 0x20, 0x01, 0x42, 0xfb, 0xd0,
  0x01, 0x20, 0x01, 0x42, 0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66,
  0x18, 0x66, 0xff, 0xf7, 0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd,
  0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00,
  0x00, 0x03, 0x5f, 0x00, 0x21, 0x22, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x18,
  0x22, 0x20, 0x00, 0xa0, 0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x0b, 0x8f, 0xd5
};

#endif
