#include "extrema2.h"

int MAXINT2(int a, int b) {
  if (a < b) {
    return b;
  } else if (a > b) {
    return a;
  }
}

int MININT2(int a, int b) {
  if (a > b) {
    return b;
  } else if (a < b) {
    return a;
  }
}
