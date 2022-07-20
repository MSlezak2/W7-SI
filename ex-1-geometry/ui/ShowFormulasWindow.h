#pragma once
#include "Window.h"
#include "Options.h"
class ShowFormulasWindow :
    public Window {
public:
    ShowFormulasWindow();
    // Inherited via Window
    virtual void doTheTask() override;

private:
    Options options;

};

