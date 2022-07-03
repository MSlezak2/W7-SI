#pragma once
#include <string>

class Shape {
public:
	virtual std::string toString() = 0;
	double getPerimeter();
	double getArea();

protected:
	virtual double calculatePerimeter() = 0;
	virtual double calculateArea() = 0;
	double perimeter;
	double area;
};

