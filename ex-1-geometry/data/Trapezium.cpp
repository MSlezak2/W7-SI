#include "Trapezium.h"
#include <iostream>

Trapezium::Trapezium() {
	shapeName = "Trapezium";
	areaFormula = "((a+b)×h/2)";
	perimeterFormula = "a+b+c+d";
}

Trapezium::Trapezium(int maxValue) {
	std::cout << "a:\t";
	a = UI::readNumber(1, maxValue);
	std::cout << "b:\t";
	b = UI::readNumber(1, maxValue);
	std::cout << "c:\t";
	c = UI::readNumber(1, maxValue);
	std::cout << "d:\t";
	d = UI::readNumber(1, maxValue);
	std::cout << "h:\t";
	h = UI::readNumber(1, maxValue);
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Trapezium";
	areaFormula = "((a+b)×h/2)";
	perimeterFormula = "a+b+c+d";
}

Trapezium::Trapezium(double a, double b, double c, double d, double h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->h = h;
	perimeter = calculatePerimeter();
	area = calculateArea();
	shapeName = "Trapezium";
	areaFormula = "((a+b)×h/2)";
	perimeterFormula = "a+b+c+d";
}

double Trapezium::calculatePerimeter() {
	return (a + b + c + d);
}

double Trapezium::calculateArea() {
	return (((a + b) * h )/ 2.0);
}


std::string Trapezium::toString() {
	std::string text;

	text += shapeName;
	text += " a = ";
	text += std::to_string(a);
	text += " b = ";
	text += std::to_string(b);
	text += " c = ";
	text += std::to_string(c);
	text += " d = ";
	text += std::to_string(d);
	text += " h = ";
	text += std::to_string(h);
	text += " perimeter = ";
	text += std::to_string(perimeter);
	text += " area = ";
	text += std::to_string(area);

	return text;
}

