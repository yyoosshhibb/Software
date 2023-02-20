/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN4VIEWBASE_HPP
#define SCREEN4VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen4ViewBase : public touchgfx::View<Screen4Presenter>
{
public:
    Screen4ViewBase();
    virtual ~Screen4ViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image image1;
    touchgfx::TextArea textLabel1;
    touchgfx::TextAreaWithOneWildcard textTVCU;
    touchgfx::TextAreaWithOneWildcard textTCellavg;
    touchgfx::TextArea textLabel2;
    touchgfx::TextArea textLabel4;
    touchgfx::TextAreaWithOneWildcard textUCellavg;
    touchgfx::TextAreaWithOneWildcard textILVS;
    touchgfx::TextArea textLabel3;
    touchgfx::TextArea textLabel3_1;
    touchgfx::TextAreaWithOneWildcard textILVS_1;
    touchgfx::TextAreaWithOneWildcard textCANState;
    touchgfx::TextArea textLabel4_1;
    touchgfx::TextAreaWithOneWildcard textErrors;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTTVCU_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textTVCUBuffer[TEXTTVCU_SIZE];
    static const uint16_t TEXTTCELLAVG_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textTCellavgBuffer[TEXTTCELLAVG_SIZE];
    static const uint16_t TEXTUCELLAVG_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textUCellavgBuffer[TEXTUCELLAVG_SIZE];
    static const uint16_t TEXTILVS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textILVSBuffer[TEXTILVS_SIZE];
    static const uint16_t TEXTILVS_1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textILVS_1Buffer[TEXTILVS_1_SIZE];
    static const uint16_t TEXTCANSTATE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textCANStateBuffer[TEXTCANSTATE_SIZE];
    static const uint16_t TEXTERRORS_SIZE = 200;
    touchgfx::Unicode::UnicodeChar textErrorsBuffer[TEXTERRORS_SIZE];

private:

};

#endif // SCREEN4VIEWBASE_HPP
