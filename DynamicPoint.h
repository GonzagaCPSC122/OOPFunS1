#ifndef DYNAMIC_POINT_H
#define DYNAMIC_POINT_H

#include <iostream>

using namespace std;

// demos dynamic memory allocation in objects
// emphasis on proper use of copy constructor and destructor
class DynamicPoint {
	private:
		double * x; // pointers to dynamically
		double * y; // allocated doubles
	public:
		DynamicPoint(); // default value constructor
		DynamicPoint(double, double); // explicit value constructor
		DynamicPoint(const DynamicPoint&); // copy constructor
		~DynamicPoint(); // destructor
		double getX(); // getter
		double getY(); // getter
		void setX(double); // setter
		void setY(double); // setter
		void display(); 
};


#endif
