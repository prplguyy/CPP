#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	//
}

double Circle::calcPerimiter() const{
	std::cout << "calcPerimiter of Circle...";
	//
}
