#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, difference;
  a = 1;
  b = 6;
  if (a > b) {
    difference = a - b;
    a = a - difference;
    b = b + difference;
  } else if (b > a) {
    difference = b - a;
    a = a + difference;
    b = b - difference;
  }
  printf("a is %d and b is %d", a, b);
}
