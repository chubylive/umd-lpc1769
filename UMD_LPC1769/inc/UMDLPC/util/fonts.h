/* fonts.h
 *
 * Declares an 8x8 and 16x16 font
 *
 */

#ifndef __FONTS_h_
#define __FONTS_h_

#include <stdint.h>

const uint8_t FONT_8x8[784] PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // space 0x20
0x30,0x78,0x78,0x30,0x30,0x00,0x30,0x00, // !
0x6C,0x6C,0x6C,0x00,0x00,0x00,0x00,0x00, // "
0x6C,0x6C,0xFE,0x6C,0xFE,0x6C,0x6C,0x00, // #
0x18,0x3E,0x60,0x3C,0x06,0x7C,0x18,0x00, // $
0x00,0x63,0x66,0x0C,0x18,0x33,0x63,0x00, // %
0x1C,0x36,0x1C,0x3B,0x6E,0x66,0x3B,0x00, // &
0x30,0x30,0x60,0x00,0x00,0x00,0x00,0x00, // '
0x0C,0x18,0x30,0x30,0x30,0x18,0x0C,0x00, // (
0x30,0x18,0x0C,0x0C,0x0C,0x18,0x30,0x00, // )
0x00,0x66,0x3C,0xFF,0x3C,0x66,0x00,0x00, // *
0x00,0x30,0x30,0xFC,0x30,0x30,0x00,0x00, // +
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30, // ,
0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00, // -
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00, // .
0x03,0x06,0x0C,0x18,0x30,0x60,0x40,0x00, // ' (forward slash)
0x3E,0x63,0x63,0x6B,0x63,0x63,0x3E,0x00, // 0 0x30
0x18,0x38,0x58,0x18,0x18,0x18,0x7E,0x00, // 1
0x3C,0x66,0x06,0x1C,0x30,0x66,0x7E,0x00, // 2
0x3C,0x66,0x06,0x1C,0x06,0x66,0x3C,0x00, // 3
0x0E,0x1E,0x36,0x66,0x7F,0x06,0x0F,0x00, // 4
0x7E,0x60,0x7C,0x06,0x06,0x66,0x3C,0x00, // 5
0x1C,0x30,0x60,0x7C,0x66,0x66,0x3C,0x00, // 6
0x7E,0x66,0x06,0x0C,0x18,0x18,0x18,0x00, // 7
0x3C,0x66,0x66,0x3C,0x66,0x66,0x3C,0x00, // 8
0x3C,0x66,0x66,0x3E,0x06,0x0C,0x38,0x00, // 9
0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x00, // :
0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x30, // ;
0x0C,0x18,0x30,0x60,0x30,0x18,0x0C,0x00, // <
0x00,0x00,0x7E,0x00,0x00,0x7E,0x00,0x00, // =
0x30,0x18,0x0C,0x06,0x0C,0x18,0x30,0x00, // >
0x3C,0x66,0x06,0x0C,0x18,0x00,0x18,0x00, // ?
0x3E,0x63,0x6F,0x69,0x6F,0x60,0x3E,0x00, // @ 0x40
0x18,0x3C,0x66,0x66,0x7E,0x66,0x66,0x00, // A
0x7E,0x33,0x33,0x3E,0x33,0x33,0x7E,0x00, // B
0x1E,0x33,0x60,0x60,0x60,0x33,0x1E,0x00, // C
0x7C,0x36,0x33,0x33,0x33,0x36,0x7C,0x00, // D
0x7F,0x31,0x34,0x3C,0x34,0x31,0x7F,0x00, // E
0x7F,0x31,0x34,0x3C,0x34,0x30,0x78,0x00, // F
0x1E,0x33,0x60,0x60,0x67,0x33,0x1F,0x00, // G
0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x00, // H
0x3C,0x18,0x18,0x18,0x18,0x18,0x3C,0x00, // I
0x0F,0x06,0x06,0x06,0x66,0x66,0x3C,0x00, // J
0x73,0x33,0x36,0x3C,0x36,0x33,0x73,0x00, // K
0x78,0x30,0x30,0x30,0x31,0x33,0x7F,0x00, // L
0x63,0x77,0x7F,0x7F,0x6B,0x63,0x63,0x00, // M
0x63,0x73,0x7B,0x6F,0x67,0x63,0x63,0x00, // N
0x3E,0x63,0x63,0x63,0x63,0x63,0x3E,0x00, // O
0x7E,0x33,0x33,0x3E,0x30,0x30,0x78,0x00, // P 0x50
0x3C,0x66,0x66,0x66,0x6E,0x3C,0x0E,0x00, // Q
0x7E,0x33,0x33,0x3E,0x36,0x33,0x73,0x00, // R
0x3C,0x66,0x30,0x18,0x0C,0x66,0x3C,0x00, // S
0x7E,0x5A,0x18,0x18,0x18,0x18,0x3C,0x00, // T
0x66,0x66,0x66,0x66,0x66,0x66,0x7E,0x00, // U
0x66,0x66,0x66,0x66,0x66,0x3C,0x18,0x00, // V
0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00, // W
0x63,0x63,0x36,0x1C,0x1C,0x36,0x63,0x00, // X
0x66,0x66,0x66,0x3C,0x18,0x18,0x3C,0x00, // Y
0x7F,0x63,0x46,0x0C,0x19,0x33,0x7F,0x00, // Z
0x3C,0x30,0x30,0x30,0x30,0x30,0x3C,0x00, // [
0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x00, // \ (back slash)
0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00, // ]
0x08,0x1C,0x36,0x63,0x00,0x00,0x00,0x00, // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF, // _
0x18,0x18,0x0C,0x00,0x00,0x00,0x00,0x00, // ` 0x60
0x00,0x00,0x3C,0x06,0x3E,0x66,0x3B,0x00, // a
0x70,0x30,0x3E,0x33,0x33,0x33,0x6E,0x00, // b
0x00,0x00,0x3C,0x66,0x60,0x66,0x3C,0x00, // c
0x0E,0x06,0x3E,0x66,0x66,0x66,0x3B,0x00, // d
0x00,0x00,0x3C,0x66,0x7E,0x60,0x3C,0x00, // e
0x1C,0x36,0x30,0x78,0x30,0x30,0x78,0x00, // f
0x00,0x00,0x3B,0x66,0x66,0x3E,0x06,0x7C, // g
0x70,0x30,0x36,0x3B,0x33,0x33,0x73,0x00, // h
0x18,0x00,0x38,0x18,0x18,0x18,0x3C,0x00, // i
0x06,0x00,0x06,0x06,0x06,0x66,0x66,0x3C, // j
0x70,0x30,0x33,0x36,0x3C,0x36,0x73,0x00, // k
0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00, // l
0x00,0x00,0x66,0x7F,0x7F,0x6B,0x63,0x00, // m
0x00,0x00,0x7C,0x66,0x66,0x66,0x66,0x00, // n
0x00,0x00,0x3C,0x66,0x66,0x66,0x3C,0x00, // o
0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x78, // p 0x70
0x00,0x00,0x3B,0x66,0x66,0x3E,0x06,0x0F, // q
0x00,0x00,0x6E,0x3B,0x33,0x30,0x78,0x00, // r
0x00,0x00,0x3E,0x60,0x3C,0x06,0x7C,0x00, // s
0x08,0x18,0x3E,0x18,0x18,0x1A,0x0C,0x00, // t
0x00,0x00,0x66,0x66,0x66,0x66,0x3B,0x00, // u
0x00,0x00,0x66,0x66,0x66,0x3C,0x18,0x00, // v
0x00,0x00,0x63,0x6B,0x7F,0x7F,0x36,0x00, // w
0x00,0x00,0x63,0x36,0x1C,0x36,0x63,0x00, // x
0x00,0x00,0x66,0x66,0x66,0x3E,0x06,0x7C, // y
0x00,0x00,0x7E,0x4C,0x18,0x32,0x7E,0x00, // z
0x0E,0x18,0x18,0x70,0x18,0x18,0x0E,0x00, // {
0x0C,0x0C,0x0C,0x00,0x0C,0x0C,0x0C,0x00, // |
0x70,0x18,0x18,0x0E,0x18,0x18,0x70,0x00, // }
0x3B,0x6E,0x00,0x00,0x00,0x00,0x00,0x00, // ~
0x1C,0x36,0x36,0x1C,0x00,0x00,0x00,0x00, // DEL
0x60,0x90,0x90,0x60,0x00,0x00,0x00,0x00, // DEGREE use
0x22,0x77,0x7f,0x7f,0x3e,0x1c,0x08,0x00  //HEART use:
};

