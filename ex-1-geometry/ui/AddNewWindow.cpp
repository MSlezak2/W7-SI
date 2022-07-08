#include "AddNewWindow.h"

AddNewWindow::AddNewWindow() {
	title = "ADD NEW SHAPE";
	options.setOptions({ "Circle", "Rectangle", "Square", "Trapezium", "Triangle" }) ; // TODO: Replace with enums
	availableStates.setStates({ {0, "MAIN MENU"} });
}

void AddNewWindow::doTheTask() {
	
	int chosenOption = options.chooseOption();
	/*Shape* newShape;
	switch (chosenOption) {
	case 1:
		newShape = &Circle(INT_MAX);
		break;
	case 2:
		newShape = &Rectangle(INT_MAX);
		break;
	case 3:
		newShape = &Square(INT_MAX);
		break;
	case 4:
		newShape = &Trapezium(INT_MAX);
		break;
	case 5:
		newShape = &Triangle(INT_MAX);
		break;
	}
	shapeCollection.addShape(*newShape);*/
}
