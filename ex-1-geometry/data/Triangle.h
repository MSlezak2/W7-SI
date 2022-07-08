#pragma once
#include "Shape.h"
class Triangle :
    public Shape {
public:
    Triangle(int maxValue);
    Triangle(double a, double b, double c, double h);
    virtual std::string toString() override;
    virtual double calculatePerimeter() override;
    virtual double calculateArea() override;

protected:
    double a, b, c, h;

private:
    static const std::string shapeName;
};

