#pragma once
#include "Window.h"
#include "../data/ShapeCollection.h"

class ShowLargestAreaWindow :
    public Window {
public:
    ShowLargestAreaWindow(ShapeCollection* shapeCollection);
    // Inherited via Window
    virtual void doTheTask() override;

private:
    ShapeCollection* shapeCollection;
};