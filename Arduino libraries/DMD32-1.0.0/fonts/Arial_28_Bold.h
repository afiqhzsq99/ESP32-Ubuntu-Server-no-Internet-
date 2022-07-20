/*
 *
 * Arial_28_Bold
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial_28_Bold.h
 * Date                : 08.07.2017
 * Font size in bytes  : 35214
 * Font width          : 10
 * Font height         : 28
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

#ifndef ARIAL_28_BOLD_H
#define ARIAL_28_BOLD_H

#define ARIAL_28_BOLD_WIDTH 10
#define ARIAL_28_BOLD_HEIGHT 28

const static uint8_t Arial_28_Bold[] PROGMEM = {
    0x89, 0x8E, // size
    0x0A, // width
    0x1C, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x04, 0x0A, 0x10, 0x0E, 0x17, 0x12, 0x04, 0x07, 0x07, 
    0x0A, 0x0E, 0x04, 0x08, 0x04, 0x08, 0x0E, 0x09, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x04, 0x04, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x1A, 0x13, 0x10, 0x12, 0x11, 0x10, 0x0E, 0x13, 
    0x10, 0x04, 0x0D, 0x11, 0x0E, 0x15, 0x10, 0x13, 0x0F, 0x14, 
    0x12, 0x11, 0x10, 0x10, 0x13, 0x1B, 0x11, 0x12, 0x10, 0x07, 
    0x08, 0x07, 0x0E, 0x10, 0x06, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x09, 0x0E, 0x0D, 0x04, 0x06, 0x0D, 0x04, 0x16, 0x0D, 0x0F, 
    0x0E, 0x0E, 0x09, 0x0D, 0x09, 0x0D, 0x0D, 0x17, 0x0E, 0x0F, 
    0x0C, 0x09, 0x03, 0x09, 0x0E, 0x0F, 
    
    // font data
    0xFE, 0xFE, 0xFE, 0xFE, 0x03, 0x7F, 0x7F, 0x03, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, // 33
    0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0xC0, 0xC0, 0xC0, 0xC0, 0xF8, 0xFE, 0xFE, 0xCE, 0xC0, 0xC0, 0xC0, 0xF8, 0xFE, 0xFE, 0xCE, 0xC0, 0xE1, 0xE1, 0xE1, 0xFF, 0xFF, 0xFF, 0xE1, 0xE1, 0xE1, 0xE1, 0xFF, 0xFF, 0xFF, 0xE1, 0xE1, 0xE1, 0x00, 0x1C, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0xF0, 0xF8, 0xFC, 0xFC, 0x1E, 0x0E, 0xFF, 0xFF, 0x0E, 0x1E, 0x3C, 0x3C, 0x38, 0x30, 0x81, 0x83, 0x87, 0x8F, 0x0F, 0x0F, 0xFF, 0xFF, 0x1E, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0x01, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x7F, 0x7F, 0x1C, 0x1E, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0xF8, 0xFC, 0xFE, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x81, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0xC1, 0xE0, 0xF0, 0x30, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x3C, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x30, 0x30, 0x30, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x78, 0xFC, 0xFC, 0xFE, 0x8E, 0x0E, 0x0E, 0x9E, 0xFE, 0xFC, 0xFC, 0x70, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xFD, 0x3F, 0x1F, 0x0F, 0x1F, 0x3F, 0xFF, 0xFB, 0xF1, 0xE0, 0xE0, 0xF0, 0xF0, 0x30, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1E, 0x1F, 0x0F, 0x07, 0x07, 0x0F, 0x1F, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0xC0, 0xF0, 0xFC, 0xFE, 0x1E, 0x02, 0xFE, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x03, 0x3F, 0xFF, 0xFF, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x70, 0x70, 0x40, // 40
    0x02, 0x1E, 0xFE, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x80, 0xF8, 0xFF, 0xFF, 0x3F, 0x03, 0x40, 0x70, 0x70, 0x30, 0x00, 0x00, 0x00, // 41
    0x18, 0x18, 0x90, 0xF0, 0x7E, 0x7E, 0xF0, 0x90, 0x18, 0x18, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x9E, 0xFE, 0x7E, 0x10, 0x30, 0x10, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x80, 0xF8, 0xFE, 0x7E, 0x06, 0x00, 0x80, 0xF8, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xC0, 0xF0, 0xF8, 0xFC, 0x7E, 0x1E, 0x1E, 0x1E, 0x1E, 0x7E, 0xFC, 0xF8, 0xF0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0xC0, 0xE0, 0xE0, 0xF0, 0x78, 0xFC, 0xFE, 0xFE, 0xFE, 0x03, 0x01, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0xE0, 0xF8, 0xFC, 0xFC, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x1F, 0x0F, 0x07, 0x01, 0x18, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x60, 0x78, 0x7C, 0x7C, 0x3E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x0E, 0x0E, 0x0E, 0x0F, 0x1F, 0xFB, 0xF9, 0xF0, 0xE0, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0x78, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xE0, 0xF0, 0xFC, 0xDE, 0xCF, 0xC3, 0xC1, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0xF0, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x9C, 0x9F, 0x9F, 0x9F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x1F, 0xFE, 0xFE, 0xFC, 0xF0, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0x80, 0xF0, 0xF8, 0xFC, 0x3C, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7C, 0x7C, 0x78, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x0F, 0x0F, 0x0F, 0x0F, 0x1F, 0xFE, 0xFE, 0xFC, 0xF0, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xDE, 0xFE, 0xFE, 0x7E, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x1F, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0xF0, 0xF8, 0xFC, 0xFC, 0x1E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0xFC, 0xFC, 0xF8, 0xF0, 0xE0, 0xF1, 0xFB, 0xFF, 0x1F, 0x0E, 0x0E, 0x0E, 0x0E, 0x1F, 0xFF, 0xFB, 0xF1, 0xE0, 0x03, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1E, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xE0, 0xF8, 0xFC, 0xFC, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3C, 0xFC, 0xF8, 0xF0, 0xC0, 0x83, 0x8F, 0x9F, 0x9F, 0x3E, 0x3C, 0x3C, 0x3C, 0x3C, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0xC0, 0xC0, 0xC0, 0xC0, 0x03, 0x03, 0x03, 0x03, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, // 58
    0xC0, 0xC0, 0xC0, 0xC0, 0x03, 0x03, 0x03, 0x03, 0x1E, 0x9E, 0xFE, 0x7E, 0x10, 0x30, 0x10, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0x1C, 0x3E, 0x3E, 0x7F, 0x77, 0x77, 0xF3, 0xE3, 0xE3, 0xE1, 0xC1, 0xC1, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0xF0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC1, 0xC1, 0xE1, 0xE3, 0xE3, 0xF3, 0x77, 0x77, 0x7F, 0x3E, 0x3E, 0x1C, 0x07, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x60, 0x78, 0x7C, 0x7C, 0x3E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x7C, 0x7C, 0x7E, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x38, 0x3C, 0x9C, 0xDC, 0xCE, 0xCE, 0xCE, 0x8E, 0x0E, 0xCE, 0xCE, 0xDC, 0xDC, 0x3C, 0x78, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x0F, 0x01, 0xF0, 0xFC, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x03, 0x87, 0xFF, 0xFF, 0xFF, 0x3F, 0x01, 0x00, 0x00, 0xC1, 0xFF, 0xFF, 0x3F, 0x00, 0x07, 0x3F, 0x7F, 0xF8, 0xE0, 0xC3, 0x8F, 0x0F, 0x1F, 0x1F, 0x1E, 0x0E, 0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x1C, 0x1C, 0x0E, 0x8F, 0xC7, 0xE3, 0xE0, 0xE0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10, 0x30, 0x30, 0x70, 0x70, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0x70, 0x70, 0x70, 0x30, 0x30, 0x10, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFE, 0xFE, 0xFE, 0x1E, 0xFE, 0xFE, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0xE7, 0xE0, 0xE0, 0xE0, 0xE7, 0xFF, 0xFF, 0xFF, 0xF8, 0xC0, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x1F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x1F, 0x1F, 0x1E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x3F, 0xFF, 0xFB, 0xF0, 0xE0, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0x3C, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7C, 0xFC, 0xF8, 0x70, 0x40, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0xC0, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFC, 0xFC, 0xF8, 0xE0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0x00, 0xE0, 0xF0, 0xF8, 0xFC, 0x7C, 0x3C, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7C, 0xFC, 0xF8, 0x70, 0x60, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x7C, 0x3E, 0x1E, 0x0E, 0x06, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x1F, 0x0F, 0x0F, 0x1F, 0x7F, 0xFE, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1F, 0x1F, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0xFE, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0xFE, 0x1E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x0F, 0xFF, 0xFE, 0xE0, 0x00, 0xE0, 0xFE, 0xFF, 0x0F, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1E, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0x0F, 0x1F, 0x7E, 0xFC, 0xF0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0x7C, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x3C, 0xFC, 0xF8, 0xF0, 0xE0, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFE, 0xFC, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0x7C, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7C, 0xFC, 0xF8, 0xF0, 0xE0, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x0F, 0x0F, 0x1F, 0x3F, 0x39, 0x78, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7E, 0xFE, 0xFF, 0xEF, 0xCF, 0x07, 0x01, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1F, 0x1F, 0x1E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0x00, 0xF0, 0xF8, 0xFC, 0xFC, 0xBE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0x7C, 0x7C, 0x78, 0x60, 0x00, 0xC0, 0xC1, 0xC3, 0xC7, 0x87, 0x0F, 0x0F, 0x0F, 0x0F, 0x1E, 0x1E, 0x1E, 0x3E, 0xFC, 0xFC, 0xF8, 0xE0, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x02, 0x1E, 0xFE, 0xFE, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFE, 0xFE, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFF, 0xF0, 0x80, 0x00, 0x80, 0xF0, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x1F, 0x1C, 0x1F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x06, 0x7E, 0xFE, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0xFE, 0x1E, 0xFE, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFE, 0x7E, 0x06, 0x00, 0x00, 0x03, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0xE0, 0xFF, 0xFF, 0x1F, 0x01, 0x00, 0x01, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0xF0, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x1E, 0x1F, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x1E, 0x1F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x00, 0x06, 0x0E, 0x3E, 0x7E, 0xFC, 0xF8, 0xE0, 0xC0, 0xE0, 0xF8, 0xFC, 0x7E, 0x3E, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF9, 0xFF, 0x7F, 0x3F, 0xFF, 0xFF, 0xF9, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x1F, 0x1F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1F, 0x1F, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x06, 0x0E, 0x3E, 0x7E, 0xFC, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFC, 0x7E, 0x3E, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x9E, 0xDE, 0xFE, 0xFE, 0x7E, 0x3E, 0x1E, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x7C, 0x3E, 0x1F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, // 91
    0x06, 0x7E, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x1E, 0x1E, 0x1E, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, // 93
    0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 0x3E, 0x3E, 0xFE, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x08, 0x0E, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x0F, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, // 95
    0x02, 0x06, 0x0E, 0x1E, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x82, 0xC7, 0xE7, 0xE3, 0x71, 0x31, 0x31, 0x31, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x1C, 0x1C, 0x0C, 0x0E, 0x07, 0x1F, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x0E, 0x1C, 0x1C, 0x1C, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x01, 0x03, 0x07, 0x07, 0x03, 0x02, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1E, 0x1F, 0x0F, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1C, 0x1C, 0x1C, 0x0E, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0xFF, 0x73, 0x71, 0x71, 0x71, 0x71, 0x73, 0x7F, 0x7F, 0x7E, 0x78, 0x01, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1E, 0x1E, 0x0E, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0xC0, 0xC0, 0xF8, 0xFC, 0xFE, 0xFE, 0xCE, 0xCE, 0xCE, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xFC, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x03, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC7, 0xCF, 0x9F, 0x9F, 0x1C, 0x1C, 0x1C, 0x0E, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x30, 0x30, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x30, 0x10, 0x00, // 103
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0xCE, 0xCE, 0xCE, 0xCE, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0x00, 0xCE, 0xCE, 0xCE, 0xCE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x70, 0x70, 0x70, 0x30, 0x10, // 106
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7C, 0xFE, 0xFF, 0xF7, 0xC3, 0x01, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1F, 0x1F, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 108
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0x07, 0x03, 0x01, 0x01, 0x01, 0x03, 0x07, 0xFF, 0xFF, 0xFE, 0xF8, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1E, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x0E, 0x1C, 0x1C, 0x1C, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x70, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xFC, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x07, 0x0F, 0x0F, 0x1F, 0x1C, 0x1C, 0x1C, 0x0E, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, // 113
    0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x0E, 0x1F, 0x3F, 0x3F, 0x79, 0x79, 0x71, 0xF1, 0xF1, 0xE3, 0xE3, 0xC1, 0x81, 0x04, 0x0C, 0x0E, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1F, 0x0F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0xC0, 0xC0, 0xF8, 0xFC, 0xFC, 0xFE, 0xC0, 0xC0, 0xC0, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1F, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x1C, 0x1C, 0x0C, 0x06, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x01, 0x0F, 0x7F, 0xFF, 0xFC, 0xC0, 0x00, 0x80, 0xFC, 0xFF, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x1E, 0x1F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x07, 0x3F, 0xFF, 0xFE, 0xF0, 0x00, 0xF0, 0xFE, 0xFF, 0x7F, 0x07, 0x7F, 0xFF, 0xFE, 0xF0, 0x00, 0xF0, 0xFE, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x87, 0xDF, 0xFF, 0xFC, 0xFC, 0xFF, 0xDF, 0x87, 0x01, 0x00, 0x00, 0x18, 0x1C, 0x1F, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x03, 0x07, 0x1F, 0x1F, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x07, 0x1F, 0xFF, 0xFF, 0xF8, 0x80, 0x00, 0x80, 0xF8, 0xFF, 0xFF, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xFF, 0xFF, 0xFC, 0xFF, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x01, 0x81, 0xE1, 0xF1, 0xF9, 0x7D, 0x3F, 0x0F, 0x07, 0x03, 0x00, 0x1E, 0x1F, 0x1F, 0x1F, 0x1D, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFE, 0xFE, 0x1E, 0x1E, 0xE0, 0xE0, 0xF0, 0xFF, 0xBF, 0xBF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x00, 0x10, 0x30, 0x70, 0x70, 0x70, 0x70, // 123
    0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x70, 0x70, // 124
    0x1E, 0x1E, 0xFE, 0xFE, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xBF, 0xBF, 0xFF, 0xF0, 0xE0, 0xE0, 0x80, 0x80, 0xFE, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x30, 0x10, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x0F, 0x0F, 0x0F, 0x0F, 0x1E, 0x1E, 0x3E, 0x3C, 0x3C, 0x3C, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
