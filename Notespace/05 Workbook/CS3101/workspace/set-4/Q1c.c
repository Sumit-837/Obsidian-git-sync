#include <stdio.h>

int main() {
  int n = 5;
  char row[n + 1] = {"11   "}; // making it char for including spaces afterwards
  for (int i = 2; i <= n; i++) {
    // suppose i is 2.
    while (int j <= i) {
      row[j] = (char)((int)row[j] + (int)row[j + 1]);
    }
  }
}
