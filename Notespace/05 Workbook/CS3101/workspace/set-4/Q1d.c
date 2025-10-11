#include <stdio.h>

void inverted_series(int a, int n);

int main() {
  int n = 5;
  for (int i = 0; i < n; i++) {
    inverted_series(n, i);
  }
}

void inverted_series(int a, int n) {
  // this will be the n-th row of inverted symmetrical series of a

  // declining
  int temp;
  for (int i = a; i >= a - n; i--) {
    printf("%d", i);
    temp = i;
  }
  // inclining
  for (int i = temp + 1; i <= a; i++) {
    printf("%d", i);
  }
  printf("\n");
}
