#include "Circle.h"
#include <iostream>


Circle::Circle() {
	shapeName = "Circle";
	areaFormula = "π×r×r";
	perimeterFormula = "2×π×r";
}

Circle::Circle(int maxValue) {
	std::cout << "r:\t";
	r = UI::readNumber(1, maxValue);
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Circle";
	areaFormula = "π×r×r";
	perimeterFormula = "2×π×r";
}

Circle::Circle(double r) {
	this->r = r;
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Circle";
	areaFormula = "π×r×r";
	perimeterFormula = "2×π×r";
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

