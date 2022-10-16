/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/driver_screen/DriverViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

DriverViewBase::DriverViewBase()
{

    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 272, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box2.setPosition(60, 420, 152, 60);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));

    textAreaErrorElse.setPosition(66, 415, 140, 70);
    textAreaErrorElse.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaErrorElse.setLinespacing(0);
    textAreaErrorElse.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3F2T));

    boxTempFLout.setPosition(0, 30, 20, 60);
    boxTempFLout.setColor(touchgfx::Color::getColorFromRGB(25, 104, 194));

    boxTempFLmid.setPosition(20, 30, 20, 60);
    boxTempFLmid.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempFLin.setPosition(40, 30, 20, 60);
    boxTempFLin.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxProgressSpeed.setXY(0, 0);
    boxProgressSpeed.setProgressIndicatorPosition(0, 0, 272, 30);
    boxProgressSpeed.setRange(0, 100);
    boxProgressSpeed.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    boxProgressSpeed.setColor(touchgfx::Color::getColorFromRGB(158, 158, 158));
    boxProgressSpeed.setValue(60);

    boxTempRLout.setPosition(0, 420, 20, 60);
    boxTempRLout.setColor(touchgfx::Color::getColorFromRGB(25, 104, 194));

    boxTempRLmid.setPosition(20, 420, 20, 60);
    boxTempRLmid.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempRLin.setPosition(40, 420, 20, 60);
    boxTempRLin.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempRRin.setPosition(212, 420, 20, 60);
    boxTempRRin.setColor(touchgfx::Color::getColorFromRGB(25, 104, 194));

    boxTempRRmid.setPosition(232, 420, 20, 60);
    boxTempRRmid.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempRRout.setPosition(252, 420, 20, 60);
    boxTempRRout.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempFRin.setPosition(212, 30, 20, 60);
    boxTempFRin.setColor(touchgfx::Color::getColorFromRGB(25, 104, 194));

    boxTempFRmid.setPosition(232, 30, 20, 60);
    boxTempFRmid.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxTempFRout.setPosition(252, 30, 20, 60);
    boxTempFRout.setColor(touchgfx::Color::getColorFromRGB(25, 104, 255));

    boxProgressSoC.setXY(101, 138);
    boxProgressSoC.setProgressIndicatorPosition(0, 0, 70, 250);
    boxProgressSoC.setRange(0, 100);
    boxProgressSoC.setDirection(touchgfx::AbstractDirectionProgress::UP);
    boxProgressSoC.setColor(touchgfx::Color::getColorFromRGB(158, 158, 158));
    boxProgressSoC.setValue(100);

    scalableImageMapping.setBitmap(touchgfx::Bitmap(BITMAP_AUTOCROSS_ID));
    scalableImageMapping.setPosition(99, 40, 75, 75);
    scalableImageMapping.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    TwaterCrit.setBitmap(touchgfx::Bitmap(BITMAP_WATERCRIT_ID));
    TwaterCrit.setPosition(13, 138, 75, 75);
    TwaterCrit.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    HVBMSCrit.setBitmap(touchgfx::Bitmap(BITMAP_HV_BAT_CRIT_ID));
    HVBMSCrit.setPosition(13, 218, 75, 75);
    HVBMSCrit.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    LVBMSCrit.setBitmap(touchgfx::Bitmap(BITMAP_LV_BAT_CRIT_ID));
    LVBMSCrit.setPosition(13, 298, 75, 75);
    LVBMSCrit.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    TwaterWarn.setBitmap(touchgfx::Bitmap(BITMAP_WATERWARN_ID));
    TwaterWarn.setPosition(185, 138, 75, 75);
    TwaterWarn.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    HVBMSWarn.setBitmap(touchgfx::Bitmap(BITMAP_HV_BAT_WARN_ID));
    HVBMSWarn.setPosition(185, 218, 75, 75);
    HVBMSWarn.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    LVBMSWarn.setBitmap(touchgfx::Bitmap(BITMAP_LV_BAT_WARN_ID));
    LVBMSWarn.setPosition(185, 298, 75, 75);
    LVBMSWarn.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    add(__background);
    add(box1);
    add(box2);
    add(textAreaErrorElse);
    add(boxTempFLout);
    add(boxTempFLmid);
    add(boxTempFLin);
    add(boxProgressSpeed);
    add(boxTempRLout);
    add(boxTempRLmid);
    add(boxTempRLin);
    add(boxTempRRin);
    add(boxTempRRmid);
    add(boxTempRRout);
    add(boxTempFRin);
    add(boxTempFRmid);
    add(boxTempFRout);
    add(boxProgressSoC);
    add(scalableImageMapping);
    add(TwaterCrit);
    add(HVBMSCrit);
    add(LVBMSCrit);
    add(TwaterWarn);
    add(HVBMSWarn);
    add(LVBMSWarn);
}

void DriverViewBase::setupScreen()
{

}