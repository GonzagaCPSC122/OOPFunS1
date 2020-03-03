#include "Book.h"
#include "Point.h"

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
	
	return 0;
}
