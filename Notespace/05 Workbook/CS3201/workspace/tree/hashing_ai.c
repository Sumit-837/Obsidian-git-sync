#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// --- CONFIGURATION & CONSTANTS ---
#define m 11           // Table size (prime is good for modulo)
#define A 0.6180339887 // Constant for multiplication method
#define EMPTY -1
#define DELETED -2

// --- HASH FUNCTIONS ---
int hash_division(int k) { return k % m; }

int hash_multiplication(int k) {
  double fractional_part = (k * A) - floor(k * A);
  return (int)floor(m * fractional_part);
}

int hash_prime(int k) {
  // Secondary hash function for double hashing
  return 7 - (k % 7);
}

// ==========================================
// --- 1. CHAINING (LINKED LISTS) ---
// ==========================================

typedef struct Node {
  int key;
  struct Node *next;
} Node;

Node *hashTable[m] = {NULL}; // Initialize with NULL

void insert_chaining(int key) {
  int hashIndex = hash_division(key);
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->key = key;

  // Insert at head for O(1) time
  newNode->next = hashTable[hashIndex];
  hashTable[hashIndex] = newNode;
}

Node *search_chaining(int key) {
  int hashIndex = hash_division(key);
  Node *current = hashTable[hashIndex];

  while (current != NULL) {
    if (current->key == key)
      return current; // Found
    current = current->next;
  }
  return NULL; // Not found
}

// ==========================================
// --- 2. OPEN ADDRESSING (PROBING) ---
// ==========================================

int openHashTable[m];

void init_open_table() {
  for (int i = 0; i < m; i++) {
    openHashTable[i] = EMPTY;
  }
}

// A. Linear Probing
void insert_linear_probing(int key) {
  int h = hash_division(key);

  for (int i = 0; i < m; i++) {
    int index = (h + i) % m;

    if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
      openHashTable[index] = key;
      return; // Successful insertion
    }
  }
  printf("Linear Probing: Hash table is full!\n");
}

// B. Quadratic Probing
void insert_quadratic_probing(int key) {
  int h = hash_division(key);

  for (int i = 0; i < m; i++) {
    int index = (h + (i * i)) % m;

    if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
      openHashTable[index] = key;
      return;
    }
  }
  printf("Quadratic Probing: Failed to insert (sequence exhausted)!\n");
}

// C. Double Hashing
void insert_double_hashing(int key) {
  int h1 = hash_division(key);
  int h2 = hash_prime(key);

  for (int i = 0; i < m; i++) {
    int index = (h1 + (i * h2)) % m;

    if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
      openHashTable[index] = key;
      return;
    }
  }
  printf("Double Hashing: Hash table is full!\n");
}

// D. Search (Example using Linear Probing logic)
int search_linear_probing(int key) {
  int h = hash_division(key);

  for (int i = 0; i < m; i++) {
    int index = (h + i) % m;

    if (openHashTable[index] == key) {
      return index; // Found it
    }
    if (openHashTable[index] == EMPTY) {
      return -1; // Hit a truly empty slot, stop searching
    }
    // If it's DELETED or a different key, keep looping (i++)
  }
  return -1; // Not found
}
