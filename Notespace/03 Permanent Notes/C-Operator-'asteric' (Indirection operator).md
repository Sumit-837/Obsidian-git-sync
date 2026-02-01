Tags: [[C]]
****
**`*`** operator has 2 ==different== Use cases:
#### 1. Declaration of a Pointer variable:
As mentioned in [[Note-CS3101-Pointers(inc)#Declaration]].
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