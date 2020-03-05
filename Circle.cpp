#include "Circle.h"

Circle::Circle() {
	// default to unit circle
	radius = 1.0;
	Point origin;
	center = origin;
}
Circle::Circle(double newRadius, double newX, double newY) {
	radius = newRadius;
	Point c(newX, newY);
	center = c;
}

Circle::Circle(double newRadius, Point newCenter) {
	radius = newRadius;
	center = newCenter;
}

Circle::Circle(const Circle& other) {
	// properly copy values
	// important if there are pointers or rerferences!!
	radius = other.radius;
	center = other.center;
}

Circle::~Circle() {
	// nothing to do
	cout << "Hello from destructor of "; 
	display();	
}

double Circle::getRadius() {
	return radius;
}

Point Circle::getPoint() {
	return center;
}

void Circle::setRadius(double newRadius) {
	radius = newRadius;
}

void Circle::setPoint(Point newCenter) {
	center = newCenter;
}

void Circle::display() {
	cout << "Circle with radius " << radius << " and center ";
	center.display();
}
