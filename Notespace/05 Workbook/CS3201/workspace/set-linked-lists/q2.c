#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *linked_list);
int list_len(node *L);
void list_compare(node *L1, node *L2);

int main() {
  // Making lists
  node *L1 = NULL;
  node *L2 = NULL;

  for (int i = 20; i >= 1; i--) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L1;
    L1 = n;
  }

  for (int i = 30; i >= 11; i--) {
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 0;
    }
    n->member = i;
    n->link = L2;
    L2 = n;
  }

  list_print(L1);
  printf("L1 length = %d\n", list_len(L1));
  list_print(L2);
  printf("L2 length = %d\n", list_len(L2));
	list_compare(L1, L2);
  return 0;
}

void list_compare(node *L1, node *L2) {
	if(list_len(L1) != list_len(L2)) {
		printf("These lists are different\n");
		return;
	}
	int len = list_len(L1);
	node *temptr1 = L1;
	node *temptr2 = L2;
	for(int i = 0; i < len; i++) {
		if(temptr1 -> member == temptr2 -> member){
			temptr1 = temptr1 -> link;
			temptr2 = temptr2  -> link;
		} else {
			printf("These lists are different\n");
			return;
		}
	}
	printf("same-same lists\n");
}

int list_len(node *L) {
  int i = 1;
  node *temptr = L;
  while (temptr->link != NULL) {
    i++;
    temptr = temptr->link;
  }
  return i;
}

void list_print(node *list_head) { 
  node *temptr = list_head;
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
