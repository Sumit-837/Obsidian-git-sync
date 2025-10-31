#include <math.h>
#include <stdio.h>

int atoi(char *num_str);

int main() {
  char str[20] = "69420";
  printf("%d\n", atoi(str));
  return 0;
}

int atoi(char *num_str) {
  // length finder:
  int length = 0, n = 0;
  while ((num_str[length]) != '\0') {
    length++;
  }

  // implementation
  for (int i = 0; i < length; i++) {
    n += ((int)pow(10, i)) * (num_str[length - i - 1] - '0');
  }
  return n;
}
