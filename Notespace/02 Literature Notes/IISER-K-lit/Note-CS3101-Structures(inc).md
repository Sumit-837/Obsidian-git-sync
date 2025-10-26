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
- Declaring the body:
	```c
	struct tag_name {
    data_type member_var1;
    data_type member_var2;
    //...
	};
	```
- Declaring structure variables:
	`struct tag_name variable1, variable2;`
- Declaring both together:
	```c
	struct student {
		char name[25];
		char roll_no[10];
		int semester_no;
	} s1, s2;
	```

Here `Student` is that user defined data type.
>[!Note]
>Declaring the body outside main is best practise as other functions can also use it.

