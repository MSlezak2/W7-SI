#pragma once
#include "Shape.h"

class Circle :
    public Shape {
public:
    Circle();
    Circle(int maxValue);
    Circle(double r);
    virtual std::string toString() override;
    virtual double calculatePerimeter() override;
    virtual double calculateArea() override;

protected:
    double r;
};

