#include <stdio.h>
int main() {
  int i, a, b;
  i = -7;
  // using if-else to find absolute value
  if (i < 0) {
    a = -i;
  } else {
    a = i;
  }
  printf("the absolute value of %i (determined through if else method) is %i\n",
         i, a);

  // using operator to find absolute value
  b = (i < 0) ? -i : i;

  printf(
      "the absolute value of %i (determined through operator method) is %i\n",
      i, b);
}
