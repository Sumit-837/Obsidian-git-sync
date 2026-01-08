#include <stdio.h>

// implementation using Global variables
int eat_laddu, eat_rosogolla, eat_shrikhand;

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
  eat_laddu++;
  printf("I bet you loved the laddu :-)\n");
  printf("this is your laddu number %i\n\n", eat_laddu);
}
void Rosogolla() {
  eat_rosogolla++;
  printf("I bet you loved the rosogolla :-)\n");
  printf("this is your rosogolla number %i\n\n", eat_rosogolla);
}
void Shrikhand() {
  eat_shrikhand++;
  printf("I bet you loved the shrikhand :-)\n");
  printf("this is your shrikhand number %i\n\n", eat_shrikhand);
}
