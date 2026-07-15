#include <stdio.h>
#include <stdlib.h>

void initialize_array(int *arr, int size) {
  for (int i = 0; i < size; i++) {

    arr[i] = i * 10;
  }
}
int main() {
  int size = 10;
  // Allocate memory for 10 integers
  int *numbers = (int *)malloc(size * sizeof(int));
  // Check if allocation was successful
  if (numbers == NULL) {
    printf(" Memory allocation failed !\n ");
    return 1;
  }

  initialize_array(numbers, size);
  numbers[size] = 999;
  free(numbers); // as memory was allocated, this line frees it , fixing the
                 // memory leak issue.
  return 0;
}
