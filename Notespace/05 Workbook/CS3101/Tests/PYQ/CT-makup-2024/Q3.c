#include <stdio.h>

void invertstr(char *arr, int len) {
  char temp;
  for (int i = 0; i < len / 2; i++) {
    temp = arr[len - 1 - i];
    *(arr + len - 1 - i) = arr[i];
    *(arr + i) = temp;
  }
}

void decrypt(char *string) {
  int len = 0;
  int star = 1;
  while (string[len] != '\0') {
    len++;
  }
  while (string[star - 1] != '*') {
    star++;
  }

  invertstr(string, star - 1);
  invertstr(string + star, len - star);
}

int main() {
  char str[] = "DOOMAH*IBIBAH";
  decrypt(str);
  printf("%s\n", str);
  return 0;
}
