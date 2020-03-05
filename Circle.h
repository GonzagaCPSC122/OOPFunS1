#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Point.h"

using namespace std;

class Circle {
	private:
		double radius;
		// composition is a relationship between two classes that represents a "has a" relationship (e.g. one class is composed of another class)
		// "Circle has a Point"
		// composition is similar to aggregation, they are different, but we won't worry about the difference in this class
		Point center;
	public:
		Circle(); // default value constructor
		Circle(double, double, double); // explicit value constructor
		Circle(double, Point); // another explicit value constructor
		Circle(const Circle&); // copy constructor
		~Circle(); // destructor
		double getRadius(); // getter
		Point getPoint(); // getter
		void setRadius(double); // setter
		void setPoint(Point); // setter
		void display(); 
};


#endif
