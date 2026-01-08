#include <stdio.h>
int main() {
  int a, b, c, max, sec_max;
  a = 13;
  b = 12;
  c = 11;
  // double mylist[] = {a, b, c}; //idk how to use list now
  if (a > b && a > c) {
    // a is largest
    max = a;
    sec_max = (b > c) ? b : c;
  } else if (a < b && a < c) {
    // a is the smallest
    max = (b > c) ? b : c;
    sec_max = (b > c) ? c : b;
  } else if (a == b || a == c || b == c) {
    printf("please make sure that each integer is unique");
  } else {
    // a is second max
    sec_max = a;
    max = (b > c) ? b : c;
  }
  printf("the maximum number is %i\n", max);
  printf("the second maximum number is %i\n", sec_max);
}
