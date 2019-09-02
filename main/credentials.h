/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

// UPDATE WITH YOUR TTN KEYS AND ADDR.
//static const PROGMEM u1_t NWKSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
//static const u1_t PROGMEM APPSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
//static const u4_t DEVADDR = 0x26010000 ; // <-- Change this address for every node!

static const PROGMEM u1_t NWKSKEY[16] = { 0xA5, 0xA6, 0x71, 0x8A, 0x3B, 0x47, 0x35, 0x15, 0xDE, 0x80, 0xB1, 0xA3, 0x07, 0xB3, 0x2B, 0xC9 };
static const u1_t PROGMEM APPSKEY[16] = { 0x50, 0x6E, 0xDC, 0xA4, 0xEE, 0xB8, 0x22, 0xC5, 0x7C, 0xB8, 0x24, 0x10, 0x42, 0x9D, 0x15, 0xE2 };
static const u4_t DEVADDR = 0x26011A24 ; // <-- Change this address for every node!

#endif

#ifdef USE_OTAA
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    static const u1_t PROGMEM DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    static const u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
#endif
