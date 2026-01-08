#include <stdio.h>
// making an mod d equivalent class of n where n and d are fixed. (not a general
// solution as lists aren't taught yet)
int main() {
  int n, d;
  n = 21;
  d = 5;
  // so we have to design a verry simple program of where n = 21 should fall in
  // the mod d = 5 equivalence class
  switch (n % d) {
  case 0:
    printf("[0]\n");
    break;
  case 1:
    printf("[1]\n");
    break;
  case 2:
    printf("[2]\n");
    break;
  case 3:
    printf("[3]\n");
    break;
  case 4:
    printf("[4]\n");
    break;
  }
}
