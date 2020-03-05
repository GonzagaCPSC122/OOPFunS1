#include "DynamicPoint.h"

DynamicPoint::DynamicPoint() {
	// default to origin
	x = new double;
	y = new double;
	*x = 0.0;
	*y = 0.0;
}

DynamicPoint::DynamicPoint(double newX, double newY){
	x = new double;
	y = new double;
	*x = newX;
	*y = newY;
}

DynamicPoint::DynamicPoint(const DynamicPoint& other) {
	// properly copy values
	// important if there are pointers or rerferences!!
	x = new double;
	y = new double;
	*x = *(other.x);
	*y = *(other.y);
}

DynamicPoint::~DynamicPoint() {
	cout << "Hello from destructor of DynamicPoint "; 
	display();
	// now we actually need to free memory!!
	delete x;
	delete y;
}

double DynamicPoint::getX() {
	return *x;
}

double DynamicPoint::getY() {
	return *y;
}

void DynamicPoint::setX(double newX) {
	*x = newX;
}

void DynamicPoint::setY(double newY) {
	*y = newY;
}

void DynamicPoint::display() {
	cout << "(" << *x << ", " << *y << ")" << endl;
}
