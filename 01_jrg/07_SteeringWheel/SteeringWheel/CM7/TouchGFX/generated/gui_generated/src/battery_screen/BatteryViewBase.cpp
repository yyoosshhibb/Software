/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/battery_screen/BatteryViewBase.hpp>
#include <touchgfx/Color.hpp>

BatteryViewBase::BatteryViewBase()
{

    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 272, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    add(__background);
    add(box1);
}

void BatteryViewBase::setupScreen()
{

}