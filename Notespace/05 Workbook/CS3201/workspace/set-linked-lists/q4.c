#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *head);
node *LLUnion(node *L1, node *L2);
node *LLIsect(node *L1, node *L2);

// we are assuming here , there are no duplicate entries in a list itself. if
// that happens, we can always remove the duplicates by using previous program
// (q3.c)

int main() {
  // Making two lists
  node *L1 = NULL;
  node *L2 = NULL;
  printf("Creating list 1: Enter 5 values:\n");
  for (int i = 0; i < 5; i++) {
    node *n = malloc(sizeof(node));
    int a;
    scanf("%d", &a);
    if (n == NULL) {
      return 0;
    }
    n->member = a;
    n->link = L1;
    L1 = n;
  }
  printf("Crteated list 1\n\n");

  printf("Creating list 2: Enter 5 values:\n");
  for (int i = 0; i < 5; i++) {
    node *n = malloc(sizeof(node));
    int a;
    scanf("%d", &a);
    if (n == NULL) {
      return 0;
    }
    n->member = a;
    n->link = L2;
    L2 = n;
  }
  printf("Crteated list 2\n\n");

  // Printing lists
  list_print(L1);
  list_print(L2);
  list_print(LLUnion(L1, L2));
  list_print(LLIsect(L1, L2));
  return 0;
}

node *LLUnion(node *L1, node *L2) {

  node *LU = NULL;
  // at first, take the first list fully
  node *temptr0 = L1;
  while (temptr0 != NULL) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = temptr0->member;
    // side-effect: this copies the first list but inverted
    n->link = LU;
    LU = n;
    temptr0 = temptr0->link;
  }
  // now, take the uncommons from 2nd list
  node *temptr2 = L2;
  while (temptr2 != NULL) {
    node *temptr1 = L1;
    int found = 0; // use flag variable rather than complex looping
    while (temptr1 != NULL) {
      if (temptr2->member == temptr1->member) {
        found += 1;
        break;
      } else {
        temptr1 = temptr1->link;
      }
    }

    // paste the uncommon num from L2 to LU
    if (found == 0) {
      node *n = malloc(sizeof(node));
      if (n == NULL) {
        return 0;
      }
      n->member = temptr2->member;
      n->link = LU;
      LU = n;
    }
    temptr2 = temptr2->link;
  }
  return LU;
}

node *LLIsect(node *L1, node *L2) {
  node *LIt = NULL;
  node *temptr2 = L2;
  while (temptr2 != NULL) {
    node *temptr1 = L1;
    int found = 0; // use flag variable rather than complex looping
    while (temptr1 != NULL) {
      if (temptr2->member == temptr1->member) {
        found += 1;
        break;
      } else {
        temptr1 = temptr1->link;
      }
    }

    // paste the common num from L2 to LIt
    if (found == 1) {
      node *n = malloc(sizeof(node));
      if (n == NULL) {
        return 0;
      }
      n->member = temptr2->member;
      n->link = LIt;
      LIt = n;
    }
    temptr2 = temptr2->link;
  }
  return LIt;
}

void list_print(node *head) {
  node *temptr = head;
  printf("[");
  while (temptr != NULL) {

    if (temptr->link !=
        NULL) { // This if-else block is entirely for butification.
      printf("%d, ", temptr->member);
    } else {
      printf("%d", temptr->member);
    }
    temptr = temptr->link;
  }
  printf("]\n");
}
