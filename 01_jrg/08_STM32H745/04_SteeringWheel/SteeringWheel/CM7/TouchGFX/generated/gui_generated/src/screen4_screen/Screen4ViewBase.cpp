/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen4_screen/Screen4ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen4ViewBase::Screen4ViewBase()
{
    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 272, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    image1.setXY(16, 5);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_JOANNEUM_RACING_ELECTRICS_ID));
    add(image1);

    textLabel1.setPosition(8, 80, 110, 25);
    textLabel1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel1.setLinespacing(0);
    textLabel1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BO6F));
    add(textLabel1);

    textTVCU.setPosition(118, 80, 70, 25);
    textTVCU.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTVCU.setLinespacing(0);
    Unicode::snprintf(textTVCUBuffer, TEXTTVCU_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_KNNI).getText());
    textTVCU.setWildcard(textTVCUBuffer);
    textTVCU.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X1A8));
    add(textTVCU);

    textULV1.setPosition(118, 130, 70, 25);
    textULV1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textULV1.setLinespacing(0);
    Unicode::snprintf(textULV1Buffer, TEXTULV1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2QDW).getText());
    textULV1.setWildcard(textULV1Buffer);
    textULV1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NIY9));
    add(textULV1);

    textILVS.setPosition(121, 180, 140, 25);
    textILVS.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textILVS.setLinespacing(0);
    Unicode::snprintf(textILVSBuffer, TEXTILVS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ET9D).getText());
    textILVS.setWildcard(textILVSBuffer);
    textILVS.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R5XO));
    add(textILVS);

    textIMV.setPosition(126, 405, 140, 25);
    textIMV.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textIMV.setLinespacing(0);
    Unicode::snprintf(textIMVBuffer, TEXTIMV_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2NYD).getText());
    textIMV.setWildcard(textIMVBuffer);
    textIMV.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GIX5));
    add(textIMV);

    textCommError.setPosition(121, 230, 140, 25);
    textCommError.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textCommError.setLinespacing(0);
    Unicode::snprintf(textCommErrorBuffer, TEXTCOMMERROR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2OCE).getText());
    textCommError.setWildcard(textCommErrorBuffer);
    textCommError.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6RIY));
    add(textCommError);

    textMVSError.setPosition(126, 430, 140, 25);
    textMVSError.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textMVSError.setLinespacing(0);
    Unicode::snprintf(textMVSErrorBuffer, TEXTMVSERROR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_0E93).getText());
    textMVSError.setWildcard(textMVSErrorBuffer);
    textMVSError.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PEUE));
    add(textMVSError);

    textULV2.setPosition(188, 130, 70, 25);
    textULV2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textULV2.setLinespacing(0);
    Unicode::snprintf(textULV2Buffer, TEXTULV2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6NOM).getText());
    textULV2.setWildcard(textULV2Buffer);
    textULV2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VJMN));
    add(textULV2);

    textULV4.setPosition(188, 155, 70, 25);
    textULV4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textULV4.setLinespacing(0);
    Unicode::snprintf(textULV4Buffer, TEXTULV4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_AM6N).getText());
    textULV4.setWildcard(textULV4Buffer);
    textULV4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_70QT));
    add(textULV4);

    textULV3.setPosition(118, 155, 70, 25);
    textULV3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textULV3.setLinespacing(0);
    Unicode::snprintf(textULV3Buffer, TEXTULV3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2F1B).getText());
    textULV3.setWildcard(textULV3Buffer);
    textULV3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6TPV));
    add(textULV3);

    textUMV2.setPosition(191, 305, 70, 25);
    textUMV2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV2.setLinespacing(0);
    Unicode::snprintf(textUMV2Buffer, TEXTUMV2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_HO3G).getText());
    textUMV2.setWildcard(textUMV2Buffer);
    textUMV2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JVDK));
    add(textUMV2);

    textUMV1.setPosition(121, 305, 70, 25);
    textUMV1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV1.setLinespacing(0);
    Unicode::snprintf(textUMV1Buffer, TEXTUMV1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_5X43).getText());
    textUMV1.setWildcard(textUMV1Buffer);
    textUMV1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0I9J));
    add(textUMV1);

    textUMV7.setPosition(6, 355, 65, 25);
    textUMV7.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV7.setLinespacing(0);
    Unicode::snprintf(textUMV7Buffer, TEXTUMV7_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TQ2P).getText());
    textUMV7.setWildcard(textUMV7Buffer);
    textUMV7.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BUOO));
    add(textUMV7);

    textUMV3.setPosition(6, 330, 65, 25);
    textUMV3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV3.setLinespacing(0);
    Unicode::snprintf(textUMV3Buffer, TEXTUMV3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_8W6G).getText());
    textUMV3.setWildcard(textUMV3Buffer);
    textUMV3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EFRU));
    add(textUMV3);

    textUMV4.setPosition(71, 330, 65, 25);
    textUMV4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV4.setLinespacing(0);
    Unicode::snprintf(textUMV4Buffer, TEXTUMV4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LDAT).getText());
    textUMV4.setWildcard(textUMV4Buffer);
    textUMV4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XL65));
    add(textUMV4);

    textUMV8.setPosition(71, 355, 65, 25);
    textUMV8.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV8.setLinespacing(0);
    Unicode::snprintf(textUMV8Buffer, TEXTUMV8_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_C70M).getText());
    textUMV8.setWildcard(textUMV8Buffer);
    textUMV8.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CXXB));
    add(textUMV8);

    textUMV12.setPosition(71, 380, 65, 25);
    textUMV12.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV12.setLinespacing(0);
    Unicode::snprintf(textUMV12Buffer, TEXTUMV12_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_HF02).getText());
    textUMV12.setWildcard(textUMV12Buffer);
    textUMV12.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W6YX));
    add(textUMV12);

    textUMVmin_2_1_1_2_1.setPosition(136, 380, 65, 25);
    textUMVmin_2_1_1_2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMVmin_2_1_1_2_1.setLinespacing(0);
    textUMVmin_2_1_1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8KGG));
    add(textUMVmin_2_1_1_2_1);

    textUMV11.setPosition(6, 380, 65, 25);
    textUMV11.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV11.setLinespacing(0);
    Unicode::snprintf(textUMV11Buffer, TEXTUMV11_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_X7OR).getText());
    textUMV11.setWildcard(textUMV11Buffer);
    textUMV11.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U5LL));
    add(textUMV11);

    textUMV10.setPosition(201, 355, 65, 25);
    textUMV10.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV10.setLinespacing(0);
    Unicode::snprintf(textUMV10Buffer, TEXTUMV10_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_0B48).getText());
    textUMV10.setWildcard(textUMV10Buffer);
    textUMV10.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OF7W));
    add(textUMV10);

    textUMVmaxDelta.setPosition(201, 380, 65, 25);
    textUMVmaxDelta.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMVmaxDelta.setLinespacing(0);
    Unicode::snprintf(textUMVmaxDeltaBuffer, TEXTUMVMAXDELTA_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_XOBM).getText());
    textUMVmaxDelta.setWildcard(textUMVmaxDeltaBuffer);
    textUMVmaxDelta.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TWP5));
    add(textUMVmaxDelta);

    textUMV6.setPosition(201, 330, 65, 25);
    textUMV6.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV6.setLinespacing(0);
    Unicode::snprintf(textUMV6Buffer, TEXTUMV6_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JUYG).getText());
    textUMV6.setWildcard(textUMV6Buffer);
    textUMV6.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YEET));
    add(textUMV6);

    textUMV5.setPosition(136, 330, 65, 25);
    textUMV5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV5.setLinespacing(0);
    Unicode::snprintf(textUMV5Buffer, TEXTUMV5_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_V4NW).getText());
    textUMV5.setWildcard(textUMV5Buffer);
    textUMV5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NPZV));
    add(textUMV5);

    textUMV9.setPosition(136, 355, 65, 25);
    textUMV9.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textUMV9.setLinespacing(0);
    Unicode::snprintf(textUMV9Buffer, TEXTUMV9_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_AUB1).getText());
    textUMV9.setWildcard(textUMV9Buffer);
    textUMV9.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DH34));
    add(textUMV9);

    textTLV1.setPosition(118, 105, 70, 25);
    textTLV1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTLV1.setLinespacing(0);
    Unicode::snprintf(textTLV1Buffer, TEXTTLV1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_EQQR).getText());
    textTLV1.setWildcard(textTLV1Buffer);
    textTLV1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_97VO));
    add(textTLV1);

    textTMV1.setPosition(121, 255, 70, 25);
    textTMV1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTMV1.setLinespacing(0);
    Unicode::snprintf(textTMV1Buffer, TEXTTMV1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_YNQS).getText());
    textTMV1.setWildcard(textTMV1Buffer);
    textTMV1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0BVB));
    add(textTMV1);

    textTMV2.setPosition(191, 255, 70, 25);
    textTMV2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTMV2.setLinespacing(0);
    Unicode::snprintf(textTMV2Buffer, TEXTTMV2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_DDV4).getText());
    textTMV2.setWildcard(textTMV2Buffer);
    textTMV2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4934));
    add(textTMV2);

    textTMV4.setPosition(121, 280, 70, 25);
    textTMV4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTMV4.setLinespacing(0);
    Unicode::snprintf(textTMV4Buffer, TEXTTMV4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZIYB).getText());
    textTMV4.setWildcard(textTMV4Buffer);
    textTMV4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IHXE));
    add(textTMV4);

    textTMV3.setPosition(51, 280, 70, 25);
    textTMV3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTMV3.setLinespacing(0);
    Unicode::snprintf(textTMV3Buffer, TEXTTMV3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9E0G).getText());
    textTMV3.setWildcard(textTMV3Buffer);
    textTMV3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R7EP));
    add(textTMV3);

    textTMV5.setPosition(191, 280, 70, 25);
    textTMV5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTMV5.setLinespacing(0);
    Unicode::snprintf(textTMV5Buffer, TEXTTMV5_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_B41D).getText());
    textTMV5.setWildcard(textTMV5Buffer);
    textTMV5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4YV4));
    add(textTMV5);

    textTLV2.setPosition(188, 105, 70, 25);
    textTLV2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textTLV2.setLinespacing(0);
    Unicode::snprintf(textTLV2Buffer, TEXTTLV2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_FSB9).getText());
    textTLV2.setWildcard(textTLV2Buffer);
    textTLV2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IFVQ));
    add(textTLV2);

    textLabel2.setPosition(8, 105, 110, 25);
    textLabel2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel2.setLinespacing(0);
    textLabel2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WDG7));
    add(textLabel2);

    textLabel4.setPosition(8, 142, 110, 25);
    textLabel4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel4.setLinespacing(0);
    textLabel4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_N7JH));
    add(textLabel4);

    textLabel3.setPosition(11, 180, 110, 25);
    textLabel3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel3.setLinespacing(0);
    textLabel3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ODDB));
    add(textLabel3);

    textLabel3_1.setPosition(11, 205, 110, 25);
    textLabel3_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel3_1.setLinespacing(0);
    textLabel3_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0X6N));
    add(textLabel3_1);

    textILVS_1.setPosition(121, 205, 140, 25);
    textILVS_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textILVS_1.setLinespacing(0);
    Unicode::snprintf(textILVS_1Buffer, TEXTILVS_1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TC80).getText());
    textILVS_1.setWildcard(textILVS_1Buffer);
    textILVS_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U1BZ));
    add(textILVS_1);

    textLabel5.setPosition(11, 230, 110, 25);
    textLabel5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel5.setLinespacing(0);
    textLabel5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YRVQ));
    add(textLabel5);

    textLabel6.setPosition(11, 255, 110, 25);
    textLabel6.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel6.setLinespacing(0);
    textLabel6.setTypedText(touchgfx::TypedText(T___SINGLEUSE_04EW));
    add(textLabel6);

    textLabel7.setPosition(11, 305, 110, 25);
    textLabel7.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel7.setLinespacing(0);
    textLabel7.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L07D));
    add(textLabel7);

    textLabel8.setPosition(16, 405, 110, 25);
    textLabel8.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel8.setLinespacing(0);
    textLabel8.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TN9R));
    add(textLabel8);

    textLabel9.setPosition(16, 430, 110, 25);
    textLabel9.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textLabel9.setLinespacing(0);
    textLabel9.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3N5H));
    add(textLabel9);
}

Screen4ViewBase::~Screen4ViewBase()
{

}

void Screen4ViewBase::setupScreen()
{

}

void Screen4ViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked change screen to Screen5
        //Go to Screen5 with no screen transition
        application().gotoScreen5ScreenNoTransition();
    
    }
}
