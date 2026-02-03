#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int member;
  struct node *link;
} node;

void list_print(node *linked_list);

int main() {
	// Making a sorted single linked list with duplicates
	node *L1 = NULL;
	printf("Please enter 8 numbers to make this list in sorted order:\n");
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
	node *L2 = NULL;
	node *temptr = L1;
	node *temptr2 = L2;
	

while(temptr -> link != NULL) {
	if(temptr -> member == temptr2 -> member) {
		temptr = temptr -> link;
		continue;
	}
	node *n = malloc(sizeof(node));
 	if (n == NULL) {
  	return 0;
  }
  n->member = temptr -> member;
  n->link = L2;
  L2 = n;
	
	temptr2 = temptr2 -> link;
}
  
	return 0;
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
