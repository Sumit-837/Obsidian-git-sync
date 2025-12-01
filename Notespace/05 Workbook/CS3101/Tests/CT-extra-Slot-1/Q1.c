#include <stdio.h>

int IsSubstr(char *s1, char *s2) {
  int len1 = 0, len2 = 0;
  while (s1[len1] != '\0') {
    len1++;
  }
  while (s2[len2] != '\0') {
    len2++;
  }
  int flag;
  for (int i = 0; i < len2; i++) {
    flag = 0;
    while (s1[flag] == s2[i + flag]) {
      flag++;
      if (flag == len1) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  char str1[] = "ayan";
  char str2[] = "Dwaipayan";
  char str3[] = "maya";
  char str4[] = "aya";
  printf("%d\n", IsSubstr(str1, str2));
  printf("%d\n", IsSubstr(str3, str2));
  printf("%d\n", IsSubstr(str4, str2));
  return 0;
}
