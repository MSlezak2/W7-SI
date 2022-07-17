#pragma once
#include "Window.h"
#include "../data/ShapeCollection.h"

class ShowLargestPerimeterWindow :
    public Window {
public:
    ShowLargestPerimeterWindow(ShapeCollection* shapeCollection);
    // Inherited via Window
    virtual void doTheTask() override;

private:
    ShapeCollection* shapeCollection;
};