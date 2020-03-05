#include "Book.h"
#include "Point.h"
#include "Circle.h"
#include "DynamicPoint.h"
#include "DynamicBookShelf.h"

int main() {
	// make Book objects (Book variables or memory that stores a Book)
	Book connorsBook; // DVC // garabage values for our member variables (attributes);
	// because the attributs are public
	/*cout << connorsBook.numPages << endl;
	connorsBook.title = "the name of the wind";
	connorsBook.author = "Patrick";
	connorsBook.numPages = 669;
	cout << connorsBook.numPages << endl;*/
	// define a member function 
	// void display();
	connorsBook.display(); // display() will operate on the invoking object connorsBook
	
	Book hp1; // DVC
	/*hp1.title = "Sorcerer's Stone";
	hp1.author = "JKR";
	hp1.numPages = 250;
	// invoke display() using hp1*/
	hp1.display();
	// call the getter
	cout << hp1.getTitle() << endl;
	// call the setter
	hp1.setTitle("SORCERER'S STONE");
	hp1.setAuthor("JKR");
	hp1.setNumPages(250);
	hp1.display();
	
	// we can have pointers to objects
	// just like we can pointers to structs
	Book * bookPtr = &hp1;
	// can use ->
	bookPtr->display();
	// just like structs, can dyn allocate objects (single ones or in an array)
	
	Book hp2("Chamber of Secrets", "Rowling", 310); // EVC
	hp2.display();
	
	// task 1: define a Point class in Point.cpp and Point.h that represents a point in 2D space (x and y double attributes... make them private). also define DVC (the origin), EVC(s), display() should print out the Point in the form (x, y). test your Point class by creating some Point objects here in main()
	// task 2: define a Circle class in Circle.cpp and Circle.h that represents a 2D circle with private attributes double radius and Point center. This is an example of composition, which is a "has-a" relationship between two classes. "Circle has a Point". Include DVC, EVC(s), and display(). Test in main()
	
	Point origin; // DVC
	cout << "origin: ";
	origin.display();
	Point p1(1.5, -3.2); // EVC
	p1.setY(-p1.getY());
	cout << "p1: ";
	p1.display();
	Point p2 = p1; // memberwise assignment operator used to initialize a new object, invokes copy constructor. Be cautious of this if the attributes are pointers or references!!
	cout << "p2: ";
	p2.display();
	p2.setX(500.5);
	Point p3(p2); // copy constructor
	cout << "p3: ";
	p3.display();
	Point * p4Ptr = new Point(p3); // copy constructor
	cout << "p4Ptr: ";
	p4Ptr->display();
	delete p4Ptr;
	Point p5; // DVC
	p5 = p3; // memberwise assignment operator used to  copy values into an existing object, DOES NOT invoke copy constructor. in CPSC 223 you will learn about operator overloading and how to overload this operator. Until then, be cautious of this if the attributes are pointers or references!!
	cout << "p5: ";
	p5.display();
	
	Circle c1; // DVC
	cout << "c1: ";
	c1.display();
	Circle c2(10.5, p1); // EVC
	cout << "c2: ";
	c2.display();
	Circle c3(-1.0, 2.0, 3.0); // EVC
	cout << "c3: ";
	c3.display();
	Circle c4(c3); // copy constructor
	c4.setRadius(99.9);
	cout << "c4: ";
	c4.display();
	Circle * c5Ptr = new Circle(45.1, p3); // EVC
	cout << "c5Ptr: ";
	c5Ptr->display();
	delete c5Ptr;
	Circle c6; // DVC
	
	// demo of objects with dynamic memory allocation
	DynamicPoint dOrigin; // DVC
	cout << "dOrigin: ";
	dOrigin.display();
	DynamicPoint dp1(1.5, -3.2); // EVC
	dp1.setY(-dp1.getY());
	cout << "dp1: ";
	dp1.display();
	DynamicPoint dp2 = dp1; // memberwise assignment operator used to initialize a new object, invokes copy constructor. Be cautious of this if the attributes are pointers or references!!
	cout << "dp2: ";
	dp2.display();
	dp2.setX(500.5);
	DynamicPoint dp3(dp1); // copy constructor
	cout << "dp3: ";
	dp3.display();
	DynamicPoint * dp4Ptr = new DynamicPoint(dp2); // copy constructor
	cout << "dp4Ptr: ";
	dp4Ptr->display();
	delete dp4Ptr;
	DynamicPoint dp5; // DVC
	// this next line if uncommented crashes the program with "free(): double free detected in tcache 2 Aborted (core dumped)" 
	//dp5 = dp3; // why? memberwise assignment operator used to copy values into an existing object, DOES NOT invoke copy constructor. pointers from dp3 are copied to dp5. When dp3 is deallocated its constructor frees the memory x and y point to, which is the same memory dp5's x and y point to. When dp5 is deallocated its constructor tries to free that memory that has already been freed!
	// in CPSC 223 you will learn about operator overloading and how to overload this operator. Until then, be cautious of this if the attributes are pointers or references!!
	
	DynamicBookShelf dbs1; // DVC
	cout << "dbs1: ";
	dbs1.display();
	DynamicBookShelf dbs2(5); // EVC for 5 books
	cout << "dbs2: ";
	dbs2.display();
	DynamicBookShelf dbs3(dbs2); // copy contructor
	cout << "dbs3: ";
	dbs3.display();
	
	return 0;
}
