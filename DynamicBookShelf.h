#ifndef DYNAMIC_BOOKSHELF_H
#define DYNAMIC_BOOKSHELF_H

#include <iostream>
#include "Book.h"

using namespace std;

// demos dynamic memory allocation of arrays in objects
// emphasis on proper use of copy constructor and destructor
class DynamicBookShelf {
	private:
		Book * books; // pointer to dyn alloc array of Book objects
		int numBooks;
	public:
		DynamicBookShelf(); // default value constructor
		DynamicBookShelf(int); // explicit value constructor
		DynamicBookShelf(const DynamicBookShelf&); // copy constructor
		~DynamicBookShelf(); // destructor
		void display(); 
};


#endif
