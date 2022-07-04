#pragma once
#include "Shape.h"
class Trapezium :
    public Shape {
public:
    Trapezium(double a, double b, double c, double d, double h);
    virtual std::string toString() override;
    virtual double calculatePerimeter() override;
    virtual double calculateArea() override;

protected:
    double a, b, c, d, h;

private:
    static const std::string shapeName;
};