const uint8_t FONT_16x16[3040] PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //  <Space>
0x00,0x00,0x00,0x00,0x07,0x00,0x0F,0x80,0x0F,0x80,0x0F,
0x80,0x0F,0x80,0x0F,0x80,0x07,0x00,0x07,0x00,0x00,0x00,
0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00, // !
0x00,0x00,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x06,
0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // "
0x00,0x00,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x7F,0xFE,0x7F,
0xFE,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x7F,0xFE,
0x7F,0xFE,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x00,0x00, // #
0x00,0x00,0x02,0x40,0x02,0x40,0x0F,0xF8,0x1F,0xF8,0x1A,
0x40,0x1A,0x40,0x1F,0xF0,0x0F,0xF8,0x02,0x58,0x02,0x58,
0x1F,0xF8,0x1F,0xF0,0x02,0x40,0x02,0x40,0x00,0x00, // $
0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x10,0x0E,0x30,0x0E,
0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,0x0E,0x70,
0x0C,0x70,0x08,0x70,0x00,0x00,0x00,0x00,0x00,0x00, // %
0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x19,0x80,0x19,
0x80,0x0F,0x00,0x0F,0x08,0x0F,0x98,0x19,0xF8,0x18,0xF0,
0x18,0xE0,0x19,0xF0,0x0F,0x98,0x00,0x00,0x00,0x00, // &
0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // '
0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0xC0,0x03,0x80,0x07,
0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x07,0x00,
0x03,0x80,0x01,0xC0,0x00,0xF0,0x00,0x00,0x00,0x00, // (
0x00,0x00,0x00,0x00,0x0F,0x00,0x03,0x80,0x01,0xC0,0x00,
0xE0,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0xE0,
0x01,0xC0,0x03,0x80,0x0F,0x00,0x00,0x00,0x00,0x00, // )
0x00,0x00,0x00,0x00,0x01,0x80,0x11,0x88,0x09,0x90,0x07,
0xE0,0x07,0xE0,0x3F,0xFC,0x3F,0xFC,0x07,0xE0,0x07,0xE0,
0x09,0x90,0x11,0x88,0x01,0x80,0x00,0x00,0x00,0x00, // *
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x01,
0x80,0x01,0x80,0x0F,0xF0,0x0F,0xF0,0x01,0x80,0x01,0x80,
0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x00,0x07,0x00,0x07,0x00,0x0E,0x00,0x00,0x00, // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x1F,0xF8,0x1F,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00, // ,
0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0E,0x00,
0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,
0x07,0x00,0x0E,0x00,0x1C,0x00,0x00,0x00,0x00,0x00, // '/
0x00,0x00,0x00,0x00,0x0F,0xF0,0x1C,0x38,0x1C,0x78,0x1C,
0xF8,0x1C,0xF8,0x1D,0xB8,0x1D,0xB8,0x1F,0x38,0x1F,0x38,
0x1E,0x38,0x1C,0x38,0x0F,0xF0,0x00,0x00,0x00,0x00, // 0
0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x03,0x80,0x1F,
0x80,0x1F,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,
0x03,0x80,0x03,0x80,0x1F,0xF0,0x00,0x00,0x00,0x00, // 1
0x00,0x00,0x00,0x00,0x0F,0xE0,0x1C,0x70,0x1C,0x38,0x00,
0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,
0x0E,0x38,0x1C,0x38,0x1F,0xF8,0x00,0x00,0x00,0x00, // 2
0x00,0x00,0x00,0x00,0x0F,0xE0,0x1C,0x70,0x1C,0x38,0x00,
0x38,0x00,0x70,0x03,0xC0,0x03,0xC0,0x00,0x70,0x00,0x38,
0x1C,0x38,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // 3
0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0xE0,0x03,0xE0,0x06,
0xE0,0x0C,0xE0,0x18,0xE0,0x1F,0xF8,0x1F,0xF8,0x00,0xE0,
0x00,0xE0,0x00,0xE0,0x03,0xF8,0x00,0x00,0x00,0x00, // 4
0x00,0x00,0x00,0x00,0x1F,0xF8,0x1C,0x00,0x1C,0x00,0x1C,
0x00,0x1C,0x00,0x1F,0xE0,0x1F,0xF0,0x00,0x78,0x00,0x38,
0x1C,0x38,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // 5
0x00,0x00,0x00,0x00,0x03,0xE0,0x07,0x00,0x0E,0x00,0x1C,
0x00,0x1C,0x00,0x1F,0xF0,0x1F,0xF8,0x1C,0x38,0x1C,0x38,
0x1C,0x38,0x1C,0x38,0x0F,0xF0,0x00,0x00,0x00,0x00, // 6
0x00,0x00,0x00,0x00,0x1F,0xFC,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,
0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00, // 7
0x00,0x00,0x00,0x00,0x0F,0xF0,0x1C,0x38,0x1C,0x38,0x1C,
0x38,0x1F,0x38,0x07,0xE0,0x07,0xE0,0x1C,0xF8,0x1C,0x38,
0x1C,0x38,0x1C,0x38,0x0F,0xF0,0x00,0x00,0x00,0x00, // 8
0x00,0x00,0x00,0x00,0x0F,0xF0,0x1C,0x38,0x1C,0x38,0x1C,
0x38,0x1C,0x38,0x1F,0xF8,0x0F,0xF8,0x00,0x38,0x00,0x38,
0x00,0x70,0x00,0xE0,0x07,0xC0,0x00,0x00,0x00,0x00, // 9
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,
0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,
0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // :
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,
0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,
0x03,0x80,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ;
0x00,0x00,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,
0x00,0x0E,0x00,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,
0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x00, // <
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
0xFC,0x3F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xFC,0x3F,0xFC,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // =
0x00,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x01,
0xC0,0x00,0xE0,0x00,0x70,0x00,0x70,0x00,0xE0,0x01,0xC0,
0x03,0x80,0x07,0x00,0x0E,0x00,0x1C,0x00,0x00,0x00, // >
0x00,0x00,0x03,0xC0,0x0F,0xF0,0x1E,0x78,0x18,0x38,0x00,
0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x01,0xC0,0x00,0x00,
0x00,0x00,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x00,0x00, // ?
0x00,0x00,0x0F,0xF8,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0xFC,0x1C,0xFC,0x1C,0xFC,0x1C,0xFC,0x1C,0x00,
0x1C,0x00,0x1C,0x00,0x1F,0xF0,0x07,0xF8,0x00,0x00, // @
0x00,0x00,0x00,0x00,0x03,0xC0,0x07,0xE0,0x0E,0x70,0x1C,
0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1F,0xF8,0x1C,0x38,
0x1C,0x38,0x1C,0x38,0x1C,0x38,0x00,0x00,0x00,0x00, // A
0x00,0x00,0x00,0x00,0x1F,0xF0,0x0E,0x38,0x0E,0x38,0x0E,
0x38,0x0E,0x38,0x0F,0xF0,0x0F,0xF0,0x0E,0x38,0x0E,0x38,
0x0E,0x38,0x0E,0x38,0x1F,0xF0,0x00,0x00,0x00,0x00, // B
0x00,0x00,0x00,0x00,0x07,0xF0,0x0E,0x38,0x1C,0x38,0x1C,
0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,
0x1C,0x38,0x0E,0x38,0x07,0xF0,0x00,0x00,0x00,0x00, // C
0x00,0x00,0x00,0x00,0x1F,0xE0,0x0E,0x70,0x0E,0x38,0x0E,
0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,
0x0E,0x38,0x0E,0x70,0x1F,0xE0,0x00,0x00,0x00,0x00, // D
0x00,0x00,0x00,0x00,0x1F,0xF8,0x0E,0x18,0x0E,0x08,0x0E,
0x00,0x0E,0x30,0x0F,0xF0,0x0F,0xF0,0x0E,0x30,0x0E,0x00,
0x0E,0x08,0x0E,0x18,0x1F,0xF8,0x00,0x00,0x00,0x00, // E
0x00,0x00,0x00,0x00,0x1F,0xF8,0x0E,0x18,0x0E,0x08,0x0E,
0x00,0x0E,0x30,0x0F,0xF0,0x0F,0xF0,0x0E,0x30,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x1F,0x00,0x00,0x00,0x00,0x00, // F
0x00,0x00,0x00,0x00,0x07,0xF0,0x0E,0x38,0x1C,0x38,0x1C,
0x38,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0xF8,0x1C,0x38,
0x1C,0x38,0x0E,0x38,0x07,0xF8,0x00,0x00,0x00,0x00, // G
0x00,0x00,0x00,0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,
0x70,0x1C,0x70,0x1F,0xF0,0x1F,0xF0,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x1C,0x70,0x00,0x00,0x00,0x00, // H
0x00,0x00,0x00,0x00,0x0F,0xE0,0x03,0x80,0x03,0x80,0x03,
0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,
0x03,0x80,0x03,0x80,0x0F,0xE0,0x00,0x00,0x00,0x00, // I
0x00,0x00,0x00,0x00,0x01,0xFC,0x00,0x70,0x00,0x70,0x00,
0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x38,0x70,0x38,0x70,
0x38,0x70,0x38,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // J
0x00,0x00,0x00,0x00,0x1E,0x38,0x0E,0x38,0x0E,0x70,0x0E,
0xE0,0x0F,0xC0,0x0F,0x80,0x0F,0x80,0x0F,0xC0,0x0E,0xE0,
0x0E,0x70,0x0E,0x38,0x1E,0x38,0x00,0x00,0x00,0x00, // K
0x00,0x00,0x00,0x00,0x1F,0x00,0x0E,0x00,0x0E,0x00,0x0E,
0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x08,
0x0E,0x18,0x0E,0x38,0x1F,0xF8,0x00,0x00,0x00,0x00, // L
0x00,0x00,0x00,0x00,0x1C,0x1C,0x1E,0x3C,0x1F,0x7C,0x1F,
0xFC,0x1F,0xFC,0x1D,0xDC,0x1C,0x9C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00, // M
0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1E,0x1C,0x1F,
0x1C,0x1F,0x9C,0x1D,0xDC,0x1C,0xFC,0x1C,0x7C,0x1C,0x3C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00, // N
0x00,0x00,0x00,0x00,0x03,0xE0,0x07,0xF0,0x0E,0x38,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x0E,0x38,0x07,0xF0,0x03,0xE0,0x00,0x00,0x00,0x00, // O
0x00,0x00,0x00,0x00,0x1F,0xF0,0x0E,0x38,0x0E,0x38,0x0E,
0x38,0x0E,0x38,0x0F,0xF0,0x0F,0xF0,0x0E,0x00,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x1F,0x00,0x00,0x00,0x00,0x00, // P
0x00,0x00,0x00,0x00,0x03,0xE0,0x0F,0x78,0x0E,0x38,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x7C,0x1C,0xFC,
0x0F,0xF8,0x0F,0xF8,0x00,0x38,0x00,0xFC,0x00,0x00, // Q
0x00,0x00,0x00,0x00,0x1F,0xF0,0x0E,0x38,0x0E,0x38,0x0E,
0x38,0x0E,0x38,0x0F,0xF0,0x0F,0xF0,0x0E,0x70,0x0E,0x38,
0x0E,0x38,0x0E,0x38,0x1E,0x38,0x00,0x00,0x00,0x00, // R
0x00,0x00,0x00,0x00,0x0F,0xF0,0x1C,0x38,0x1C,0x38,0x1C,
0x38,0x1C,0x00,0x0F,0xE0,0x07,0xF0,0x00,0x38,0x1C,0x38,
0x1C,0x38,0x1C,0x38,0x0F,0xF0,0x00,0x00,0x00,0x00, // S
0x00,0x00,0x00,0x00,0x1F,0xFC,0x19,0xCC,0x11,0xC4,0x01,
0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,
0x01,0xC0,0x01,0xC0,0x07,0xF0,0x00,0x00,0x00,0x00, // T
0x00,0x00,0x00,0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,
0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // U
0x00,0x00,0x00,0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,
0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x0E,0xE0,0x07,0xC0,0x03,0x80,0x00,0x00,0x00,0x00, // V
0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x9C,0x1C,0x9C,0x1C,0x9C,0x0F,0xF8,
0x0F,0xF8,0x07,0x70,0x07,0x70,0x00,0x00,0x00,0x00, // W
0x00,0x00,0x00,0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x0E,
0xE0,0x07,0xC0,0x03,0x80,0x03,0x80,0x07,0xC0,0x0E,0xE0,
0x1C,0x70,0x1C,0x70,0x1C,0x70,0x00,0x00,0x00,0x00, // X
0x00,0x00,0x00,0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,
0x70,0x1C,0x70,0x0E,0xE0,0x07,0xC0,0x03,0x80,0x03,0x80,
0x03,0x80,0x03,0x80,0x0F,0xE0,0x00,0x00,0x00,0x00, // Y
0x00,0x00,0x00,0x00,0x1F,0xF8,0x1C,0x38,0x18,0x38,0x10,
0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,0x0E,0x08,
0x1C,0x18,0x1C,0x38,0x1F,0xF8,0x00,0x00,0x00,0x00, // Z
0x00,0x00,0x00,0x00,0x07,0xF0,0x07,0x00,0x07,0x00,0x07,
0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
0x07,0x00,0x07,0x00,0x07,0xF0,0x00,0x00,0x00,0x00, // [
0x00,0x00,0x00,0x00,0x10,0x00,0x18,0x00,0x1C,0x00,0x0E,
0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,
0x00,0x38,0x00,0x1C,0x00,0x07,0x00,0x00,0x00,0x00, // <Backslash>
0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x70,0x00,0x70,0x00,
0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,
0x00,0x70,0x00,0x70,0x07,0xF0,0x00,0x00,0x00,0x00, // ]
0x00,0x00,0x01,0x80,0x03,0xC0,0x07,0xE0,0x0E,0x70,0x1C,
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0x7F,0xFF, // _
0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x07,0x00,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // '
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xE0,0x00,0x70,0x00,0x70,0x0F,0xF0,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x0F,0xD8,0x00,0x00,0x00,0x00, // a
0x00,0x00,0x00,0x00,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
0x00,0x0F,0xF0,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,
0x0E,0x38,0x0E,0x38,0x1B,0xF0,0x00,0x00,0x00,0x00, // b
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xE0,0x1C,0x70,0x1C,0x70,0x1C,0x00,0x1C,0x00,
0x1C,0x70,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // c
0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x70,0x00,0x70,0x00,
0x70,0x0F,0xF0,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x0F,0xD8,0x00,0x00,0x00,0x00, // d
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xE0,0x1C,0x70,0x1C,0x70,0x1F,0xF0,0x1C,0x00,
0x1C,0x70,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // e
0x00,0x00,0x00,0x00,0x03,0xE0,0x07,0x70,0x07,0x70,0x07,
0x00,0x07,0x00,0x1F,0xE0,0x1F,0xE0,0x07,0x00,0x07,0x00,
0x07,0x00,0x07,0x00,0x1F,0xC0,0x00,0x00,0x00,0x00, // f
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xD8,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x0F,0xF0,0x07,0xF0,0x00,0x70,0x1C,0x70,0x0F,0xE0, // g
0x00,0x00,0x00,0x00,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
0x00,0x0E,0xF0,0x0F,0x38,0x0F,0x38,0x0E,0x38,0x0E,0x38,
0x0E,0x38,0x0E,0x38,0x1E,0x38,0x00,0x00,0x00,0x00, // h
0x00,0x00,0x00,0x00,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x00,
0x00,0x0F,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,
0x01,0xC0,0x01,0xC0,0x0F,0xF8,0x00,0x00,0x00,0x00, // i
0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
0x00,0x03,0xF0,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,
0x00,0x70,0x00,0x70,0x1C,0x70,0x0C,0xF0,0x07,0xE0, // j
0x00,0x00,0x00,0x00,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
0x00,0x0E,0x38,0x0E,0x70,0x0E,0xE0,0x0F,0xC0,0x0E,0xE0,
0x0E,0x70,0x0E,0x38,0x1E,0x38,0x00,0x00,0x00,0x00, // k
0x00,0x00,0x00,0x00,0x0F,0xC0,0x01,0xC0,0x01,0xC0,0x01,
0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,
0x01,0xC0,0x01,0xC0,0x0F,0xF8,0x00,0x00,0x00,0x00, // l
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xF8,0x1C,0x9C,0x1C,0x9C,0x1C,0x9C,0x1C,0x9C,
0x1C,0x9C,0x1C,0x9C,0x1C,0x9C,0x00,0x00,0x00,0x00, // m
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xE0,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x1C,0x70,0x00,0x00,0x00,0x00, // n
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xE0,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // o
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1B,0xF0,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,
0x0E,0x38,0x0F,0xF0,0x0E,0x00,0x0E,0x00,0x1F,0x00, // p
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xB0,0x38,0xE0,0x38,0xE0,0x38,0xE0,0x38,0xE0,
0x38,0xE0,0x1F,0xE0,0x00,0xE0,0x00,0xE0,0x01,0xF0, // q
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1E,0xF0,0x0F,0xF8,0x0F,0x38,0x0E,0x00,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x1F,0x00,0x00,0x00,0x00,0x00, // r
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xE0,0x1C,0x30,0x1C,0x30,0x0F,0x80,0x03,0xE0,
0x18,0x70,0x18,0x70,0x0F,0xE0,0x00,0x00,0x00,0x00, // s
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x07,
0x00,0x1F,0xF0,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
0x07,0x70,0x07,0x70,0x03,0xE0,0x00,0x00,0x00,0x00, // t
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x1C,0x70,0x1C,0x70,0x0F,0xD8,0x00,0x00,0x00,0x00, // u
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x70,
0x0E,0xE0,0x07,0xC0,0x03,0x80,0x00,0x00,0x00,0x00, // v
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x9C,0x1C,0x9C,
0x0F,0xF8,0x07,0x70,0x07,0x70,0x00,0x00,0x00,0x00, // w
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0xE0,0x1C,0xE0,0x0F,0xC0,0x07,0x80,0x07,0x80,
0x0F,0xC0,0x1C,0xE0,0x1C,0xE0,0x00,0x00,0x00,0x00, // x
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,
0x07,0xF0,0x03,0xE0,0x00,0xE0,0x01,0xC0,0x1F,0x80, // y
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xE0,0x18,0xE0,0x11,0xC0,0x03,0x80,0x07,0x00,
0x0E,0x20,0x1C,0x60,0x1F,0xE0,0x00,0x00,0x00,0x00, // z
0x00,0x00,0x00,0x00,0x01,0xF8,0x03,0x80,0x03,0x80,0x03,
0x80,0x07,0x00,0x1C,0x00,0x1C,0x00,0x07,0x00,0x03,0x80,
0x03,0x80,0x03,0x80,0x01,0xF8,0x00,0x00,0x00,0x00, // {
0x00,0x00,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,
0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,
0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x00,0x00, // |
0x00,0x00,0x00,0x00,0x1F,0x80,0x01,0xC0,0x01,0xC0,0x01,
0xC0,0x00,0xE0,0x00,0x38,0x00,0x38,0x00,0xE0,0x01,0xC0,
0x01,0xC0,0x01,0xC0,0x1F,0x80,0x00,0x00,0x00,0x00, // }
0x00,0x00,0x00,0x00,0x1F,0x1C,0x3B,0x9C,0x39,0xDC,0x38,
0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ~
};

#endif
