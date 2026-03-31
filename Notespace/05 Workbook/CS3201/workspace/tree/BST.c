#include <stdio.h>
#include <stdlib.h>

typedef struct BST_Node {
  int key;
  struct BST_Node *left;
  struct BST_Node *right;
  struct BST_Node *p; // parent_pointer
} Node;

void preorder(Node *x);
Node *createNode(int key);
void override_child(int key, Node *parent_pointer, char side);
Node *BST_Search(int key, Node *root);
Node *BST_Insert(int newkey, Node *root);

int main() {
  // Initializing a new tree
  Node *root = createNode(20);

  // Adding values
  override_child(24, root, 'R');
  override_child(18, root, 'L');
  override_child(8, root->left, 'L');

  // Travarsal
  preorder(root);
  printf("\n\n");

  // Searching
  Node *found = BST_Search(18, root);
  if (found != NULL) {
    printf("%d\n", found->key);
  }

  // Inserting
  root = BST_Insert(15, root);
  root = BST_Insert(22, root);
  preorder(root);
  printf("\n\n");
  return 0;
}

Node *BST_Search(int key, Node *root) {
  Node *x = root;

  // Fixed logic: must be && to prevent reading from a NULL pointer
  while (x != NULL && key != x->key) {
    if (key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  // Checking if x is valid before checking its key
  if (x != NULL && x->key == key) {
    printf("yippie, found it.\n");
    return x;
  } else {
    return NULL;
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

void preorder(Node *x) {
  if (x != NULL) {
    printf("%d\t", x->key);
    preorder(x->left);
    preorder(x->right);
  }
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

void override_child(int key, Node *parent_pointer, char side) {
  // This function adds/replaces one node forcefully

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
  n->p = parent_pointer;
  n->key = key;
  n->left = NULL;
  n->right = NULL;
  // n->height = 1;

  /* // parent height updater */
  /* Node *H = parent_pointer; */
  /* while (H != NULL) { */
  /*   H->height = 1 + maxint(Height(H->left), Height(H->right)); */
  /*   H = H->p; */
}
