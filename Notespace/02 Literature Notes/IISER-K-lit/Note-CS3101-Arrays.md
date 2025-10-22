---
course: "CS3101 : Programming and Data Structures - I"
topic: Arrays and Strings in C
lecturer: Kripabandhu Ghosh
institution: IISER-K
tags:
  - iiser-k
  - sem-5
source material: "[[arrays_strings.pdf]]"
---
## Array
#### Declaration:
Syntax: `type array_name[size];`
example: `int marks[10];`
#### Accessing Elements:
Syntax: `array_name[element_location-1]`
example: `marks[0]`
#### Initialisation:
As we can also assign values one by one by accessing the array after declaration. Its better to directly assign values **while declaration**.

Syntax: `type array_name[] = {comma, seperated, elements, ...}`
Example: `int numero[] = {1, 2, 3, 4, 5};`
- If we still enter size while declaration, if the elements are less then size, rest of the array will fill up with zero.
- In case of array of characters (string), last element will always be null **'\0'**. so the total number of elements will be (number of characters + 1).
- While declaring array of characters, we can directly write the string in double quote instead of using {}.
	```c
	//instead of
	char name[] = {'M', 'o', 't', 'a', '\0'};
	//we can do
	char name[] = "Mota";
	```
### 2D Array:
#### Declaration:
Syntax: `type array_name[no_of_rows][no_of_cols]`
Example: `int marks[10][5]`
#### Accessing Elements:
To access the element at $i^{th}$ row and $j^{th}$ column of an array:
Syntax: `array_name[i-1][j-1]`



## Operator: sizeof()
`sizeof` gives the **size in bytes** of a type or object **at compile time** (except in the case of variable-length arrays, where it’s runtime).
- It works for:
	- Data types → `sizeof(int)` --> shows 4 as int takes 4 bytes.
	- Variables or constants → `sizeof(x)`, `sizeof(3.14)` --> gives size according to their type.
	- Arrays → `sizeof(arr)` --> gives **total bytes**, not element count. 
- **Usage**:
	We can use it to determine the element number of the Array like:
	`elements_count = sizeof(array_name)/sizeof(type)`
