/*
 *
 * Arial_22_Bold
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial_22_Bold.h
 * Date                : 08.07.2017
 * Font size in bytes  : 21244
 * Font width          : 10
 * Font height         : 22
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
//#include <avr/pgmspace.h>

#ifndef ARIAL_22_BOLD_H
#define ARIAL_22_BOLD_H

#define ARIAL_22_BOLD_WIDTH 10
#define ARIAL_22_BOLD_HEIGHT 22

const static uint8_t Arial_22_Bold[] PROGMEM = {
    0x52, 0xFC, // size
    0x0A, // width
    0x16, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x03, 0x08, 0x0C, 0x0A, 0x10, 0x0F, 0x03, 0x05, 0x05, 
    0x08, 0x0B, 0x03, 0x06, 0x03, 0x06, 0x0A, 0x07, 0x0A, 0x0A, 
    0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x03, 0x03, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x14, 0x0F, 0x0D, 0x0E, 0x0D, 0x0C, 0x0A, 0x0F, 
    0x0C, 0x03, 0x0A, 0x0D, 0x0A, 0x0F, 0x0C, 0x0F, 0x0C, 0x10, 
    0x0D, 0x0D, 0x0D, 0x0C, 0x0F, 0x15, 0x0D, 0x0D, 0x0C, 0x06, 
    0x06, 0x06, 0x0B, 0x0C, 0x05, 0x0B, 0x0B, 0x0A, 0x0B, 0x0A, 
    0x07, 0x0B, 0x0B, 0x03, 0x05, 0x0A, 0x03, 0x11, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x07, 0x0A, 0x06, 0x0B, 0x0B, 0x13, 0x0A, 0x0B, 
    0x09, 0x07, 0x02, 0x07, 0x0C, 0x0C, 
    
    // font data
    0xFE, 0xFE, 0xFE, 0xC7, 0xDF, 0xC7, 0x04, 0x04, 0x04, // 33
    0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0xC0, 0xC0, 0xC0, 0xF0, 0xFE, 0xCE, 0xC0, 0xC0, 0xF0, 0xFE, 0xCE, 0xC0, 0x18, 0xD8, 0xFE, 0x7F, 0x19, 0x18, 0xD8, 0xFE, 0x7F, 0x19, 0x18, 0x18, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 35
    0xF8, 0xFC, 0xFE, 0x86, 0xFF, 0xFF, 0x06, 0x1E, 0x1C, 0x18, 0x60, 0xE1, 0xE3, 0x83, 0xFF, 0xFF, 0x87, 0xFF, 0xFE, 0x7C, 0x00, 0x00, 0x04, 0x04, 0x1C, 0x1C, 0x04, 0x04, 0x00, 0x00, // 36
    0xF8, 0xFE, 0x06, 0x06, 0xFE, 0xF8, 0x00, 0x00, 0xC0, 0xF0, 0x7C, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x83, 0xE0, 0x78, 0x1E, 0x07, 0x01, 0xF8, 0xFE, 0x06, 0x06, 0xFE, 0xF8, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, // 37
    0x00, 0x00, 0x38, 0xFC, 0xFE, 0xE6, 0xC6, 0xC6, 0xFE, 0x7C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x38, 0xFE, 0xFF, 0xC7, 0x83, 0x83, 0x8F, 0xDF, 0xFE, 0xFC, 0xF8, 0xFC, 0xDC, 0xC4, 0x80, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, // 38
    0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x80, 0xF0, 0xFC, 0x3E, 0x02, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x3C, 0x7C, 0x40, // 40
    0x02, 0x3E, 0xFC, 0xF0, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0x40, 0x7C, 0x3C, 0x0C, 0x00, // 41
    0x18, 0x98, 0xD0, 0x7E, 0x7E, 0xD0, 0x98, 0x18, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x7F, 0x7F, 0x7F, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x64, 0x3C, 0x1C, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x04, 0x04, 0x04, // 46
    0x00, 0x00, 0x80, 0xF8, 0x7E, 0x06, 0x80, 0xF8, 0x7F, 0x07, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 47
    0xF0, 0xFC, 0xFC, 0x0E, 0x06, 0x06, 0x0E, 0xFC, 0xFC, 0xF0, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 48
    0xE0, 0x70, 0x70, 0x38, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 49
    0x18, 0x1C, 0x1E, 0x0E, 0x06, 0x06, 0x8E, 0xFC, 0xFC, 0x70, 0x80, 0xE0, 0xF0, 0xF8, 0xBE, 0x9F, 0x87, 0x83, 0x81, 0x80, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 50
    0x10, 0x1C, 0x1C, 0x0E, 0x86, 0xC6, 0xFE, 0xFC, 0x78, 0x00, 0x60, 0xE0, 0xE0, 0xC0, 0x81, 0x81, 0xC3, 0xFF, 0xFE, 0x3C, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x38, 0x3E, 0x37, 0x33, 0x30, 0x30, 0xFF, 0xFF, 0xFF, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, // 52
    0x80, 0xF0, 0xFE, 0xFE, 0xCE, 0xC6, 0xC6, 0xC6, 0x86, 0x00, 0x61, 0xE1, 0xE1, 0xC0, 0x80, 0x80, 0xC1, 0xFF, 0x7F, 0x3E, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 53
    0xF0, 0xFC, 0xFC, 0x0E, 0x86, 0x86, 0x8E, 0x9E, 0x1C, 0x18, 0x3F, 0xFF, 0xFF, 0xC3, 0x81, 0x81, 0xC3, 0xFF, 0xFF, 0x3C, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 54
    0x06, 0x06, 0x06, 0x06, 0x86, 0xE6, 0xF6, 0x7E, 0x1E, 0x0E, 0x00, 0x00, 0xE0, 0xFE, 0xFF, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x78, 0xFC, 0xFC, 0x8E, 0x06, 0x06, 0x8E, 0xFC, 0xFC, 0x78, 0x78, 0xFC, 0xFF, 0xC7, 0x83, 0x83, 0xC7, 0xFF, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 56
    0xF0, 0xFC, 0xFC, 0x0E, 0x06, 0x06, 0x0E, 0xFC, 0xFC, 0xF0, 0x60, 0xE3, 0xE7, 0xC7, 0x86, 0x86, 0xC3, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 57
    0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0x04, 0x04, 0x04, // 58
    0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0x64, 0x3C, 0x1C, // 59
    0x80, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0x70, 0x70, 0x70, 0x38, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x1C, 0x1C, 0x38, 0x38, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x38, 0x70, 0x70, 0x70, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x70, 0x38, 0x38, 0x38, 0x1C, 0x1C, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x18, 0x1C, 0x1C, 0x0E, 0x06, 0x06, 0x06, 0x8E, 0xFC, 0xFC, 0x70, 0x00, 0x00, 0x00, 0x00, 0xDC, 0xDE, 0xDF, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0xC0, 0xE0, 0x78, 0x18, 0x8C, 0xCC, 0xE6, 0xE6, 0xE6, 0xC6, 0xE6, 0xE6, 0xEE, 0x2C, 0x1C, 0x78, 0xF0, 0xC0, 0x00, 0x7E, 0xFF, 0x81, 0x00, 0x7E, 0xFF, 0xFF, 0xC1, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, 0x87, 0xC0, 0xC0, 0x70, 0x3F, 0x0F, 0x00, 0x00, 0x0C, 0x1C, 0x38, 0x70, 0x60, 0x64, 0xC4, 0xC0, 0xC0, 0xC4, 0xC4, 0xC4, 0xC4, 0x60, 0x60, 0x70, 0x38, 0x18, 0x08, // 64
    0x00, 0x00, 0x00, 0x80, 0xF0, 0xFE, 0x7E, 0x0E, 0x7E, 0xFE, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF, 0x1F, 0x1F, 0x1C, 0x1C, 0x1C, 0x1F, 0x1F, 0xFF, 0xFC, 0xE0, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 65
    0xFE, 0xFE, 0xFE, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0xFE, 0xFC, 0x78, 0x00, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xFF, 0xFE, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 66
    0xC0, 0xF0, 0xF8, 0x3C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x3C, 0x38, 0x10, 0x0F, 0x3F, 0x7F, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x20, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 67
    0xFE, 0xFE, 0xFE, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0x3C, 0xFC, 0xF8, 0xE0, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0xFF, 0x7F, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 68
    0xFE, 0xFE, 0xFE, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x0E, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC0, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 69
    0xFE, 0xFE, 0xFE, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x0E, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xC0, 0xF0, 0xF8, 0x3C, 0x1C, 0x1E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x3C, 0x38, 0x10, 0x0F, 0x3F, 0x7F, 0xF8, 0xE0, 0xE0, 0xC0, 0xC0, 0xC7, 0xC7, 0xE7, 0xE7, 0xFF, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 71
    0xFE, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 72
    0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x38, 0xF8, 0xF8, 0xE0, 0xC0, 0xC0, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 74
    0xFE, 0xFE, 0xFE, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x3C, 0x1E, 0x0E, 0x06, 0x02, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x07, 0x1F, 0x3E, 0xF8, 0xF0, 0xC0, 0x80, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 75
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 76
    0xFE, 0xFE, 0xFE, 0x0E, 0xFE, 0xF8, 0x80, 0x00, 0x80, 0xF8, 0xFE, 0x0E, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0x7F, 0xFF, 0xF0, 0xFF, 0x7F, 0x03, 0x00, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 77
    0xFE, 0xFE, 0xFE, 0x7C, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x07, 0x1F, 0x7E, 0xF8, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 78
    0xC0, 0xF0, 0xF8, 0x3C, 0x1E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x3C, 0xF8, 0xF0, 0xC0, 0x0F, 0x3F, 0x7F, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xFE, 0xFE, 0xFE, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x9E, 0xFC, 0xFC, 0xF0, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xC0, 0xF0, 0xF8, 0x3C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0x3C, 0xF8, 0xF0, 0xC0, 0x00, 0x0F, 0x3F, 0x7F, 0xF0, 0xE0, 0xC0, 0xC0, 0xD0, 0xF8, 0xF0, 0xE0, 0xF0, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x0C, 0x0C, 0x04, // 81
    0xFE, 0xFE, 0xFE, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0xFE, 0xFC, 0x78, 0x00, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x0F, 0x1F, 0x7F, 0xF9, 0xF1, 0xC0, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, // 82
    0x00, 0x78, 0xFC, 0xFC, 0xDE, 0x8E, 0x8E, 0x8E, 0x8E, 0x1E, 0x3C, 0x3C, 0x30, 0x18, 0x78, 0xF8, 0xF1, 0xE1, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xFF, 0xFE, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 83
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xFE, 0xFE, 0xFE, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x3F, 0xFF, 0xFF, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 85
    0x06, 0x3E, 0xFE, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0xFE, 0x3E, 0x06, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFC, 0xE0, 0xFC, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x06, 0x7E, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0x1E, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0x7E, 0x06, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xF0, 0xFE, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0xFE, 0xF0, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 87
    0x00, 0x06, 0x0E, 0x3E, 0xFC, 0xF0, 0xC0, 0xF0, 0xFC, 0x3E, 0x0E, 0x06, 0x00, 0x80, 0xC0, 0xF0, 0xFC, 0x3E, 0x1F, 0x07, 0x1F, 0x3E, 0xFC, 0xF0, 0xC0, 0x80, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 88
    0x06, 0x0E, 0x3E, 0xFC, 0xF0, 0xC0, 0x00, 0xC0, 0xF0, 0xFC, 0x3E, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x0E, 0x0E, 0x0E, 0x0E, 0x8E, 0xEE, 0xFE, 0xFE, 0x3E, 0x1E, 0x0E, 0xE0, 0xF0, 0xF8, 0xFE, 0xDF, 0xCF, 0xC3, 0xC1, 0xC0, 0xC0, 0xC0, 0xC0, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 90
    0xFE, 0xFE, 0xFE, 0x0E, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x70, 0x70, 0x70, // 91
    0x06, 0x7E, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x7F, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, // 92
    0x0E, 0x0E, 0x0E, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x70, 0x70, 0x70, 0x7C, 0x7C, 0x7C, // 93
    0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x0E, 0x7E, 0xF8, 0xE0, 0x80, 0x00, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, // 95
    0x02, 0x06, 0x0E, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x70, 0xF8, 0xFC, 0x8C, 0x8C, 0x86, 0xC6, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, // 97
    0xFE, 0xFE, 0xFE, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0x3F, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 98
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0xC0, 0xE1, 0xE1, 0x21, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 99
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0xFE, 0xFE, 0xFE, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, // 100
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xCC, 0x8C, 0x8C, 0xCC, 0xEF, 0xEF, 0x2F, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 101
    0x60, 0x60, 0xFC, 0xFE, 0xFE, 0x66, 0x66, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, // 102
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0xE0, 0xE0, 0xE0, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x30, 0x30, 0x70, 0x64, 0x64, 0x64, 0x60, 0x70, 0x7C, 0x3C, 0x1C, // 103
    0xFE, 0xFE, 0xFE, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 104
    0xEE, 0xEE, 0xEE, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, // 105
    0x00, 0x00, 0xEE, 0xEE, 0xEE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x7C, 0x7C, 0x3C, // 106
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x60, 0x20, 0xFF, 0xFF, 0xFF, 0x0E, 0x07, 0x1F, 0x7F, 0xF8, 0xE0, 0x80, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 107
    0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, // 108
    0xE0, 0xE0, 0xE0, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0xC0, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 109
    0xE0, 0xE0, 0xE0, 0xC0, 0x40, 0x60, 0x60, 0xE0, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 110
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 111
    0xE0, 0xE0, 0xE0, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0x3F, 0x7C, 0x7C, 0x7C, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, // 112
    0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0xE0, 0xE0, 0xE0, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x7C, 0x7C, 0x7C, // 113
    0xE0, 0xE0, 0xE0, 0xC0, 0x60, 0x60, 0x60, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 114
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x43, 0xC7, 0xCF, 0x8E, 0x8E, 0x9C, 0x9C, 0xFC, 0xF8, 0x70, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, // 115
    0x60, 0xF8, 0xFC, 0xFE, 0x60, 0x60, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, // 116
    0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x7F, 0xFF, 0xFF, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, // 117
    0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x03, 0x1F, 0x7F, 0xFC, 0xE0, 0xFC, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 118
    0x20, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0x20, 0x00, 0x01, 0x0F, 0x7F, 0xFE, 0xE0, 0xFC, 0x7F, 0x0F, 0x01, 0x0F, 0x7F, 0xFC, 0xE0, 0xFE, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // 119
    0x60, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x60, 0x80, 0xC0, 0xF3, 0x7F, 0x3F, 0x3F, 0x7F, 0xF3, 0xC0, 0x80, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, // 120
    0x60, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x60, 0x00, 0x03, 0x1F, 0xFF, 0xFC, 0xE0, 0xFC, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0x60, 0x60, 0x70, 0x7C, 0x3C, 0x0C, 0x00, 0x00, 0x00, 0x00, // 121
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xF0, 0xBC, 0x9E, 0x8F, 0x83, 0x81, 0x80, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 122
    0x00, 0x00, 0xF8, 0xFC, 0xFE, 0x0E, 0x0E, 0x0C, 0x1E, 0xFF, 0xFF, 0xF3, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x7C, 0x70, 0x70, // 123
    0xFE, 0xFE, 0xFF, 0xFF, 0xFC, 0xFC, // 124
    0x0E, 0x0E, 0xFE, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF3, 0xFF, 0xFF, 0x1E, 0x0C, 0x70, 0x70, 0x7C, 0x3C, 0x1C, 0x00, 0x00, // 125
    0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x03, 0x03, 0x01, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 // 127
    
};

#endif