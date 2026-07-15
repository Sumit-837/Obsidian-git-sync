#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *head);
void isdivby3(node *L);

int main() {

  // int n = 12345;
  // makig the list representing number 12345
  node *L2 = NULL; // just a test list
  for (int i = 5; i > 0; i--) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L2;
    L2 = n;
  }

  list_print(L2);
  isdivby3(L2);
  return 0;
}

void isdivby3(node *L) {
  node *temptr = L;
  int sum = 0;
  while (temptr != NULL) {
    sum += temptr->member;
    temptr = temptr->link;
  }
  // printf("%d\n", sum);
  if (sum % 3 == 0) {
    printf("its divisible by 3\n");
  } else {
    printf("its not\n");
  }
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
