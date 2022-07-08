#pragma once
#include "UI.h"
#include "ShapeCollection.h"

class Controller {

public:
	void start();

private:
	UI ui;
	ShapeCollection shapeCollection;

};

