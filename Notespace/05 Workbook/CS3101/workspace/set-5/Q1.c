#include "extrema2.h"
#include <stdio.h>

int main() {
  int a, b;
  printf("please enter both the integers you want to compare\n");
  scanf("%i", &a);
  scanf("%i", &b);

  printf("the minimum integer is : %i\n", MININT2(a, b));
  printf("the maximum integer is : %i\n", MAXINT2(a, b));
  return 0;
}
