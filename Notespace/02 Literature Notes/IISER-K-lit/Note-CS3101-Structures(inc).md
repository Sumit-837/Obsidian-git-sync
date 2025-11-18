---
course: "CS3101 : Programming and Data Structures - I"
topic: Structures in C
lecturer: Kripabandhu Ghosh
institution: IISER-K
tags:
  - iiser-k
  - sem-5
  - c-programming
  - coding
source material: "[[(10)structure.pdf]]"
---
# Struct:
It is a **user-defined data type** that lets you **group** multiple logically connected **variables of different types** under one tag_name.
## Declaration:
### Separate Declaration
- **Declaring the body:**
	```c
	struct tag_name {
    data_type member_var1;
    data_type member_var2;
    //...
	};
	```
- **Declaring structure variables:**
	This way, whenever we have to declare a variable of our type, we have to write `struct` before it.
	
	`struct tag_name variable1, variable2;`
### Declaring together:****
```c
struct student {
	char name[25];
	char roll_no[10];
	int semester_no;
} s1, s2;
```

Here `Student` is that user defined data type.
>[!Note]
>Declaring the **body** outside main is best practise as other functions can also use it.
### Declaration for Easier usage (typedef)
You can use an instruction named `typedef` to create a sort of alias.
**Benefit:** Now we don't have to type `struct` again and again while declaring variables. e.g.
```c
typedef struct {
	int roll;
	float marks;
} Student;

Student s1;  // cleaner
Student s2;
```
%% {backlink to CS50X LEc 3} %%