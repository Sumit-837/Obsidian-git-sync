/* Question 2:
Write a program in C	programming language to take a number as input from the
user and print its square on the terminal.
*/

#include <stdio.h>

int main() {
  float a, b;
  printf("Enter the numnber you want to square: \n");
  scanf("%f", &a);
  b = a * a;
  printf("The square of %.1f is %.1f\n", a, b);
}
