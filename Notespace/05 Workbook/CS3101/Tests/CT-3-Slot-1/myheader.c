#include "myheader.h"

complex addComplex(complex *list, int no_of_elements) {
  complex sum = {0, 0};

  for (int i = 0; i < no_of_elements; i++) {
    sum.real += list[i].real;
    sum.img += list[i].img;
  }
  return sum;
}
