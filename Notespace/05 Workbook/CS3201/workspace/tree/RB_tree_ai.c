#include <stdio.h>
#include <stdlib.h>

// Defining the Node structure exactly like your BST/AVL, but with a color
// character
typedef struct RB_Node {
  int key;
  char color; // 'R' for Red, 'B' for Black
  struct RB_Node *left;
  struct RB_Node *right;
  struct RB_Node *p; // parent_pointer
} Node;

// Global NIL sentinel node to represent all empty leaves (CLRS standard)
Node *NIL;

// Function Prototypes
void init_NIL();
Node *createNode(int key);
void preorder(Node *x);
Node *RB_Search(int key, Node *root);
Node *left_rotate(Node *root, Node *x);
Node *right_rotate(Node *root, Node *y);
Node *RB_Insert_Fixup(Node *root, Node *z);
Node *RB_Insert(int newkey, Node *root);
Node *tree_minimum(Node *x);
Node *rb_transplant(Node *root, Node *u, Node *v);
Node *RB_Delete_Fixup(Node *root, Node *x);
Node *RB_Delete(int delkey, Node *root);

int main() {
  // 1. Initialize the global NIL node first!
  init_NIL();

  // Initializing an empty tree
  Node *root = NIL;

  // Inserting values (same values from your BST/AVL test)
  root = RB_Insert(20, root);
  root = RB_Insert(24, root);
  root = RB_Insert(18, root);
  root = RB_Insert(8, root);
  root = RB_Insert(15, root);
  root = RB_Insert(22, root);

  // Traversal
  printf("Preorder Traversal after Insertions (Key and Color):\n");
  preorder(root);
  printf("\n\n");

  // Deletion
  printf("Deleting node 18...\n");
  root = RB_Delete(18, root);

  printf("Preorder Traversal after Deletion:\n");
  preorder(root);
  printf("\n\n");

  return 0;
}

// -------------------------------------------------------------------
// Utility Functions
// -------------------------------------------------------------------

void init_NIL() {
  NIL = (Node *)malloc(sizeof(Node));
  NIL->color = 'B'; // NIL is always Black
  NIL->left = NULL;
  NIL->right = NULL;
  NIL->p = NULL;
}

Node *createNode(int key) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->key = key;
  newNode->color = 'R'; // New nodes are always Red initially
  newNode->left = NIL;  // Replaces NULL
  newNode->right = NIL; // Replaces NULL
  newNode->p = NIL;     // Replaces NULL
  return newNode;
}

void preorder(Node *x) {
  // Notice we check against NIL, not NULL
  if (x != NIL) {
    printf("%d(%c)\t", x->key, x->color);
    preorder(x->left);
    preorder(x->right);
  }
}

