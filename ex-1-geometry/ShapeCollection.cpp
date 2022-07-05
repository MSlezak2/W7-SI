#include "ShapeCollection.h"

void ShapeCollection::addShape(Shape& shape) {
	shapes.push_back(&shape);
	int a;
}

void ShapeCollection::getShapesTable() {
	for (size_t i = 0; i < shapes.size(); i++) {
		std::cout << shapes[i]->toString();
	}
}

Shape* ShapeCollection::getLargestShapeByPerimeter() {
	
	double largestPerimeter = 0;
	int indexOfLargestPerimeter = 0;

	for (int i = 0; i < shapes.size(); i++) {
		if ((*shapes[i]).getPerimeter() > largestPerimeter) {
			largestPerimeter = (*shapes[i]).getPerimeter();
			indexOfLargestPerimeter = i;
		}
	}

	return &(*shapes[indexOfLargestPerimeter]);
}

Shape* ShapeCollection::getLargestShapeByArea() {

	double largestArea = 0;
	int indexOfLargestArea = 0;

	for (int i = 0; i < shapes.size(); i++) {
		if ((*shapes[i]).getArea() > largestArea) {
			largestArea = (*shapes[i]).getArea();
			indexOfLargestArea = i;
		}
	}

	return &(*shapes[indexOfLargestArea]); // TODO: what to return if collection is empty? Exception? Null pointer?
}
