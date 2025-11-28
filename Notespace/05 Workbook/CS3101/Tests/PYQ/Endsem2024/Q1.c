#include <stdio.h>

int rec_min(int *arr, int len) {
  if (len == 1) {
    return arr[0];
  } else if (arr[0] <= rec_min(arr + 1, len - 1)) {
    return arr[0];
  }
}

int min2(int *arr, int len) {
  int min = rec_min(arr, len);
  int arr2[len - 1], n = 0;
  while (n < len) {
    if (arr[n] != min) {
      arr2[n] = arr[n];
      n++;
    }
  }
  return rec_min(arr2, len - 1);
}

int main() {
  int arr[] = {3, 56, 87, 36, 567, 7};
  int len = sizeof(arr) / sizeof(int);
  printf("%d", rec_min(arr, len));
  printf("%d", min2(arr, len));
  return 0;
}
