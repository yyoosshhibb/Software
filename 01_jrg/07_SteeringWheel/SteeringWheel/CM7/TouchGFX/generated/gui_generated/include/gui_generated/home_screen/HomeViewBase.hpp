/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HOMEVIEWBASE_HPP
#define HOMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/home_screen/HomePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class HomeViewBase : public touchgfx::View<HomePresenter>
{
public:
    HomeViewBase();
    virtual ~HomeViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::TextArea textArea1_1_1;
    touchgfx::TextArea textArea1_1_1_1;
    touchgfx::TextArea textArea1_1_1_2;
    touchgfx::TextArea textArea1_1_1_1_1;
    touchgfx::TextArea textArea1_1_1_3;
    touchgfx::TextArea textArea1_1_1_1_2;
    touchgfx::TextArea textArea1_1_1_4;
    touchgfx::TextArea textArea1_1_1_1_3;
    touchgfx::TextArea textAreaErrorTS;
    touchgfx::TextArea textAreaErrorElse;
    touchgfx::TextArea textAreaTempHV;
    touchgfx::TextArea textAreaTempLV;
    touchgfx::TextArea textAreaSoCHV;
    touchgfx::TextArea textAreaSoCLV;
    touchgfx::TextArea textAreaTWater;
    touchgfx::TextArea textAreaTMotor;
    touchgfx::TextArea textAreaTInverter;
    touchgfx::TextArea textAreaTSState;

private:

};

#endif // HOMEVIEWBASE_HPP