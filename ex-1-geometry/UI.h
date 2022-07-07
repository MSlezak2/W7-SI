#pragma once
#include <string>
#include "UsersChoices.h"

class ShapeCollection;
class Shape;
class Circle;
class Rectangle;
class Square;
class Trapezium;
class Triangle;


class UI {
public:
	void start(ShapeCollection shapeCollection);
	static int readNumber(int rangeStart, int rangeEnd);

private:
	UsersChoices usersChoices;
};

