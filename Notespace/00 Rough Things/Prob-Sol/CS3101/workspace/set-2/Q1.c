#include <stdio.h>
#define G 6.673E-11     // macrovariable
double G_g = 6.673E-11; // global variable

int main() {
  double M1, M2, R, G_l; // local variables
  M1 = 50;
  M2 = 40;
  R = 5;
  G_l = 6.673E-11;
  double F_l = G_l * M1 * M2 / (R * R);
  double F_g = G_g * M1 * M2 / (R * R);
  double F = G * M1 * M2 / (R * R);
  printf("Force calculated by macro G is %e\n", F);
  printf("Force calculated by global G is %e\n", F_g);
  printf("Force calculated by local G is %e\n", F_l);
}
