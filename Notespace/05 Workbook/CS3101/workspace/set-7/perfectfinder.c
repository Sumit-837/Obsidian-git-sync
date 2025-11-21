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

void perfectfinder(int range) {
  // int *perfectlist;
  for (int i = 0; i < range + 1; i++) {
    if (i == rec_sumofdiv(i, i - 1)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main() {

  int n;
  printf("Enter your number: ");
  scanf("%d", &n);

  perfectfinder(n);
}
