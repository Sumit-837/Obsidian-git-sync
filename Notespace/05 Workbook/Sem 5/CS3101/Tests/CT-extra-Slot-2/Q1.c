#include <stdio.h>

int CanTransformK(char *s1, char *s2, int k);

int main() {
  char arr1[] = "King";
  char arr2[] = "Rink";
  char arr3[] = "Pond";
  int k = 2;

  printf("%d \n", CanTransformK(arr1, arr2, k));
  printf("%d \n", CanTransformK(arr1, arr3, k));
  return 0;
}

int CanTransformK(char *s1, char *s2, int k) {
  int len1 = 0, len2 = 0;
  while (s1[len1] != '\0') {
    len1++;
  }
  while (s2[len2] != '\0') {
    len2++;
  }
  // to be able to transform, lenths of both strings must be same
  if (len1 != len2) {
    return 0;
  }
  // now we are counting the mis-matched characters
  int mm = 0;
  for (int i = 0; i < len1; i++) {
    if (s1[i] != s2[i]) {
      mm += 1;
    }
  }
  // for s1 to be changed in s2, in k altarations, k must be same with no. of
  // mismatches
  if (k == mm) {
    return 1;
  } else {
    return 0;
  }
}
