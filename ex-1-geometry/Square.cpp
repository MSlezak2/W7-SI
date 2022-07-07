#include "Square.h"

const std::string Square::shapeName = "Square";

Square::Square(int maxValue) {
	a = UI::readNumber(1, maxValue);
}

Square::Square(double a) {
	this->a = a;
	this->b = a;
	perimeter = calculatePerimeter();
	area = calculateArea();
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
