#include <stdio.h>

void invertarr(int *arr, int len) {
  int temp;
  for (int i = 0; i < len / 2; i++) {
    temp = arr[len - 1 - i];
    *(arr + len - 1 - i) = arr[i];
    *(arr + i) = temp;
  }
}

int main() {
  int arr[] = {1, 2, 4, 5, 6, 7};
  int len = sizeof(arr) / sizeof(arr[0]);

  invertarr(arr, len);

  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}
