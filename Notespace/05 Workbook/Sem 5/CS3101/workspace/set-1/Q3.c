/*Question 3
Write a program in C	programming language to take as input two numbers and
swap them using a third variable.*/
#include <stdio.h>

int main() {
  int a, b, temp;
  char c;
  printf("Enter the integer value to be assigned to a: \n");
  scanf("%d", &a);
  printf("Enter the integer value to be asigned to b: \n");
  scanf("%d", &b);
  printf("...\n...\n...\n...\nswoooosh...\nNow they are swapped!!\n");
  temp = a;
  a = b;
  b = temp;
  printf("what value do you wanna know ?\na or b \n");
  scanf("%c", &c);
  if (c == 'a') {
    printf("a's value is now %d \n", a);
  } else if (c == 'b') {
    printf("b's value is now %d \n", b);
  }
}
