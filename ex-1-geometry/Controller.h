#pragma once
#include "ui/UI.h"
#include "data/ShapeCollection.h"

class Controller {

public:
	void start();

private:
	UI ui;
	ShapeCollection shapeCollection;

};

