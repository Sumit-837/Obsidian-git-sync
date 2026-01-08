#include <stdio.h>

void fibonacci_upto(int n);

int main() {
  int n = 5;
  for (int row = 0; row < n; row++) {
    fibonacci_upto(row);
  }
}

void fibonacci_upto(int n) {
  int a = 0;
  int b = 1;
  for (int i = 0; i <= n; i++) {
    int c = a + b;
    a = b;
    b = c;
    printf("%d ", a);
  }
  printf("\n");
}
