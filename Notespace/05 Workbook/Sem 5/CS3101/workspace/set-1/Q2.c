#include <stdio.h>

int main() {
  float a, b;
  printf("Enter the numnber you want to square: \n");
  scanf("%f", &a);
  b = a * a;
  printf("The square of %.1f is %.1f\n", a, b);
}
