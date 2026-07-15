// This code also works for unsorted linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *linked_list);
node *copy_uniques(node *L1);
void free_list(node *head);

int main() {
  // Making a single linked list with duplicates
  node *L1 = NULL;
  printf("Please enter 8 numbers to make this list:\n");
  for (int i = 0; i < 8; i++) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    int num;
    scanf("%d", &num);
    n->member = num;
    n->link = L1;
    L1 = n;
  }
  list_print(L1);

  // MAking a list removing duplicates
  node *L2 = copy_uniques(L1);
  list_print(L2);
  free_list(L1);
  free_list(L2);
  return 0;
}

node *copy_uniques(node *L1) {

  node *L2 = NULL;
  node *temptr = L1;

  while (temptr != NULL) {
    int same = 0; // using as a flag variable
    node *temptr2 = L2;
    while (temptr2 != NULL) {
      if (temptr->member == temptr2->member) {
        same++;
        break;
      }
      temptr2 = temptr2->link;
    }

    if (same != 0) {
      temptr = temptr->link;
      continue;
    }
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = temptr->member;
    n->link = L2;
    L2 = n;

    temptr = temptr->link;
  }
  return L2;
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

// Function to free memory (Very Important!)
void free_list(node *head) {
  node *tmp;
  while (head != NULL) {
    tmp = head;
    head = head->link;
    free(tmp);
  }
}
