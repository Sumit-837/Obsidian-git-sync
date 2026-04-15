#include <stdio.h>

// --- CONFIGURATION & CONSTANTS ---
#define m 11 // Table size (prime is good for modulo)
#define EMPTY -1
#define DELETED -2
int openHashTable[m];

int hash_division(int k);
int hash_prime(int k);
int H(int key, int i);
void init_open_table();
void insert_double_hashing(int key);
int search_double_hashing(int key);

int main() {
  init_open_table(); // initialyzing the empty hash table

  // inserting values into the hash table.
  int arr[] = {75, 66, 22, 34, 45, 10, 12, 33, 89, 5};

  for (int i = 0; i < 10; i++) {
    insert_double_hashing(arr[i]);
  }

  // searching all value.
  for (int i = 0; i < 10; i++) {
    int found = search_double_hashing(arr[i]);
    printf("%d => %d\n", arr[i], found);
  }

  return 0;
}

// --- HASH FUNCTIONS ---
int hash_division(int k) { return k % m; }

int hash_prime(int k) {
  // Secondary hash function for double hashing
  return 7 - (k % 7);
}

int H(int key, int i) {
  int h1 = hash_division(key);
  int h2 = hash_prime(key);

  int x = (h1 + (i * h2)) % m;
  return x;
}

void init_open_table() {
  for (int i = 0; i < m; i++) {
    openHashTable[i] = EMPTY;
  }
}

// Double Hashing insertion
void insert_double_hashing(int key) {

  for (int i = 0; i < m; i++) {
    int index = H(key, i);

    if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
      openHashTable[index] = key;
      return;
    }
  }
  printf("Double Hashing: Hash table is full!\n");
}

int search_double_hashing(int key) {

  for (int i = 0; i < m; i++) {
    int index = H(key, i);

    if (openHashTable[index] == key) {
      return index; // Found it
    }
    if (openHashTable[index] == EMPTY) {
      return -1; // hit empty slot
    }
  }
  return -1; // Not found
}
