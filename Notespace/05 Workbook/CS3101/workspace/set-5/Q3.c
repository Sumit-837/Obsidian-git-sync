#include <stdio.h>

int INCVAL(int a) { return a + 1; }
int INCREF(int *a) { return (*a) + 1; }

int main() {
  int a = 3;
  printf("increment via value: %i\n", INCVAL(a));
  printf("Increment via reference: %i\n", INCREF(&a));
  return 0;
}
