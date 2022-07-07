#pragma once
#include "Shape.h"
class Rectangle :
    public Shape {
public:
    Rectangle();
    Rectangle(int maxValue);
    Rectangle(double a, double b);
    virtual std::string toString() override;
    virtual double calculatePerimeter() override;
    virtual double calculateArea() override;

protected:
    double a, b;
    
private:
    static const std::string shapeName;
};

