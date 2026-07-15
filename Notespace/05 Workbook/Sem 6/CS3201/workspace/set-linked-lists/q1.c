#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *L);

int main() {
  int N = 5;

  // Building a linked list L to contain some numbers
  node *L = NULL;

  for (int i = 0; i < 20; i++) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L;
    L = n;
  }
  // Printing things in L
  list_print(L);

  // Making The Other lists
  node *List2 = NULL;
  node *List3 = NULL;
  node *temptr = L;
  while (temptr != NULL) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = temptr->member;
    if (temptr->member % N == 0) {
      n->link = List2;
      List2 = n;
    } else {
      n->link = List3;
      List3 = n;
    }
    temptr = temptr->link;
  }
  // Printing All lists
  list_print(List2);
  list_print(List3);
  return 0;
}

void list_print(node *linked_list) { // here linked_list is the header pointer
                                     // of linked list
  node *temptr = linked_list;
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
