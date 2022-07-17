#pragma once
#include "Window.h"
#include "../data/ShapeCollection.h"

class ShowAllShapesWindow :
    public Window {
public:
    ShowAllShapesWindow(ShapeCollection* shapeCollection);
    // Inherited via Window
    virtual void doTheTask() override;

private:
    ShapeCollection* shapeCollection;
};

