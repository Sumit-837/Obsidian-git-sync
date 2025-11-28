#include "myheader.h"
#include <stdio.h>

int main() {
  // makaing array of complex values
  complex list[] = {{5, 3}, {7, 4}};
  complex sum = addComplex(list, 2);
  printf("The complex sum is %.2lf + i*%.2lf", sum.real, sum.img);
  return 0;
}
