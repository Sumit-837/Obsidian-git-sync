#include <stdio.h>

void fibonacci_stars_upto(int n);

int main() {
  // taking input
  int n;
  printf("Please input a whole number: ");
  scanf("%d", &n);

  // making the pattern
  for (int i = 0; i < n; i++) {
    fibonacci_stars_upto(i);
  }
  return 0;
}

void fibonacci_stars_upto(int n) {
  int a = 0;
  int b = 1;
  for (int i = 0; i <= n; i++) {
    int c = a + b;
    a = b;
    b = c;
  }
  for (int i = 0; i < a; i++) {
    printf("*");
  }
  printf("\n\n");
}
