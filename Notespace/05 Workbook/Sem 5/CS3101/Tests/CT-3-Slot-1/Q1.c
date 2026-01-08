#include <stdio.h>

int main() {

  int n, sum, arr[n];

  printf("Manually enter how long do you want your array: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    arr[i] = i;
  }
  printf("Array of length %d created of ascending positive integers.\n", n);

  printf("Enter The Sum: ");
  scanf("%d", &sum);
}