Node *RB_Search(int key, Node *root) {
  Node *x = root;
  while (x != NIL && key != x->key) {
    if (key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  return x; // Returns NIL if not found
}

// -------------------------------------------------------------------
// Rotations (Returning updated root)
// -------------------------------------------------------------------

Node *left_rotate(Node *root, Node *x) {
  Node *y = x->right;
  x->right = y->left;

  if (y->left != NIL) {
    y->left->p = x;
  }

  y->p = x->p;

  if (x->p == NIL) {
    root = y;
  } else if (x == x->p->left) {
    x->p->left = y;
  } else {
    x->p->right = y;
  }

  y->left = x;
  x->p = y;

  return root;
}

Node *right_rotate(Node *root, Node *y) {
  Node *x = y->left;
  y->left = x->right;

  if (x->right != NIL) {
    x->right->p = y;
  }

  x->p = y->p;

  if (y->p == NIL) {
    root = x;
  } else if (y == y->p->right) {
    y->p->right = x;
  } else {
    y->p->left = x;
  }

  x->right = y;
  y->p = x;

  return root;
}

// -------------------------------------------------------------------
// Insertion (Based exactly on your BST logic + Fixup)
// -------------------------------------------------------------------

Node *RB_Insert_Fixup(Node *root, Node *z) {
  while (z->p->color == 'R') {
    if (z->p == z->p->p->left) {
      Node *y = z->p->p->right; // Uncle

      if (y->color == 'R') {
        z->p->color = 'B';
        y->color = 'B';
        z->p->p->color = 'R';
        z = z->p->p;
      } else {
        if (z == z->p->right) {
          z = z->p;
          root = left_rotate(root, z);
        }
        z->p->color = 'B';
        z->p->p->color = 'R';
        root = right_rotate(root, z->p->p);
      }
    } else {
      // Symmetric logic for right child
      Node *y = z->p->p->left;

      if (y->color == 'R') {
        z->p->color = 'B';
        y->color = 'B';
        z->p->p->color = 'R';
        z = z->p->p;
      } else {
        if (z == z->p->left) {
          z = z->p;
          root = right_rotate(root, z);
        }
        z->p->color = 'B';
        z->p->p->color = 'R';
        root = left_rotate(root, z->p->p);
      }
    }
  }
  root->color = 'B';
  return root;
}

Node *RB_Insert(int newkey, Node *root) {
  Node *z = createNode(newkey);
  Node *y = NIL;
  Node *x = root;

  // Finding the insertion point (Your exact BST logic)
  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  // Inserting the new node
  z->p = y;
  if (y == NIL) {
    root = z; // empty tree
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }

  // Fix the colors and return the new root
  root = RB_Insert_Fixup(root, z);
  return root;
}

// -------------------------------------------------------------------
// Deletion (CLRS 13.4 logic adapted to your style)
// -------------------------------------------------------------------

Node *tree_minimum(Node *x) {
  while (x->left != NIL) {
    x = x->left;
  }
  return x;
}

Node *rb_transplant(Node *root, Node *u, Node *v) {
  if (u->p == NIL) {
    root = v;
  } else if (u == u->p->left) {
    u->p->left = v;
  } else {
    u->p->right = v;
  }
  v->p = u->p;
  return root;
}

Node *RB_Delete_Fixup(Node *root, Node *x) {
  while (x != root && x->color == 'B') {
    if (x == x->p->left) {
      Node *w = x->p->right; // Sibling

      if (w->color == 'R') {
        w->color = 'B';
        x->p->color = 'R';
        root = left_rotate(root, x->p);
        w = x->p->right;
      }

      if (w->left->color == 'B' && w->right->color == 'B') {
        w->color = 'R';
        x = x->p;
      } else {
        if (w->right->color == 'B') {
          w->left->color = 'B';
          w->color = 'R';
          root = right_rotate(root, w);
          w = x->p->right;
        }
        w->color = x->p->color;
        x->p->color = 'B';
        w->right->color = 'B';
        root = left_rotate(root, x->p);
        x = root;
      }
    } else {
      // Symmetric logic for right child
      Node *w = x->p->left;

      if (w->color == 'R') {
        w->color = 'B';
        x->p->color = 'R';
        root = right_rotate(root, x->p);
        w = x->p->left;
      }

      if (w->right->color == 'B' && w->left->color == 'B') {
        w->color = 'R';
        x = x->p;
      } else {
        if (w->left->color == 'B') {
          w->right->color = 'B';
          w->color = 'R';
          root = left_rotate(root, w);
          w = x->p->left;
        }
        w->color = x->p->color;
        x->p->color = 'B';
        w->left->color = 'B';
        root = right_rotate(root, x->p);
        x = root;
      }
    }
  }
  x->color = 'B';
  return root;
}

Node *RB_Delete(int delkey, Node *root) {
  // First, find the node to delete
  Node *z = RB_Search(delkey, root);
  if (z == NIL) {
    return root; // Key not found in tree
  }

  Node *y = z;
  Node *x;
  char y_original_color = y->color;

  // Standard BST deletion structural changes
  if (z->left == NIL) {
    x = z->right;
    root = rb_transplant(root, z, z->right);
  } else if (z->right == NIL) {
    x = z->left;
    root = rb_transplant(root, z, z->left);
  } else {
    y = tree_minimum(z->right);
    y_original_color = y->color;
    x = y->right;

    if (y->p == z) {
      x->p = y;
    } else {
      root = rb_transplant(root, y, y->right);
      y->right = z->right;
      y->right->p = y;
    }

    root = rb_transplant(root, z, y);
    y->left = z->left;
    y->left->p = y;
    y->color = z->color;
  }

  // If the removed/moved node was black, fix the violations
  if (y_original_color == 'B') {
    root = RB_Delete_Fixup(root, x);
  }

  free(z);
  return root;
}
