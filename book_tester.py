class Book:
    """Represents a library book.
    """
    def __init__(self, title_param: str, checked_out_param: bool = False) -> None:
        self.title = title_param
        self.checked_out = checked_out_param

    def __str__(self) -> str:
        str_rep = f"{self.title} is checked out: {self.checked_out}"
        return str_rep

hp1 = Book("HP & Sorcerer's Stone", False)
print(hp1)