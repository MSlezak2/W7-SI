#pragma once
#include "Window.h"
class MenuWindow :
    public Window {
public:
    // Inherited via Window
    MenuWindow();
    virtual void doTheTask() override;
};

