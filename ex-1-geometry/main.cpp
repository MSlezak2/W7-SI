#include "Rectangle.h"
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Trapezium.h"
#include "ShapeCollection.h"
#include "UI.h"

int main() {

	//Rectangle rec(5,15);
	//std::cout << rec.toString() << std::endl;

	//Square sq(10);
	//std::cout << sq.toString() << std::endl;

	//Triangle tri(3,4,5,4);
	//std::cout << tri.toString() << std::endl;

	//Circle ci(5);
	//std::cout << ci.toString() << std::endl;

	//Trapezium tra(11, 5, 5, 5, 4);
	//std::cout << tra.toString() << std::endl;

	//ShapeCollection shapeCollection;
	//shapeCollection.addShape(rec);
	//shapeCollection.addShape(sq);
	//shapeCollection.addShape(tri);
	//shapeCollection.addShape(ci);
	//shapeCollection.addShape(tra);

	//std::cout << (shapeCollection.getLargestShapeByArea())->toString() << std::endl;
	//std::cout << (shapeCollection.getLargestShapeByPerimeter())->toString() << std::endl;

	//shapeCollection.getShapesTable();

	UI ui;
	ui.start();

	return 0;
}