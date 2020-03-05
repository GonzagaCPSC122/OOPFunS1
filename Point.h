#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

// demo of copy constructor
// note the "rule of three": if a class defines any of the
// following, then it should define all three:
// 1) destructor 2) copy constructor 3) memberwise copy assignment operator**
// **defining memberwise copy assignment for a class requires operator overloading, which will be covered in CPSC 223, but you should be aware of it now in case you inadvertently use it improperly
class Point {
	private:
		double x;
		double y;
	public:
		Point(); // default value constructor
		Point(double, double); // explicit value constructor
		// a copy constructor is a constructor that is called when a new object is initialized with another object's data
		// called in one of two cases
		// 1) Point p(otherPoint); // where otherPoint is a Point object
		// 2) Point p = otherPoint; // where otherPoint is a Point object
		// NOT called with p = otherPoint; because this is not object creation since p already exists. This is memberwise copy assignment (see #3 in the rule of three above)
		Point(const Point&); // copy constructor
		~Point(); // destructor
		double getX(); // getter
		double getY(); // getter
		void setX(double); // setter
		void setY(double); // setter
		void display(); 
};


#endif
