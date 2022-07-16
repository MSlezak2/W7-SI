#pragma once
#include "Window.h"
#include "Options.h"
#include "../data/ShapeCollection.h"

class AddNewShapeWindow :
    public Window {
public:
    AddNewShapeWindow(ShapeCollection* shapeCollection);
    // Inherited via Window
    virtual void doTheTask() override;

private:
    Options options;
    ShapeCollection* shapeCollection;


};

