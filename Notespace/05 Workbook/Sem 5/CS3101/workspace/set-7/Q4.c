// A perfect number is a positive integer that is equal to the sum of its proper
// positive divisors (excluding itself).

#include <stdio.h>

int rec_sumofdiv(int n, int x) {

  // conditioning part
  if (n < 1 || x <= 1) {
    return 1;
  }
  // recursion part (increment/decrement)
  if (n % x == 0) {                    // if its a divisor
    return x + rec_sumofdiv(n, x - 1); // if divisor: repeat func and add
  }
  return rec_sumofdiv(n, x - 1); // if not divisor: repeat func
}

int main() {
  int n;
  printf("Enter your number: ");
  scanf("%d", &n);

  if (n == rec_sumofdiv(n, n - 1)) {
    printf("%d is a perfect number", n);
  } else {
    printf("not a perfect number");
  }
}
