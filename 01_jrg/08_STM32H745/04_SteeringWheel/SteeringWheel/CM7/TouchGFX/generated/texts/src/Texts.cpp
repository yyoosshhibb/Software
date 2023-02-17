/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x52, 0x65, 0x70, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x74, 0x79, 0x70, 0x65, 0x0, // @0 "Replace with Autotype"
    0x49, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x72, 0x20, 0x6d, 0x61, 0x78, 0xa, 0x0, // @22 "Inverter max\n"
    0x4c, 0x56, 0x20, 0x56, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0xa, 0x0, // @36 "LV Voltage\n"
    0x2, 0x20, 0xb0, 0x43, 0x0, // @48 "<> ?C"
    0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x45, 0x6c, 0x73, 0x65, 0x0, // @53 "Error Else"
    0x48, 0x56, 0x20, 0x56, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0x0, // @64 "HV Voltage"
    0x54, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x61, 0x76, 0x67, 0x0, // @75 "T Cell avg"
    0x54, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x6d, 0x61, 0x78, 0x0, // @86 "T Cell max"
    0x54, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x6d, 0x69, 0x6e, 0x0, // @97 "T Cell min"
    0x55, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x61, 0x76, 0x67, 0x0, // @108 "U Cell avg"
    0x55, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x6d, 0x61, 0x78, 0x0, // @119 "U Cell max"
    0x55, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x6d, 0x69, 0x6e, 0x0, // @130 "U Cell min"
    0x2, 0x20, 0x25, 0x0, // @141 "<> %"
    0x2, 0x20, 0x41, 0x0, // @145 "<> A"
    0x2, 0x20, 0x56, 0x0, // @149 "<> V"
    0x2, 0xb0, 0x43, 0x0, // @153 "<>?C"
    0x4d, 0x6f, 0x74, 0x6f, 0x72, 0x20, 0x6d, 0x61, 0x78, 0x0, // @157 "Motor max"
    0x54, 0x53, 0x20, 0x53, 0x74, 0x61, 0x74, 0x65, 0xa, 0x0, // @167 "TS State\n"
    0x2, 0x25, 0x0, // @177 "<>%"
    0x43, 0x65, 0x6c, 0x6c, 0x73, 0x20, 0x48, 0x56, 0x0, // @180 "Cells HV"
    0x43, 0x65, 0x6c, 0x6c, 0x73, 0x20, 0x4c, 0x56, 0x0, // @189 "Cells LV"
    0x44, 0x75, 0x74, 0x79, 0x20, 0x46, 0x41, 0x4e, 0x0, // @198 "Duty FAN"
    0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x54, 0x53, 0x0, // @207 "Error TS"
    0x54, 0x53, 0x20, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x0, // @216 "TS Error"
    0x55, 0x20, 0x43, 0x65, 0x6c, 0x6c, 0x20, 0x32, 0x0, // @225 "U Cell 2"
    0x2, 0x0, // @234 "<>"
    0x45, 0x52, 0x52, 0x4f, 0x52, 0x0, // @236 "ERROR"
    0x54, 0x20, 0x56, 0x43, 0x55, 0x0, // @242 "T VCU"
    0x57, 0x61, 0x74, 0x65, 0x72, 0x0, // @248 "Water"
    0x49, 0x20, 0x4c, 0x56, 0x0, // @254 "I LV"
    0x4a, 0x52, 0x32, 0x33, 0x0, // @259 "JR23"
    0x33, 0x2e, 0x37, 0x0, // @264 "3.7"
    0x34, 0x32, 0x35, 0x0, // @268 "425"
    0x53, 0x6f, 0x43, 0x0, // @272 "SoC"
    0x31, 0x32, 0x0, // @276 "12"
    0x32, 0x30, 0x0, // @279 "20"
    0x33, 0x34, 0x0, // @282 "34"
    0x33, 0x35, 0x0, // @285 "35"
    0x33, 0x38, 0x0, // @288 "38"
    0x34, 0x32, 0x0, // @291 "42"
    0x35, 0x30, 0x0, // @294 "50"
    0x38, 0x34, 0x0 // @297 "84"
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const uint32_t indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
