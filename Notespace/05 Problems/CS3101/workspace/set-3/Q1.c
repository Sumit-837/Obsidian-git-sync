#include <stdio.h>

int main() {
  int i, a;
  i = -7;
  if (i < 0) {
    a = -i;
  } else {
    a = i;
  }
  printf("the absolute value of %i is %i\n", i, a);
}
