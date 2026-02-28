#include <stdio.h>
#include <stdlib.h>

typedef struct monomial {
  double coeff;
  int expo;
  struct monomial *link;
} term;

term *polyadd(term *pol1, term *pol2);
void polynomprint(term *head);

int main() {

  // making a polynomial
  printf("Make a polynomial of 3 terms\n\n");
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

  // making another polynomial
  printf("Make a polynomial of 2 terms\n\n");
  term *pol2 = NULL;
  for (int i = 0; i < 2; i++) {
    double a;
    int b;
    printf("enter coeff of %dth term: ", i + 1);
    scanf("%lf", &a);
    printf("enter expo of %dth term: ", i + 1);
    scanf("%d", &b);
    term *n = malloc(sizeof(term));
    n->coeff = a;
    n->expo = b;
    n->link = pol2;
    pol2 = n;
  }

  polynomprint(pol1);
  polynomprint(pol2);
  polynomprint(polyadd(pol1, pol2));
}

term *polyadd(term *pol1, term *pol2) {
  term *Add = NULL;

  // Addition means terms with Unique expo from both polynomial + added coeff
  // terms of same expo.

  // 1. finding uniques from first polynomial
  term *temptr1 = pol1;
  while (temptr1 != 0) {
    term *temptr2 = pol2;
    int same = 0; // flag variable
    while (temptr2 != 0) {
      if (temptr2->expo == temptr1->expo) {
        same++;
        break;
      }
      temptr2 = temptr2->link;
    }
    // adding the unique exponents
    if (same == 0) {
      term *n = malloc(sizeof(term));
      if (n == NULL) {
        return 0;
      }
      n->coeff = temptr1->coeff;
      n->expo = temptr1->expo;
      n->link = Add;
      Add = n;
    }

    // 2. now implementing coeff addition of same exponents
    if (same != 0) {
      term *n = malloc(sizeof(term));
      if (n == NULL) {
        return 0;
      }
      n->coeff = (temptr1->coeff + temptr2->coeff);
      n->expo = temptr1->expo;
      n->link = Add;
      Add = n;
    }
    temptr1 = temptr1->link;
  }

  // 3. finding uniques again from second polynomial
  term *temptr2 = pol2;
  while (temptr2 != 0) {
    term *temptr1 = pol1;
    int same = 0; // flag variable
    while (temptr1 != 0) {
      if (temptr2->expo == temptr1->expo) {
        same++;
        break;
      }
      temptr1 = temptr1->link;
    }
    // adding the unique exponents
    printf("%d\n", same);
    if (same == 0) {
      term *n = malloc(sizeof(term));
      if (n == NULL) {
        return 0;
      }
      n->coeff = temptr2->coeff;
      n->expo = temptr2->expo;
      n->link = Add;
      Add = n;
    }
    temptr2 = temptr2->link;
  }
  return Add;
}

void polynomprint(term *head) {
  term *temptr = head;
  while (temptr != NULL) {
    if (temptr->link != NULL) {
      printf("%.1f x^%d + ", temptr->coeff, temptr->expo);
    } else {
      printf("%.1f x^%d\n", temptr->coeff, temptr->expo);
    }
    temptr = temptr->link;
  }
}
