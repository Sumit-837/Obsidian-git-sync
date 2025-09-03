#include <stdio.h>

int asmaa(double n) {
  int m;
  if (n != (double)(int)n) {
    m = (int)n + 1;
    return m;
  } else {
    return (int)n;
  }
}

int zameen(double n) {
  int m = (int)n;
  return m;
}

int main() {
  double User_input = 69.420;
  int c, f;
  c = asmaa(User_input);
  f = zameen(User_input);
  printf("The Ceiling of %f is %i.\n", User_input, c);
  printf("The Floor of %f is %i.\n", User_input, f);
}
