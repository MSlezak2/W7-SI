#include "Square.h"
#include <iostream>

Square::Square() {
	shapeName = "Square";
	areaFormula = "a×a";
	perimeterFormula = "4×a";
}

Square::Square(int maxValue) {
	std::cout << "a:\t";
	a = UI::readNumber(1, maxValue);
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Square";
	areaFormula = "a×a";
	perimeterFormula = "4×a";
}

Square::Square(double a) {
	this->a = a;
	this->b = a;
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Square";
	areaFormula = "a×a";
	perimeterFormula = "4×a";
}

std::string Square::toString() {
	std::string text;

	text += shapeName;
	text += " a = ";
	text += std::to_string(b);
	text += " perimeter = ";
	text += std::to_string(perimeter);
	text += " area = ";
	text += std::to_string(area);

	return text;
}
