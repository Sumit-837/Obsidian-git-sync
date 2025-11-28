#include <stdio.h>

void displayPattern(int row, int start) {
  if (row < 1) {
    return;
  }
  int end = start + row - 1;
  while (start <= end) {
    printf("%d ", start++);
  }
  printf("\n");
  displayPattern(row - 1, start);
}

int main() {
  int n = 7;
  displayPattern(n, 1);
  return 0;
}
