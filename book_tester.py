import copy
from typing import Any

class Book:
    """Represents a library book.
    """
    def __init__(self, title_param: str, checked_out_param: bool = False) -> None:
        self.title = title_param
        self.checked_out = checked_out_param

    def __str__(self) -> str:
        str_rep = f"{self.title} is checked out: {self.checked_out}"
        return str_rep
    
    def __eq__(self, other: Any) -> bool:
        # we get to define how two Books are compared for equality
        # two books are equal if they have the same title
        return self.title == other.title

    def check_out(self) -> None:
        self.checked_out = True


hp1 = Book("HP & Sorcerer's Stone", False)
print(hp1)
book_shelf: list[Book] = [
    hp1,
    Book("HP & Chamber of Secrets"),
    Book("HP & Prisoner of Azkaban"),
    Book("HP & Goblet of Fire")
]

print("for loop:")
for book in book_shelf:
    print(book)
    book.check_out()
    print(book)
    print()

print(hp1 == book_shelf[0])
print(hp1 is book_shelf[0])
hp1_copy = copy.copy(hp1)
print(hp1 == hp1_copy)
print(hp1 is hp1_copy)