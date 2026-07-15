#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node {
  int key;
  struct tree_node *left;
  struct tree_node *right;
  // struct tree_node *parent;
} Node;

void trivial_force_append(int key, Node *parent_pointer,
                          char side) { // adds one node forcefully

  Node *n = malloc(sizeof(Node));
  if (n == NULL) {
    return;
  }

  if (side == 'R') {
    parent_pointer->right = n;
  } else if (side == 'L') {
    parent_pointer->left = n;
  } else {
    return;
  }
  // n->parent = parent_pointer;
  n->key = key;
  n->left = NULL;
  n->right = NULL;
}

void inorder(Node *x) {
  if (x != NULL) {
    inorder(x->left);
    printf("%d\t", x->key);
    inorder(x->right);
  }
}

void preorder(Node *x) {
  if (x != NULL) {
    printf("%d\t", x->key);
    preorder(x->left);
    preorder(x->right);
  }
}
void postorder(Node *x) {
  if (x != NULL) {
    postorder(x->left);
    postorder(x->right);
    printf("%d\t", x->key);
  }
}

int main() {

  Node n;
  n.key = 10;
  n.left = NULL;
  // n.parent = NULL;
  n.right = NULL;

  Node *T = &n;

  trivial_force_append(20, T, 'L');
  trivial_force_append(30, T, 'R');
  trivial_force_append(40, T->left, 'L');
  trivial_force_append(50, T->left, 'R');
  inorder(T);
  printf("\n");
  preorder(T);
  printf("\n");
  postorder(T);
  return 0;
}
