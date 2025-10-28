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
## Declaration:
Syntax: `data_type *pointer_var;`
Example: `int *p;` ==> declares, **p** is a pointer variable which can hold (point) the location of an `int` variable. Also `int *` is the type of the pointer variable.
## Assigning values(addresses) to it:
Syntax: `pointer_var = &var;`
Example: if a in an int variable, `p = &a;`
### Assigning while Declaration:
Example: `int *p = &a;`
>This is kinda misleading as we will know the other use of `*` operator as dereferencing.
## Operator: * (Indirection operator)
It has 2 ==different== Use cases:
#### 1. Declaration of a Pointer variable:
As mentioned [[Note-CS3101-Pointers(inc)#Declaration|earlier]].
#### 2. De-referencing:
When used **outside a Declaration**; it can access the value stored at the address a pointer points to.
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
- `char *` behaves differently.(story for another time...)
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
### Pointers and Arrays
#### Declaration:
Done Previously.
#### Assigning:
`p = &a[0];` === `p = a;` ==> assigns the address of the first value of the array `a` to pointer variable `p`.
##### Shifting pointer:
`p++;` ==> shifts the pointer to the address of next element of array. eg. `&a[0]`-->`&a[1]`
#### Accessing Elements:
While `p = &a[0]` (p represents the address of the first element):
`(p + i)` === `&a[i]` ==> address of $i^{th}$ element of the array.

`*(p + i)` === `a[i]` ==> value of $i^{th}$ element of the array.

>[!Address of arrays elements]
>`&a[i]` = `&a[0]`+($i\times$`sizeof(type)`)
>Where,
>$i^{th}$ element's address ==> `&a[i]`
>Base/ first element's address ==> `&a[0]`
>type of array elements ==> `type`

>[!tip] Fact: array as a pointer ?
>After declaration of `p = a;`,`a` can also be used as pointer in some cases:
>`*(a + i)` === represents `a[i]`

^70c60c

#### Valid and invalid pointer expressions:
See [[(9)Pointers.pdf#page=22|notes]].

