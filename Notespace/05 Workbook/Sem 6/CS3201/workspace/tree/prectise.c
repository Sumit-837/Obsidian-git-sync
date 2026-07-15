#include <stdio.h>
#include <stdlib.h>

typedef struct BST_Node {
  int key;
  struct BST_Node *left;
  struct BST_Node *right;
  struct BST_Node *p; // parent_pointer
} Node;

Node *createNode(int key);
Node *BST_Insert(int newkey, Node *root);
void inorder(Node *Nptr);
Node *BST_Search(int key, Node *root);

int main() {
  // Task 1: creating a BST
  Node *root = createNode(8);
  int array[8] = {18, 1, 13, 24, 7, 0, 5, 9};
  for (int i = 0; i < 8; i++) {
    root = BST_Insert(array[i], root);
  }
  inorder(root);
  printf("\n\n");

  // Task 2: searching for '0'
  Node *x = BST_Search(0, root);

  return 0;
}

// Utility function to create a new BST node
Node *createNode(int key) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->p = NULL;
  // newNode->height = 1; // No height in BST.
  return newNode;
}

void inorder(Node *Nptr) {
  if (Nptr != NULL) {
    inorder(Nptr->left);
    printf("%d\t", Nptr->key);
    inorder(Nptr->right);
  }
}
Node *BST_Insert(int newkey, Node *root) {
  // initializing the new node: z
  Node *z = (Node *)malloc(sizeof(Node));
  z->key = newkey;
  z->left = NULL;
  z->right = NULL;
  z->p = NULL;

  // Other useful pointers
  Node *y = NULL;
  Node *x = root;

  // Finding the insertion point
  while (x != NULL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  } // til its end, y will get to the point

  // Inserting the new node
  z->p = y; // child to parent connection
  if (y == NULL) {
    root = z; // empty tree
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
  return root;
}
Node *BST_Search(int key, Node *root) {
  Node *x = root;

  while (x != NULL && key != x->key) {
    if (key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  if (x->key == key) {
    printf("%d found.\n", key);
  }
  return x;
}
