#include "AddNewShapeWindow.h"
#include "../data/Shape.h"
#include "../data/Circle.h"
#include "../data/Trapezium.h"
#include "../data/Triangle.h"
#include "../data/Rectangle.h"
#include "../data/Square.h"

AddNewShapeWindow::AddNewShapeWindow(ShapeCollection* shapeCollection) {
	title = "ADD NEW SHAPE";
	options.setOptions({ "Circle", "Rectangle", "Square", "Trapezium", "Triangle" }) ; // TODO: Replace with enums
	availableStates.setStates({ {0, "MAIN MENU"} });
	this->shapeCollection = shapeCollection;
}

void AddNewShapeWindow::doTheTask() {
	
	int chosenOption = options.chooseOption();
	Shape* newShape = nullptr;
	switch (chosenOption) {
	case 1:
		newShape = new Circle(INT_MAX);
		break;
	case 2:
		newShape = new Rectangle(INT_MAX);
		break;
	case 3:
		newShape = new Square(INT_MAX);
		break;
	case 4:
		newShape = new Trapezium(INT_MAX);
		break;
	case 5:
		newShape = new Triangle(INT_MAX);
		break;
	}
	shapeCollection->addShape(*newShape);

	std::cout << "What would you like to do next?" << std::endl;
}
