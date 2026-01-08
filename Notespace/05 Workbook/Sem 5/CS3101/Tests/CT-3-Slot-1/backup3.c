#include <stdio.h>
//#include "cplxfunc.h"




typedef struct complex {
  double real;
  double img;
} complex;

complex addComplex(complex *list, int no_of_elements);

int main() { 
	//makaing array of complex values
	complex list[] = {{5, 3}, {7, 4}};
	complex sum = addComplex(list,2);
	printf("The complex sum is %.2lf + i*%.2lf", sum.real, sum.img);
	return 0; 

}

complex addComplex(complex *list, int no_of_elements) {
  complex sum = {0, 0};

  for (int i = 0; i < no_of_elements; i++) {
    sum.real += list[i].real;
    sum.img += list[i].img;
  }
  return sum;
}
