#pragma once
#include <vector>
#include <iostream>
#include "Shape.h"

class ShapeCollection {
public:
	std::vector<Shape*> shapes;
	void addShape(Shape& shape);
	void getShapesTable();
	Shape* getLargestShapeByPerimeter();
	Shape* getLargestShapeByArea();
};

