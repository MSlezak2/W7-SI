#pragma once
#include "Rectangle.h"
class Square :
    public Rectangle {
public:
    Square(double a);
    virtual std::string toString() override;

private:
    static const std::string shapeName;
};

