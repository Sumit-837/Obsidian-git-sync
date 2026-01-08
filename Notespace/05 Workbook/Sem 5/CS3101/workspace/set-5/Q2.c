#include "extrema2.h"
#include <stdio.h>

int main() {
  int n = 3;
  int numero[n], max, min;
  // taking input
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      printf("Type first integer: ");
    } else {
      printf("type next integer: ");
    }
    scanf("%i", &numero[i]);
    printf("\n");
  }
  // comparing
  max = numero[0];
  min = numero[0];
  for (int i = 0; i < n - 1; i++) {
    max = MAXINT2(max, numero[i + 1]);
    min = MININT2(min, numero[i + 1]);
  }
  printf("The maximum of these %i integers is %i and the minimum is %i", n, max,
         min);
  return 0;
}
