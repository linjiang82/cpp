#include "Circle.h"

Circle::Circle() : PI(3.14159) { this->radius = 1; };
Circle::Circle(double radius) : PI(3.14159) { this->radius = radius; };
double Circle::getRadius() const { return this->radius; };
void Circle::setRadius(double radius) { this->radius = radius; };
double Circle::circumference() const { return 2 * PI * this->radius; };
double Circle::area() const { return PI * this->radius * this->radius; };
