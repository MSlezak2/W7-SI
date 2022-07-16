#pragma once
#include "ui/UI.h"
#include "data/ShapeCollection.h"
#include "ui/Window.h"
#include "ui/MenuWindow.h"
#include "ui/AddNewShapeWindow.h"

class Controller {

public:
	void start();

private:
	UI ui;
	ShapeCollection shapeCollection;
	Window* window;

};

