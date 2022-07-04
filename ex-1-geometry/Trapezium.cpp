#include "Trapezium.h"

const std::string Trapezium::shapeName = "Trapezium";

Trapezium::Trapezium(double a, double b, double c, double d, double h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->h = h;
	perimeter = calculatePerimeter();
	area = calculateArea();
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

