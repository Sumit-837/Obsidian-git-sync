#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dnode_char {
  struct dnode_char *prev;
  char member;
  struct dnode_char *next;
} dnode_char;

/* Appends a character to the end of a doubly linked list */
dnode_char *d_append_char(dnode_char *head, char c) {
  dnode_char *n = malloc(sizeof(dnode_char));
  if (n == NULL) {
    return 0;
  }
  n->member = c;
  n->next = NULL;

  if (head == NULL) {
    n->prev = NULL;
    return n;
  }

  dnode_char *temptr = head;
  while (temptr->next != NULL) {
    temptr = temptr->next;
  }
  temptr->next = n;
  n->prev = temptr;
  return head;
}

/* Prints the characters in the doubly linked list */
void print_dlist(dnode_char *head) {
  dnode_char *temptr = head;
  while (temptr != NULL) {
    printf("%c", temptr->member);
    temptr = temptr->next;
  }
  printf("\n");
}

int main() {
  char name[256];
  printf("Enter the name: ");
  if (fgets(name, sizeof(name), stdin) == NULL) {
    return 1;
  }

  /* Remove trailing newline from fgets */
  name[strcspn(name, "\n")] = 0;

  dnode_char *L = NULL;

  /* 1. Store character-wise in DLL (L) */
  for (int i = 0; name[i] != '\0'; i++) {
    L = d_append_char(L, name[i]);
  }

  /* 2. Abbreviate and store in L_abbr */
  dnode_char *L_abbr = NULL;

  /* Find the node where the very last word starts */
  dnode_char *last_word_start = L;
  dnode_char *temptr = L;
  while (temptr != NULL) {
    if (temptr->member == ' ' && temptr->next != NULL &&
        temptr->next->member != ' ') {
      last_word_start = temptr->next;
    }
    temptr = temptr->next;
  }

  temptr = L;
  int is_first_letter = 1;

  while (temptr != NULL) {
    if (temptr == last_word_start) {
      /* Once we hit the last word, append the rest of the list as-is */
      while (temptr != NULL) {
        L_abbr = d_append_char(L_abbr, temptr->member);
        temptr = temptr->next;
      }
      break;
    }

    /* Logic for the first and middle names */
    if (temptr->member != ' ' && is_first_letter) {
      L_abbr = d_append_char(L_abbr, temptr->member);
      L_abbr = d_append_char(L_abbr, '.');
      L_abbr = d_append_char(L_abbr, ' ');
      is_first_letter = 0;
    } else if (temptr->member == ' ') {
      is_first_letter = 1;
    }

    temptr = temptr->next;
  }

  /* 3. Print the contents of L_abbr */
  printf("Abbreviated Name: ");
  print_dlist(L_abbr);

  return 0;
}
