---
course: "CS3101 : Programming and Data Structures - I"
topic: Arrays and Strings in C
lecturer: Kripabandhu Ghosh
institution: IISER-K
tags:
  - iiser-k
  - sem-5
  - coding
  - c-programming
source material: "[[(8)arrays_strings.pdf]]"
---
## Array
#### Declaration:
Syntax: `type array_name[size];`
Example: `int marks[10];`
##### Initialisation:
As we can also assign values one by one by accessing the array after declaration with size. Its better to directly assign values **while declaration**.

Syntax: `type array_name[] = {comma, seperated, elements, ...}`
Example: `int numero[] = {1, 2, 3, 4, 5};`
- **Partial initialisation:** If we still enter size while initialisation, if the elements are less then size, rest of the array will fill up with zero (same applies in multidimensional arrays).
- In case of array of characters (string), last element will always be null **'\0'**. so the total number of elements will be (number of characters + 1).
- While declaring array of characters, we can directly write the string in **double quote** instead of using {}.
	```c
	//instead of
	char name[] = {'M', 'o', 't', 'a', '\0'};
	//we can do
	char name[] = "Mota";
	```

>[!warning]
>While declaring, you must mention size or initiatialize with values. Otherwise...
>

e.g.
```c
int arr[]; //invalid: no memory allocated
arr[0] = 1;
arr[1] = 2; //error
```
#### Accessing Elements:
Syntax: `array_name[element_location-1]`
Example: `marks[0]`

>[!Note] Strings
>there is nothing as a string type in C. We can use array of chars as string.
>> They are always mentioned in double quote, where chars are mentioned in single quote.
### 2D Array:
#### Declaration: 
Syntax: `type array_name[no_of_rows][no_of_cols]`
Example: `int marks[10][5]`
#### Accessing Elements:
To access the element at $i^{th}$ row and $j^{th}$ column of an array:
Syntax: `array_name[i-1][j-1]`

#### Initialisation of 2D array:
Example: 
```c
// write all elements directly

int a[2][3] = {1, 2, 3, 4, 5, 6};

// or you can write in a matrix manner
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

```
- letting compiler decide:
	```c
	//you can omit the rows while initialisation
	int a[][3] = {1, 2, ...}
	//but you cannot omit the columns
	int a[3][] = {1, 2, ...} // Not allowed
	```
	Even if the later is not allowed, you have a [[C-Array-of-Strings|trick]].
 ^6619b9
- **partial Initialisation:** ... you can make diagonal matrices with it.

#### Related Programs:
##### Matrix Multiplication: ...

### Multi-dimensional Arrays

#### Declaration:
Syntax: `type array_name[size1][size2][size3]...[size-n]`
Example: `int chart[20][2][30][5]`
## Some Useful Operators and Functions:
### Operator: sizeof()
`sizeof` gives the **size in bytes** of a type or object **at compile time** (except in the case of variable-length arrays, where it’s runtime).
- It works for:
	- Data types → `sizeof(int)` --> shows 4 as int takes 4 bytes.
	- Variables or constants → `sizeof(x)`, `sizeof(3.14)` --> gives size according to their type.
	- Arrays → `sizeof(arr)` --> gives **total bytes**, not element count. 
- **Usage**:
	We can use it to determine the element number of the Array like:
	`elements_count = sizeof(array_name)/sizeof(type)`
	Or `elements_count = sizeof(array_name)/sizeof(array_name[0])`
### Function: getchar()
Its just a simple input function from stdio.h
Example: 
```c
	char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: %c\n", ch);
```

### Functions from header: <ctype.h>
- These Functions verify the types of variables and based on that, returns true(non-zero) or false(0).
- Also there are 2 conversion functions: `toupper(ch_var)` & `tolower(ch_var)`.
Refer to: [[(8)arrays_strings.pdf#page=18]]
### String Functions from header: <string.h>
refer to: [[(8)arrays_strings.pdf#page=21]]
- As string is an array, you can't assign directly (`=`) a string value into its variable. you have to use `strcpy()`
	eg. `strcpy(string_var, “Sumit”)`
