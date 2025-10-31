#include "calculations.h"
#include <stdio.h>

int main() {
  int n = 5;
  for (int row = 0; row < n; row++) {
    /* //printing spaces: */
    /* for(int space = 0;) */

    // printing coefficients:
    for (int col = 0; col <= row; col++) {
      printf("%d ", nCr(row, col));
    }
    printf("\n");
  }
  return 0;
}
