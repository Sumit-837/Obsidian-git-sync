#include <stdio.h>
#include <stdlib.h>

typedef struct AVL_Node {
  int key;
  struct AVL_Node *left;
  struct AVL_Node *right;
  struct AVL_Node *p; // parent_pointer
  int height;
} Node;

int maxint(int a, int b) { return (a > b) ? a : b; }
int Height(Node *Nptr);
int BalFactor(Node *Nptr);
void override_child(int key, Node *parent_pointer, char side);
void preorder(Node *Nptr);
Node *createNode(int key);
Node *left_rotate(Node *root, Node *x);
Node *right_rotate(Node *root, Node *y);
Node *Balance(Node *root, Node *y, Node *z);
Node *AVL_Insert(int newkey, Node *root);

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

  // Rotation
  root = left_rotate(root, root); // Always reassign
  preorder(root);                 //(Dont pass right into travarsal)
  printf("\n\n");

  root = right_rotate(root, root);
  preorder(root);
  printf("\n\n");

  // Insertion
  root = AVL_Insert(15, root);
  root = AVL_Insert(22, root);
  preorder(root);
  printf("\n\n");
}

// Height of a Node (Helper function for avoiding NULL conflict)
int Height(Node *Nptr) {
  if (Nptr == NULL) {
    return 0;
  }
  return Nptr->height; // Taking height of leaves to be 1
}

int BalFactor(Node *Nptr) {
  if (Nptr == NULL) {
    return 0;
  }
  int B = (Height(Nptr->left) - Height(Nptr->right));
  return B;
}

// Utility function to create a new AVL node
Node *createNode(int key) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->p = NULL;
  newNode->height = 1; // New nodes are initialized with height 1.
  return newNode;
}

void override_child(int key, Node *parent_pointer,
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
  n->p = parent_pointer;
  n->key = key;
  n->left = NULL;
  n->right = NULL;
  n->height = 1;

  // parent height updater
  Node *H = parent_pointer;
  while (H != NULL) {
    H->height = 1 + maxint(Height(H->left), Height(H->right));
    H = H->p;
  }
}

void preorder(Node *Nptr) { // with height and bal factor
  if (Nptr == NULL) {
    return;
  }
  printf("key = %d | H = %d | bf = %d\n", Nptr->key, Height(Nptr),
         BalFactor(Nptr));
  preorder(Nptr->left);
  preorder(Nptr->right);
}

// Rotations
Node *left_rotate(Node *root, Node *x) {
  // defining terms
  Node *y = x->right;
  Node *beta = y->left;

  // repositioning beta
  x->right = beta;
  if (beta != NULL) {
    beta->p = x;
  }

  // repositioning y
  y->p = x->p;     // connecting child to parent
  if (x == root) { // connecting parent to child
    root = y;
  } else if (x == x->p->left) {
    x->p->left = y;
  } else if (x == x->p->right) {
    x->p->right = y;
  }

  // repositioning x
  y->left = x; // p to c
  x->p = y;    // c to p

  // recomputing heights
  x->height = 1 + maxint(Height(x->left), Height(x->right));
  y->height = 1 + maxint(Height(y->left), Height(y->right));

  return root;
}

Node *right_rotate(Node *root, Node *y) {
  // defining terms
  Node *x = y->left;
  Node *beta = x->right;

  // repositioning beta
  y->left = beta;
  if (beta != NULL) {
    beta->p = y;
  }

  // repositioning x
  x->p = y->p;     // connecting child to parent
  if (y == root) { // connecting parent to child
    root = x;
  } else if (y == y->p->right) {
    y->p->right = x;
  } else if (y == y->p->left) {
    y->p->left = x;
  }

  // repositioning y
  x->right = y; // p to c
  y->p = x;     // c to p

  // recomputing heights
  // Note: y is now a child of x, so y's height MUST be recomputed first!
  y->height = 1 + maxint(Height(y->left), Height(y->right));
  x->height = 1 + maxint(Height(x->left), Height(x->right));

  return root;
}

Node *Balance(Node *root, Node *y, Node *z) {
  int bf = BalFactor(y);
  // as we know, There are 4 cases of imbalance

  if (bf == 2 && z->key < y->left->key) {
    // LL imbalance (One Right rotation needed)
    root = right_rotate(root, y);
  } else if (bf == -2 && z->key > y->right->key) {
    // RR imbalance (One Left rotation needed)
    root = left_rotate(root, y);
  } else if (bf == 2 && z->key > y->left->key) {
    // LR imbalance
    root = left_rotate(root, y->left);
    root = right_rotate(root, y);
  } else if (bf == -2 && z->key < y->right->key) {
    // RL imbalance
    root = right_rotate(root, y->right);
    root = left_rotate(root, y);
  }
  return root;
}

Node *AVL_Insert(int newkey, Node *root) {
  // initializing the new node: z
  Node *z = (Node *)malloc(sizeof(Node));
  z->key = newkey;
  z->left = NULL;
  z->right = NULL;
  z->p = NULL;
  z->height = 1;

  // Defining useful pointer variables
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

  // Update ancestor heights and rebalance the whole tree
  while (y != NULL) {
    y->height = 1 + maxint(Height(y->left), Height(y->right));
    if (abs(BalFactor(y)) == 2) {
      root = Balance(root, y, z);
    }
    y = y->p;
  }

  return root;
}
