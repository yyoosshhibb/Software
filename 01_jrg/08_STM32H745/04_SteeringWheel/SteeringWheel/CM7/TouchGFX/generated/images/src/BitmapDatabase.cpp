// 4.21.1 0x6d702ab4
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_joanneum_racing_battery[]; // BITMAP_JOANNEUM_RACING_BATTERY_ID = 0, Size: 241x60 pixels
extern const unsigned char image_joanneum_racing_electrics[]; // BITMAP_JOANNEUM_RACING_ELECTRICS_ID = 1, Size: 241x60 pixels
extern const unsigned char image_joanneum_racing_graz[]; // BITMAP_JOANNEUM_RACING_GRAZ_ID = 2, Size: 264x82 pixels
extern const unsigned char image_joanneum_racing_inverter[]; // BITMAP_JOANNEUM_RACING_INVERTER_ID = 3, Size: 255x60 pixels
extern const unsigned char image_joanneum_racing_powertrain[]; // BITMAP_JOANNEUM_RACING_POWERTRAIN_ID = 4, Size: 255x60 pixels
extern const unsigned char image_joanneum_racing_suspension[]; // BITMAP_JOANNEUM_RACING_SUSPENSION_ID = 5, Size: 255x60 pixels
extern const unsigned char image_joanneum_racing_testing[]; // BITMAP_JOANNEUM_RACING_TESTING_ID = 6, Size: 243x60 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_joanneum_racing_battery, 0, 241, 60, 9, 29, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_electrics, 0, 241, 60, 9, 29, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_graz, 0, 264, 82, 14, 41, 40, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_inverter, 0, 255, 60, 9, 29, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_powertrain, 0, 255, 60, 9, 29, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_suspension, 0, 255, 60, 9, 29, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_joanneum_racing_testing, 0, 243, 60, 10, 28, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase