#pragma once
#include "Rectangle.h"
class Square :
    public Rectangle {
public:
    Square();
    Square(int maxValue);
    Square(double a);
    virtual std::string toString() override;
};

