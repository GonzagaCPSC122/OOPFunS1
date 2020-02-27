#include "Book.h"

int main() {
	// make Book objects (Book variables or memory that stores a Book)
	Book connorsBook; // garabage values for our member variables (attributes);
	// because the attributs are public
	/*cout << connorsBook.numPages << endl;
	connorsBook.title = "the name of the wind";
	connorsBook.author = "Patrick";
	connorsBook.numPages = 669;
	cout << connorsBook.numPages << endl;*/
	// define a member function 
	// void display();
	connorsBook.display(); // display() will operate on the invoking object connorsBook
	
	Book hp1("Sorcerer's Stone", "JKR", 250);
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
	
	
	
	return 0;
}
