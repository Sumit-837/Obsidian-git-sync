---
title: C
tags:
  - source
  - cs
  - cs50
Professor: David J Malan
---


Welcome to CS50! This note covers the first week of the course. We’ll begin by introducing C, a powerful programming language that will help you understand how computers work at a low level.

## Hello, World!

In the first lecture, we wrote a simple program in C called "Hello, World!" Here's what it looked like:

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

### Explanation

- `#include <stdio.h>`: This line includes the standard input/output library, which allows us to use functions like `printf`.
- `int main(void)`: This is the main function where the program starts executing.
- `printf("hello, world\n");`: This prints the string "hello, world" followed by a newline character.

We used the `make` command in the terminal to compile and run this program. The `make` command automatically compiles any `.c` file with the same name as the output file.

---

## Variables

A variable is a named location in memory used to store data. In C, variables must be declared before they are used.

### Data Types

C has several basic data types:

- `int`: integer values  
- `float`: floating-point numbers  
- `char`: single characters  
- `string`: sequence of characters (in CS50, strings are treated specially using `string` type from `cs50.h`)

Here’s an example of declaring and using variables:

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = 5;
    float y = 3.14;
    char c = 'A';
    string s = get_string("What is your name? ");

    printf("x = %i\n", x);
    printf("y = %f\n", y);
    printf("c = %c\n", c);
    printf("s = %s\n", s);
}
```

### User Input

We used the `get_string` function from the `cs50.h` library to get user input. Other similar functions include:

- `get_int`
- `get_float`
- `get_char`

These make it easier to handle input in C without worrying about the complexities of `scanf`.

---

## Conditionals

Conditionals allow our programs to make decisions based on certain conditions. The most common conditional statements in C are `if`, `else if`, and `else`.

Here’s an example:

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}
```

---

## Loops

Loops let us repeat a block of code multiple times. There are two common loop structures in C:

- `while` loop  
- `for` loop  

### While Loop Example

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 0;

    while (i < 5)
    {
        printf("%i\n", i);
        i++;
    }
}
```

### For Loop Example

```c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", i);
    }
}
```

Both loops print the numbers from 0 to 4.

---

## Arrays

An array is a collection of elements of the same type stored in contiguous memory locations.

Here’s how to declare and use an array in C:

```c
#include <stdio.h>

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", numbers[i]);
    }
}
```

You can also create arrays of strings or other data types.

---

## Functions

Functions allow you to break down your code into reusable pieces. A function in C is defined with a return type, name, and parameters.

Here’s a simple example:

```c
#include <stdio.h>

// Function declaration
int square(int n);

int main(void)
{
    int result = square(5);
    printf("Square of 5 is %i\n", result);
}

// Function definition
int square(int n)
{
    return n * n;
}
```

---

## Debugging

Debugging is the process of finding and fixing errors in your code. Some common tools and techniques in CS50 include:

- Using `printf` to trace the flow of your program  
- Reading error messages carefully  
- Using `valgrind` to check for memory leaks  
- Writing test cases to verify correctness  

---

## Conclusion

Week 1 introduces the basics of programming in C. You learned how to write simple programs, use variables, conditionals, loops, arrays, and functions. These concepts form the foundation for more advanced topics in the course.

By the end of this week, you should feel comfortable writing small programs in C and debugging them when necessary.

If you're ready, move on to [Week 2](https://cs50.harvard.edu/x/notes/2/