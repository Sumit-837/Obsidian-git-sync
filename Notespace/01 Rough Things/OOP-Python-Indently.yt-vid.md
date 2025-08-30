---
title: "Object oriented programming: python"
created: 2025-06-11
tags:
  - cs
  - python
  - "#oop"
  - ref
source: https://youtu.be/rLyYb7BFgQI?si=htVeRCdHQ-Wv_w7p
---
##### Class:
Class is like a blueprint of the object. It contains all the relevant information what an object should do.
```python
class ClassName:
```
- Class names should be in camel-case (First letter of each word is capital)
##### Initializers:
This initializes & customizes the class
```python
class Refrigerator:
	def __init__(self, input1, input2)
		self.brand = input1
		self.power_rating = input2
# Now assign this class to objects
fridge1 = Refrigerator('whirlpool', '5 star')
fridge2 = Refrigerator('Lg', '3 star')
```
- `__init__` returns none by default.
##### Self:
- `self` refers to the instance/ object we are currently using, so that we can use multiple objects of the same class. ie, it becomes the object the class is assigned to at that instant.
	>eg. when we work with `fridge1 = Refrigerator()`, `self` becomes `fridge1`.
- In the `__init__` ,you can use words other than`self` in its place, but not recommended.
