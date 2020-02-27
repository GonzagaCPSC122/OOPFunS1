#include "Book.h"

// :: scope resolution operator
// and it defines membership of this function to the class Book
void Book::display() {
	// note that there are no arguments....
	// but we can access the member attributes of the class, even if they are private
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Number of pages: " << numPages << endl;
}

string Book::getTitle() const {
	return title; // can access private attributes here because I'm in the class
}

string Book::getAuthor() const {
	return author; 
}

int Book::getNumPages() const {
	return numPages;
}	

void Book::setTitle(string newTitle) {
	title = newTitle;
}

void Book::setAuthor(string newAuthor) {
	author = newAuthor;
}

void Book::setNumPages(int newNumPages) {
	numPages = newNumPages;
}
