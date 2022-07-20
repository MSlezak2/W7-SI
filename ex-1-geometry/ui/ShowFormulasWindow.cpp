#include "ShowFormulasWindow.h"
#include "ShowFormulasWindow.h"
#include "../data/Shape.h"
#include "../data/Circle.h"
#include "../data/Rectangle.h"
#include "../data/Square.h"
#include "../data/Trapezium.h"
#include "../data/Triangle.h"

ShowFormulasWindow::ShowFormulasWindow() {
	title = "SHOW FORMULAS";
	availableStates.setStates({ {0, "MAIN MENU"} });
	options.setOptions({ "Circle", "Rectangle", "Square", "Trapezium", "Triangle" });
}

void ShowFormulasWindow::doTheTask() {

	int chosenOption = options.chooseOption();
	Shape* shape = nullptr;
	switch (chosenOption) {
	case 1:
		shape = new Circle();
		break;
	case 2:
		shape = new Rectangle();
		break;
	case 3:
		shape = new Square();
		break;
	case 4:
		shape = new Trapezium();
		break;
	case 5:
		shape = new Triangle();
		break;
	}
	shape->printFormulas();
	std::cout << "What would you like to do next?" << std::endl;
}
