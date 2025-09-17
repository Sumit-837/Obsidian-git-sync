#include <stdio.h>

// implemention using static variable
void Laddu();
void Rosogolla();
void Shrikhand();

int main() {
  Laddu();
  Laddu();

  Rosogolla();
  Rosogolla();

  Shrikhand();
  Shrikhand();
}

void Laddu() {
  int static eat = 0;
  eat++;
  printf("I bet you loved the laddu :-)\n");
  printf("this is your laddu number %i\n\n", eat);
}
void Rosogolla() {
  int static eat = 0;
  eat++;
  printf("I bet you loved the rosogolla :-)\n");
  printf("this is your rosogolla number %i\n\n", eat);
}
void Shrikhand() {
  int static eat = 0;
  eat++;
  printf("I bet you loved the shrikhand :-)\n");
  printf("this is your shrikhand number %i\n\n", eat);
}
