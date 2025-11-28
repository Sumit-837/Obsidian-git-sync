#include <stdio.h>

void invertstr(char *arr, int len) {
  int temp;
  for (int i = 0; i < len / 2; i++) {
    temp = arr[len - 1 - i];
    *(arr + len - 1 - i) = arr[i];
    *(arr + i) = temp;
  }
}

void decrypt(char *string) {
  int len = 0;
  while (string[len] != '\0') {
    len++;
  }
  invertstr(string, len / 2);
}

int main() {
  char *str = "HAMUUDHABIBI";
  decrypt(str);
  printf("%s\n", str);
  return 0;
}
