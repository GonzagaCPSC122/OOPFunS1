"""
Questions from MA4
What is a linked list? What is an ADT? Can a design that is really good for one software goal like robustness or portability accidentally end up weakening another? 
Program treat docstrings differently than comments or are they both ignored? Why deep copy? What is self? 
Why hierarchy/inheritance improves code? How to design good test cases. 
Underscores in start of attribute names -> private? How do we label a class as the base class? 
Operator overloading and what error if operator called for class without a method defined for it? 
Abstract base classes. When use special methods? When should you use top down or bottom up testing? __slots_?
"""

# already covered or will be covered in class:
# Classes: What is self? # When use special methods? Operator overloading and what error if operator called for class without a method defined for it? 
# Inheritance: Why hierarchy/inheritance improves code? How do we label a class as the base class? 
# Testing: How to design good test cases. When should you use top down or bottom up testing?

# a linked list is a list where items may not be adjacent in memory like a normal list. 
# we are going to spend a couple weeks on them later in the semester. Stay tuned :)

# ADT stands for abstract data type. It is the public interface that describes a data type, 
# independent of how the data type is implemented under the hood (e.g., the data structure)
# Example: a list ADT should support adding items, removing items, getting the # of items in the
# list, etc. Under the hood, the list may be implemented with an array (items are adjacent in memory)
# or with a linked list (items are scattered in memory and linked together).
# We are going to cover several ADTs later in the semester

# yes, focusing on one software goal may inadvertently weaken another, but this doesn't have to be the case
# if you're intentional about your design

# triple quoted "comments", like the one at the top of this file are string literals just like the following is a string literal
my_str = "hello"
my_str = \
"""
hello,
there
"""
# docstrings are triple quoted string literals that are parsed by Python and retained for documentation purposes

# why deep copy? when you truly want to copy nested objects and not just references to nested objects
# example:
import copy 

def add_one(table):
    for i in range(len(table)):
        for j in range(len(table[i])):
            table[i][j] += 1

matrix = [[0, 1, 2], [3, 4, 5]]
print("matrix before:", matrix)
add_one(matrix)
print("matrix after:", matrix)
print()

# shallow copy: copies the references, not the objects
matrix_copy = matrix.copy()
print("matrix before:", matrix)
print("matrix_copy before:", matrix_copy)
add_one(matrix)
print("matrix after:", matrix)
print("matrix_copy after:", matrix_copy)
print()

# deep copy: copies the objects themselves
matrix_deep_copy = copy.deepcopy(matrix)
print("matrix before:", matrix)
print("matrix_copy before:", matrix_copy)
print("matrix_deep_copy before:", matrix_deep_copy)
add_one(matrix)
print("matrix after:", matrix)
print("matrix_copy after:", matrix_copy)
print("matrix_deep_copy after:", matrix_deep_copy)
# note that only the deep copy of matrix is unaffected by add_one(matrix)

# single underscore in name -> nonpublic
# now that we have learned about inheritance, we can think of
# single underscore more specfically -> protected
# protected meaning nonpublic but accessible by subclasses
# names beginning with double underscore (exclusing special methods) -> private

# an abstract base class is a class that is used as a base class through inheritance
# and no objects of this class should be instantiated, only objects of subclass types
# to make a class abstract, you need to do both of the following:
# 1. inherit from ABC
# 2. declare one or more abstract methods using @abstractmethod decorator
# (a decorator modifies or extends the behavior of something without changing its code)

# example: suppose we have an Employee class that should be a base class for
# more specific employee titles (e.g., classes), like Programmer, Accountant, Lawyer, etc...
# no one is a general Employee, the class just serves as a placeholder for shared
# state and behavior that all employees have
from abc import ABC, abstractmethod

class Employee(ABC):
    """Represents an employee at a company.
    """
    def __init__(self, name: str) -> None:
        self._name = name

    @abstractmethod
    def __str__(self) -> str:
        pass

# throws TypeError: Can't instantiate abstract class Employee without an implementation for abstract method '__str__'
e1 = Employee("Spike")
print(e1)

# don't worry about __slots__. I don't anticipate we'll be using it