/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef BATTERYVIEWBASE_HPP
#define BATTERYVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/battery_screen/BatteryPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>

class BatteryViewBase : public touchgfx::View<BatteryPresenter>
{
public:
    BatteryViewBase();
    virtual ~BatteryViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }
    touchgfx::Box __background;

private:

};

#endif // BATTERYVIEWBASE_HPP
