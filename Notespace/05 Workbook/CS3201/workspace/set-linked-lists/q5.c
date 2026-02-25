#include <stdio.h>
#include <stdlib.h>

typedef struct monomial {
  double coeff;
  int expo;
  struct monomial *link;
} term;

void polynomprint(term *head) {
  term *temptr = head;
  while (temptr != NULL) {
    if (temptr->link != NULL) {
      printf("%lfx^%d + ", temptr->coeff, temptr->expo);
    } else {
      printf("%lfx^%d", temptr->coeff, temptr->expo);
    }
    temptr = temptr->link;
  }
}

int main() {

  // making a polynomial
  term *pol1 = NULL;
  for (int i = 0; i < 3; i++) {
    double a;
    int b;
    printf("enter coeff of %dth term: ", i + 1);
    scanf("%lf", &a);
    printf("enter expo of %dth term: ", i + 1);
    scanf("%d", &b);
    term *n = malloc(sizeof(term));
    n->coeff = a;
    n->expo = b;
    n->link = pol1;
    pol1 = n;
  }
  polynomprint(pol1);
}
