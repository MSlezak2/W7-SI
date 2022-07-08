#include "UI.h"

#include "ShapeCollection.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezium.h"
#include "Triangle.h"

#include <iostream>
#include <map>


//void UI::start(ShapeCollection shapeCollection) {
//
//	int state = 0;
//
//	while (state != -1) {
//		switch (state) {
//		case 0: // state MAIN MENU
//		{
//			std::cout << "MAIN MENU" << std::endl << std::endl;
//			std::map<int, std::string> states = { {1, "Add new shape"}, {2, "Show all shapes"},
//				{3, "Show shape with the largest perimeter"}, {4, "Show shape with the largest area"},
//				{5, "Show formulas"} };
//			usersChoices.setStates(states);
//			state = usersChoices.chooseNewState();
//			break;
//		}
//		case 1:
//		{
//			std::cout << "ADD NEW SHAPE" << std::endl << std::endl;
//			std::vector<std::string> options = { "Circle", "Rectangle", "Square", "Trapezium", "Triangle" }; // TODO: Replace with enums
//			usersChoices.setOptions(options);
//			int chosenOption = usersChoices.chooseOption();
//			/*Shape* newShape;
//			switch (chosenOption) {
//			case 1: 
//				newShape = &Circle(INT_MAX);
//				break;
//			case 2:
//				newShape = &Rectangle(INT_MAX);
//				break;
//			case 3:
//				newShape = &Square(INT_MAX);
//				break;
//			case 4:
//				newShape = &Trapezium(INT_MAX);
//				break;
//			case 5:
//				newShape = &Triangle(INT_MAX);
//				break;
//			}
//			shapeCollection.addShape(*newShape);*/
//			getchar();
//			state = 0;
//			break;
//		}
//		case 2:
//			std::cout << "STATE SHOW ALL" << std::endl;
//			getchar();
//			state = 0;
//			break;
//		}
//	}
//}

int UI::readNumber(int rangeStart, int rangeEnd) {

	int number = HUGE_VAL;
	std::string userInput;

	while (number < rangeStart || number > rangeEnd) {
		std::cin >> userInput;
		try {
			number = stoi(userInput);
			if (number < rangeStart || number > rangeEnd) {
				std::cout << "Look, you've reached out of the allowed range" << std::endl;
			}
		} catch (const std::invalid_argument&) {
			std::cout << "It's not even a number!" << std::endl;
		} catch (const std::out_of_range&) {
			std::cout << "That number is way too large!" << std::endl;
		}
	}

	return number;
}

