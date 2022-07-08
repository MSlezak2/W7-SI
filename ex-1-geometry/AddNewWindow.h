#pragma once
#include "Window.h"
#include "Options.h"

class AddNewWindow :
    public Window {
public:
    AddNewWindow();
    // Inherited via Window
    virtual void doTheTask() override;

private:
    Options options;

};

