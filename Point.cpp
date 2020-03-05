#include "Point.h"

Point::Point() {
	// default to origin
	x = 0.0;
	y = 0.0;
}

Point::Point(double newX, double newY){
	x = newX;
	y = newY;
}

Point::Point(const Point& other) {
	// properly copy values
	// important if there are pointers or rerferences!!
	x = other.x;
	y = other.y;
}

Point::~Point() {
	// nothing to do
	cout << "Hello from destructor of Point "; 
	display();
}

double Point::getX() {
	return x;
}

double Point::getY() {
	return y;
}

void Point::setX(double newX) {
	x = newX;
}

void Point::setY(double newY) {
	y = newY;
}

void Point::display() {
	cout << "(" << x << ", " << y << ")" << endl;
}
