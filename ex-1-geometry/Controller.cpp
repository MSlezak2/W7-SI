#include "Controller.h"

void Controller::start() {

	int state = 0;

	while (state != -1) {
		switch (state) {
		case 0: // state MAIN MENU
		{
			std::cout << "MAIN MENU" << std::endl << std::endl;
			//std::map<int, std::string> states = { {1, "Add new shape"}, {2, "Show all shapes"},
			//	{3, "Show shape with the largest perimeter"}, {4, "Show shape with the largest area"},
			//	{5, "Show formulas"} };
			//ui.usersChoices.setStates(states);
			//state = usersChoices.chooseNewState();
			break;
		}
		case 1:
		{
			std::cout << "ADD NEW SHAPE" << std::endl << std::endl;
			std::vector<std::string> options = { "Circle", "Rectangle", "Square", "Trapezium", "Triangle" }; // TODO: Replace with enums
			////usersChoices.setOptions(options);
			//int chosenOption = usersChoices.chooseOption();
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
			getchar();
			state = 0;
			break;
		}
		case 2:
			std::cout << "STATE SHOW ALL" << std::endl;
			getchar();
			state = 0;
			break;
		}
	}
}