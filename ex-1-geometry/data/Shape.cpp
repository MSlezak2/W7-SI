#include "Shape.h"
#include <iostream>


double Shape::getPerimeter() {
    return perimeter;
}

double Shape::getArea() {
    return area;
}

void Shape::printFormulas() {
    std::cout << shapeName << "'s area formula: " << areaFormula << std::endl;
    std::cout << shapeName << "'s perimeter formula: " << perimeterFormula << std::endl;
}

