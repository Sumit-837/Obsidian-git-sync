---
title: python
created: 2025-06-11
tags:
  - cs
  - cs50w
  - python
  - ref
source: "[[Vid-CS50W-2020#Lecture 2 - Python]]"
Professor: Brian Yu
---
# Basics of Python
## Variables
5 types of variables :
- int
- float
- str
- bool
- Nonetype
## Conditions
...
## Sequences
### Data structures:
- List (Sequence of mutable values)
- Tuple (sequence of immutable Values)(those values can't be changed)
- Set (Collection of unique values)
- Dict (Collection of key - value pairs)

...
## Loops
...
## Functions
### separating functions and importing
Suppose we want to import `function` from `file.py`
```python
from file import function

# or

import file
# then use as
file.function
```
...
# Object Oriented Programming (oop)
##### Class:
Class is like a template for a type of an object. suppose we wanna make a new class: point on a 2D plane.
```python
class point:
	def __init__(self, input1, input2)
		self.x = input1
		self.y = input2
```
##### Method : **__init__**
- It's a (magic) method or function which should act everytime you create a new object of that class. 
- All properties should be stored inside this.
##### Self:
- `self` refers to the object we are currently using
##### Storing data inside objects:
- the datas we input , will be saved inside self (that object) as it's property.
- use `self.propertyname = data` while defining the class to take inputs as data when you make an object of that same class.
##### Method: User defined methods
- We manipulate objects with methods eg...
```python 
class Flight():
    # Method to create new flight with given capacity
    def __init__(self, capacity):
        self.capacity = capacity
        self.passengers = []
		
    # Method to add a passenger to the flight:
    def ada_passenger(self, name):
        ​if not self.open_seats():
            return False
        self.passengers.append(name)
        return True
		
    # Method to return number of open seats
    def open_seats(self):
        return self.capacity - len(self.passengers)
```
# Functional Programming
## Decorators
These are functions that take functions as input and returns a modified version of that function as output.

**Example:** making a decorator function which  modifies another function by announcing when it runs.
```Python
def announce(function):
	def wrapper(): # this function wraps the function around
		print("About to run...")
		function() # running the function
		print("Done with the function")
	return wrapper

# applying the decorator to a function

@announce
def hello():
	print("hello, world")
```

>[!note] Note
>Thus if you want certain functions to run if user is logged in. you can write a decorator that checks if user is logged in and then let the function run.
## Lambda expression
We can use this in place of a very short function. It fits in a single line.
It looks like: `function = lambda input: output`
# Exception / error handling
In case of a specific exception, we can handle it with `try` & `except`.
**Example:** in case of a division...
```python
import sys

try:
    x = int(input("x: "))
    y = int(input("y: "))
except ValueError:
    print("Error: Invalid input")
    sys.exit(1)

try:
    result = x / y
except ZeroDivisionError:
    print("Error: Cannot divide by 0.")
    # Exit the program
    sys.exit(1)

print(f"{x} / {y} = {result}")
```
