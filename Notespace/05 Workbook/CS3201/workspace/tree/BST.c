#include <stdio.h>
#include <stdlib.h>

typedef struct BST_Node {
  int key;
  struct BST_Node *left;
  struct BST_Node *right;
  struct BST_Node *p; // parent_pointer
} Node;

// Utility function to create a new BST node
Node *createNode(int key) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->p = NULL;
  return newNode;
}

// Search operation
Node *BST_Search(int key, Node *root) {
  Node *x = root;

  // Traverse the tree until we reach a NULL leaf or find the key
  while (x != NULL && key != x->key) {
    if (key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  // Check if we found it or hit a dead end
  if (x != NULL && x->key == key) {
    return x;
  } else {
    return NULL;
  }
}

// Insert operation
Node *BST_Insert(int newkey, Node *root) {
  Node *z = createNode(newkey);
  Node *y = NULL;
  Node *x = root;

  // Find the correct insertion point
  while (x != NULL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  // Connect new node to its parent
  z->p = y; 
  if (y == NULL) {
    root = z; // The tree was empty
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
  
  return root;
}

// Finds the leftmost leaf of a given subtree
Node *BST_Minimum(Node *x) {
  while (x->left != NULL) {
    x = x->left;
  }
  return x;
}

// Utility function that replaces one subtree as a child of its parent with another subtree
void BST_Transplant(Node **root, Node *u, Node *v) {
  // If u is the root, v becomes the new root
  if (u->p == NULL) {
    *root = v;
  } 
  // If u is a left child, replace u with v
  else if (u == u->p->left) {
    u->p->left = v;
  } 
  // If u is a right child, replace u with v
  else {
    u->p->right = v;
  }
  
  // Connect v back to u's parent (if v is not NULL)
  if (v != NULL) {
    v->p = u->p;
  }
}

// Delete operation
Node *BST_Delete(Node *root, Node *z) {
  if (z == NULL) return root;

  // Case 1: No left child
  if (z->left == NULL) {
    BST_Transplant(&root, z, z->right);
  } 
  // Case 2: No right child
  else if (z->right == NULL) {
    BST_Transplant(&root, z, z->left);
  } 
  // Case 3: Node has two children
  else {
    // Find the successor (minimum of the right subtree)
    Node *y = BST_Minimum(z->right);
    
    // If the successor is not z's immediate right child
    if (y->p != z) {
      BST_Transplant(&root, y, y->right);
      y->right = z->right;
      y->right->p = y;
    }
    
    // Replace z with y
    BST_Transplant(&root, z, y);
    y->left = z->left;
    y->left->p = y;
  }
  
  // Optional: free the memory of the deleted node
  free(z);
  
  return root;
}
