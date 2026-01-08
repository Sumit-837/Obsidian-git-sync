#include <stdio.h>

int main() {
  int n = 10;
  for (int row = 0; row < n; row++) {
    for (int b = n; b >= (n - row); b--) {
      printf("%d ", b);
    }
    printf("\n");
  }
}
