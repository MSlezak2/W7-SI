#include "Circle.h"
#include <iostream>

const std::string Circle::shapeName = "Circle";

Circle::Circle(int maxValue) {
	std::cout << "r:\t";
	r = UI::readNumber(1, maxValue);
}

Circle::Circle(double r) {
	this->r = r;
	perimeter = calculatePerimeter();
	area = calculateArea();
}

double Circle::calculatePerimeter() {
	return (2 * r * 3.1415);
}

double Circle::calculateArea() {
	return (3.1415 * r * r);
}


std::string Circle::toString() {
	std::string text;

	text += shapeName;
	text += " r = ";
	text += std::to_string(r);
	text += " perimeter = ";
	text += std::to_string(perimeter);
	text += " area = ";
	text += std::to_string(area);

	return text;
}

