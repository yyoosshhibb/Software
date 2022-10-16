/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID));

    image2.setXY(60, 106);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_LARGE_PRESSED_ID));

    textArea1.setPosition(174, 121, 132, 30);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_068G).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CWD8));

    flexButton1.setBoxWithBorderPosition(0, 0, 40, 30);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setText(TypedText(T___SINGLEUSE_1W3X));
    flexButton1.setTextPosition(0, 0, 40, 30);
    flexButton1.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton1.setPosition(40, 200, 40, 30);
    flexButton1.setAction(flexButtonCallback);

    flexButton2.setBoxWithBorderPosition(0, 0, 40, 30);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setText(TypedText(T___SINGLEUSE_ESSW));
    flexButton2.setTextPosition(0, 0, 40, 30);
    flexButton2.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton2.setPosition(400, 200, 40, 30);
    flexButton2.setAction(flexButtonCallback);

    add(__background);
    add(image1);
    add(image2);
    add(textArea1);
    add(flexButton1);
    add(flexButton2);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //up
        //When flexButton1 clicked call virtual function
        //Call upclick
        upclick();
    }
    else if (&src == &flexButton2)
    {
        //down
        //When flexButton2 clicked call virtual function
        //Call downclick
        downclick();
    }
}