#include "Rectangle.h"

const std::string Rectangle::shapeName = "Rectangle";

Rectangle::Rectangle() {
	this->a = -1;
	this->b = -1;
	perimeter = -1;
	area = -1;
}

Rectangle::Rectangle(double a, double b) {
	this->a = a;
	this->b = b;
	perimeter = calculatePerimeter();
	area = calculateArea();
}

double Rectangle::calculatePerimeter() {
	return (2*a + 2*b);
}

double Rectangle::calculateArea() {
	return a*b;
}


std::string Rectangle::toString() {
	std::string text;

	text += shapeName;
	text += " a = ";
	text += std::to_string(a);
	text += " b = ";
	text += std::to_string(b);
	text += " perimeter = ";
	text += std::to_string(perimeter);
	text += " area = ";
	text += std::to_string(area);

	return text;
}

