#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {
	shapeName = "Triangle";
	areaFormula = "a×h/2";
	perimeterFormula = "a+b+c";
}

Triangle::Triangle(int maxValue) {
	std::cout << "a:\t";
	a = UI::readNumber(1, maxValue);
	std::cout << "b:\t";
	b = UI::readNumber(1, maxValue);
	std::cout << "c:\t";
	c = UI::readNumber(1, maxValue);
	std::cout << "h:\t";
	h = UI::readNumber(1, maxValue);
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Triangle";
	areaFormula = "a×h/2";
	perimeterFormula = "a+b+c";
}

Triangle::Triangle(double a, double b, double c, double h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Triangle";
	areaFormula = "a×h/2";
	perimeterFormula = "a+b+c";
}

double Triangle::calculatePerimeter() {
	return (a + b + c);
}

double Triangle::calculateArea() {
	return (a * h / 2.0);
}


std::string Triangle::toString() {
	std::string text;

	text += shapeName;
	text += " a = ";
	text += std::to_string(a);
	text += " b = ";
	text += std::to_string(b);
	text += " c = ";
	text += std::to_string(c);
	text += " h = ";
	text += std::to_string(h);
	text += " perimeter = ";
	text += std::to_string(perimeter);
	text += " area = ";
	text += std::to_string(area);

	return text;
}

