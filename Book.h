#ifndef BOOK_H
#define BOOK_H

#include <iostream>

using namespace std;

// OOP object oriented programming
// object is an instance of a class
// class is a collection of STATE and BEHAVIOR that completely describes something
// state: attributes (AKA member variables)
// behavior: member functions that operate on the state (attributes)
// classes are like struct definitions, with the addition of a few things... member functions and constructors and access modifiers

// classes are defines in their own header file
class Book {
	// default access modifier for members of a class is "private"
	private:
		// private means accessible only within this class (member functions)
		string title;
		string author;
		int numPages;
	public:
		// public means accessible anywhere
		// a constructor is a special member function that creates objects by initializing member attribute values (and other things...)
		// c++ always has a default constructor for every class that does nothing
		// constructors have no return type...
		// they can have 0 or more arguments/parameters
		// a constructor with 0 arguments is called the default value constructor (DVC)
		Book(); // prototype for DVC
		// can overload constructors to accept arguments
		// explicit value constructor (EVC)
		Book(string, string, int); // EVC prototype
		// can have multiple EVCs!! same rules as function overloading
		// a destructor is a special member function that is called when an object is about to be destroyed (AKA destructed AKA deallocated)
		// what should a destructor do?
		// free/release any resources (e.g. close files) free/deallocate any dynamically allocated memory
		// no return type, no arguments, no overloading... there is only one desctructor
		~Book(); // destructor prototype
		
		// member functions
		void display();
		// getters (AKA accessors)
		// a getter is a public member function for getting a private attribute value
		string getTitle() const; // the const denotes that this member function cannot modify memory of the object (read only)
		string getAuthor() const;
		int getNumPages() const;
		// setters (AKA mutators)
		void setTitle(string);
		void setAuthor(string);
		void setNumPages(int);

};


#endif
