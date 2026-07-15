#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *head);
int list_len(node *head);
node *add_after(node *head, int data, int item);
int getmember(node *L, int place);
void altmerge(node *L1, node *L2);

int main() {

  // Making 2 linked lists for testing:
  node *L1 = NULL;
  node *L2 = NULL;

  for (int i = 5; i >= 1; i--) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L1;
    L1 = n;
  }

  for (int i = 10; i >= 6; i--) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L2;
    L2 = n;
  }
  printf("List 1:");
  list_print(L1);
  printf("List 2:");
  list_print(L2);
  altmerge(L1, L2);
  printf("Changed List 1:");
  list_print(L1);
  return 0;
}

void altmerge(node *L1, node *L2) {
  node *temptr2 = L2;
  int b = 1;
  while (temptr2 != NULL && b <= list_len(L1)) {

    add_after(L1, temptr2->member, getmember(L1, b));
    // printf("%d\n", getmember(L1, b));
    temptr2 = temptr2->link;
    b += 2;
  }
}

int getmember(node *L, int place) {
  node *temptr = L;
  for (int i = 1; i < place; i++) {
    temptr = temptr->link;
  }
  int mem = temptr->member;
  return mem;
}

/* Insertion after a specific item */
node *add_after(node *head, int data, int item) {
  node *temptr = head;
  while (temptr != NULL) {
    if (temptr->member == item) {
      node *n = malloc(sizeof(node));
      if (n == NULL) {
        return 0;
      }
      n->member = data;
      n->link = temptr->link;
      temptr->link = n;
      return head;
    }
    temptr = temptr->link;
  }
  printf("%d not present in the list\n", item);
  return head;
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

int list_len(node *head) {
  int i = 1;
  node *temptr = head;
  while (temptr->link != NULL) {
    i++;
    temptr = temptr->link;
  }
  return i;
}
