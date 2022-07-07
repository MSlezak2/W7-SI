#include "Rectangle.h"
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Trapezium.h"
#include "ShapeCollection.h"
#include "UI.h"

int main() {

	ShapeCollection shapeCollection;

	UI ui;
	ui.start(shapeCollection);

	return 0;
}