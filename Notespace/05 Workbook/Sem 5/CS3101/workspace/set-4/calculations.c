#include "calculations.h"
#include <stdio.h>

int factorial(int a) {
  int n = 1;
  if (a > 0) {
    for (int i = 1; i <= a; i++) {
      n *= i;
    }
  } else if (a == 0)
    n = 1;
  else
    n = 0;
  return n;
}

int nCr(int n, int r) {
  int comb;
  if (n >= r) {
    comb = factorial(n) / (factorial(r) * (factorial(n - r)));
  } else {
    comb = 0;
  }
  return comb;
}
