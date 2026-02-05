#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

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

void free_list(node *head) {
  node *tmp;
  while (head != NULL) {
    tmp = head;
    head = head->link;
    free(tmp);
  }
}

int list_len(node *head) {
  int i = 1;
  node *temptr = head;
  while (temptr->link != NULL) {
    i++;
    temptr = temptr->link;
  }
  return i;
}
