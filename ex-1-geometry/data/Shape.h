#pragma once
#include <string>
#include "../ui/UI.h"

class Shape {
public:
	virtual std::string toString() = 0;
	double getPerimeter();
	double getArea();
	void printFormulas();

protected:
	virtual double calculatePerimeter() = 0;
	virtual double calculateArea() = 0;
	double perimeter;
	double area;
	std::string shapeName;
	std::string areaFormula;
	std::string perimeterFormula;
};

