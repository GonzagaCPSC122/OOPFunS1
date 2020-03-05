#include "DynamicBookShelf.h"

DynamicBookShelf::DynamicBookShelf() {
	// empty book shelf
	books = NULL;
	numBooks = 0;
}

DynamicBookShelf::DynamicBookShelf(int size) {
	books = new Book[size];
	numBooks = size;
}

DynamicBookShelf::DynamicBookShelf(const DynamicBookShelf& other) {
	if (other.numBooks > 0) {
		// we have books to copy
		books = new Book[other.numBooks];
		numBooks = other.numBooks;
		for (int i = 0; i < numBooks; i++) {
			books[i] = other.books[i]; // remember, this is memberwise assignment that doesn't invoke the copy constructor
		}
	}
	else { 
		// no books to copy, so empty book shelf
		books = NULL;
		numBooks = 0;
	}
}

DynamicBookShelf::~DynamicBookShelf() {
	cout << "Hello from destructor of DynamicBookShelf" << endl; 
	if (books != NULL) {
		// we have memory to free
		delete [] books;
		books = NULL; // good practice
		numBooks = 0; // good practice
	}
}

void DynamicBookShelf::display() {
	cout << "***Book Shelf Books***" << endl;
	for (int i = 0; i < numBooks; i++) {
		books[i].display();
	}
	cout << "******" << endl;
}
