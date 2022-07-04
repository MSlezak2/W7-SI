#include "Rectangle.h"
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Trapezium.h"

int main() {

	Rectangle rec(4,6);
	std::cout << rec.toString() << std::endl;

	Square sq(5);
	std::cout << sq.toString() << std::endl;

	Triangle tri(3,4,5,4);
	std::cout << tri.toString() << std::endl;

	Circle ci(9);
	std::cout << ci.toString() << std::endl;

	Trapezium tra(11, 5, 5, 5, 4);
	std::cout << tra.toString() << std::endl;

	return 0;
}