---
course: "CS3101 : Programming and Data Structures - I"
topic: pointers in C
lecturer: Kripabandhu Ghosh
institution: IISER-K
tags:
  - iiser-k
  - sem-5
  - c-programming
  - coding
source material: "[[(9)Pointers.pdf]]"
---
## Operator: &
& has two completely different meanings depending on where used.
1. Bit-wise AND operator (none of our interest now).
2. As **address-of** operator:
	`&var` ==> gives the memory address of the variable `var`.
# Pointer Variable:
A **pointer** is a variable that **stores the memory address** of another variable.
>i.e. the values stored in pointer variables are addresses (in hexadecimal) to another memory block that contains a value/ is a variable.
## Declaration:
Syntax: `data_type *pointer_var;`
Example: `int *p;` ==> declares, **p** is a pointer variable which can hold (point) the location of an `int` variable. Also `int *` is the type of the pointer variable.
## Assigning addresses to it:
### Assigning after Declaration:
Syntax: `pointer_var = &var;`
Example: if a is an int variable, `p = &a;`
### Assigning while Declaration:
Example: `int *p = &a;`
>This is kinda misleading as we will know the other use of `*` operator as dereferencing.
### Assigning address to a value directly without variable
You can't just assign address of a value to a pointer as its not pointing to any variable containing that value. 
Instead, you can allocate memory using `malloc()` and then point the declared pointer to a value.([[Note-CS50X-2025-Lec4-Memory#Pointer Fun with Binky|reference]])
## Operator: * (Indirection operator)
It has 2 ==different== Use cases:
#### 1. Declaration of a Pointer variable:
As mentioned [[Note-CS3101-Pointers(inc)#Declaration|earlier]].
#### 2. De-referencing:
When used **outside a Declaration**; it can access the value stored at the address a pointer points to.
In simple words: Instructs the compiler to go to a location in memory.
Example: If `p` is declared to be pointing address of`a`; `*p` gives the **value of** `a`.

```c
int a = 21;
int *p = &a;  //Declaring pionter variable p & assigning address of a in it.

printf("%p\n", p); //prints the address of a
printf("%i\n", *p); //prints 21
```
## **Type:**
Its type is dependent upon the variable its pointing to.
- `int *` ==> type of a pointer variable pointing to an int variable.
- `float *` ==> type of a pointer variable pointing to an float variable.
- ...
- **`void *`** ==> (Generic pointer type) these type of pointers can point to any type of variable.
>[!Note]
>`int *` is the same as `int*`(same applies for other types).
>	As the `*` is also an operator while being a part of the type, the space doesn't matter. Yet to be consistent we don't declare like `int*`.
>> eg: To declare 2 or more pointers , you must type `*` before everyone.
>> ```c
>> int* a, b; //is wrong as b will be an ordinary int var.
>> int* a, * b; //right but looks bad;
>> int *a, *b; //good
>> ```
- `char *` behaves differently.
	- as string (array of char) variables [[#^70c60c|also act like pointers]] to their first element, we can declare a string using `char *`.
- `FILE *` ==> we'll know [[Note-CS50X-2025-Lec4-Memory#File I/O|later]].
## Placeholder:
- We use **`%p`** as a placeholder for pointer variables or addresses (`&a`).
- Generally `%p` expects the type to be `void *`, but it also accepts `int *`, `float *` and rest all as long as they're addresses and not value.
- Still casting the type `void *` before printing is best practice as that makes it guaranteed portable across all systems — 32-bit, 64-bit, Windows, Linux, ARM, etc.
	eg: `printf("%p\n", (void*)p);`

>[!warning]
>Don't use %d, %u, %x or any other placeholders. (Undefined Behaviour)

## Uses:
### Passing Variables in Function
When You're in one function (eg, `main()`), passing a variable from it to another function can be done in 2 ways.
#### 1. Call by value
```c
void change(int n) {
    n = 99;
}

int main() {
    int a = 5;
    change(a);
    printf("%d", a); // gives output 5
}
```
The function (here: `change`) made a copy of our local variable `a` in it. so `a` remained untouched.

#### 2. Call by reference
```c
void change(int *n) {
    *n = 99; // go to the address and change the real value
}

int main() {
    int a = 5;
    change(&a); // send address of 'a'
    printf("%d", a); // will print 99
}
```
The function took the address of local variable and changed the value at that address, Affecting it.
- [[C-Array-as-Function-Output|Usage]]
### Swapping variables
(Same use as above)([[Note-CS50X-2025-Lec4-Memory#Swapping|reference]]).
### Pointers and Arrays
#### Declaration:
Done Previously.
#### Assigning:
`p = &a[0];` === `p = a;` ==> assigns the address of the first value of the array `a` to pointer variable `p`.
(Update: No need as `a` literally acts as its pointer)
##### Shifting pointer:
`p++;` ==> shifts the pointer to the address of next element of array. eg. `&a[0]`-->`&a[1]`

> You can only do this when a different pointer is assigned with array like above. It's not possible using array as a pointer.
#### Accessing Elements:
While `p = &a[0]` (p represents the address of the first element):
`(p + i)` === `&a[i]` ==> address of $i^{th}$ element of the array.

`*(p + i)` === `a[i]` ==> value of $i^{th}$ element of the array.

>[!Address of array's elements]
>`&a[i]` = `&a[0]`+($i\times$`sizeof(type)`)
>Where,
>$i^{th}$ element's address ==> `&a[i]`
>Base/ first element's address ==> `&a[0]`
>type of array elements ==> `type`

>[!tip] Fact: Array acting as a pointer ?
>Array variable `a` also acts as pointer to its first element:
>- `*a` === represents `a[0]`
>- In general: `*(a + i)` === represents `a[i]`

^70c60c

#### Valid and invalid pointer expressions:
See [[(9)Pointers.pdf#page=22|notes]].

---
## Tricks
### Printing partial strings with `%s`.
![[Note-CS50X-2025-Lec4-Memory#^ce8840]]

