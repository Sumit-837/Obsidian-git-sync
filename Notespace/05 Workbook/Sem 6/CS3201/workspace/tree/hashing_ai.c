#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ==========================================
// --- CONFIGURATION & CONSTANTS ---
// ==========================================
#define m 11           // Table size (using a prime number reduces collisions)
#define A 0.6180339887 // Constant for multiplication method (fractional part of golden ratio)
#define EMPTY -1       // Marker for an untouched slot in open addressing
#define DELETED -2     // Tombstone marker for a deleted slot in open addressing

// ==========================================
// --- HASH FUNCTIONS ---
// ==========================================

// 1. Division Method: Fast and simple, relies on prime table size.
int hash_division(int k) { 
    return k % m; 
}

// 2. Multiplication Method: Good when table size isn't prime.
int hash_multiplication(int k) {
    double fractional_part = (k * A) - floor(k * A);
    return (int)floor(m * fractional_part);
}

// 3. Secondary Hash Function (for Double Hashing): Must never evaluate to 0!
int hash_prime(int k) {
    // 7 is a prime smaller than m (11).
    return 7 - (k % 7);
}

// ==========================================
// --- 1. CHAINING (LINKED LISTS) ---
// ==========================================

// Node structure for the linked list
typedef struct Node {
    int key;
    struct Node *next;
} Node;

// The Hash Table: An array of pointers to Nodes
Node *hashTable[m] = {NULL}; // Initialize all pointers to NULL

// Insert a key using chaining
void insert_chaining(int key) {
    int hashIndex = hash_division(key);
    
    // Allocate memory for the new node
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->key = key;

    // Insert at the HEAD of the linked list for O(1) insertion time
    newNode->next = hashTable[hashIndex];
    hashTable[hashIndex] = newNode;
}

// Search for a key using chaining
Node* search_chaining(int key) {
    int hashIndex = hash_division(key);
    Node *current = hashTable[hashIndex];

    // Traverse the linked list at the hashed index
    while (current != NULL) {
        if (current->key == key) {
            return current; // Found the key
        }
        current = current->next;
    }
    return NULL; // Key not found
}

// Print the chaining hash table
void print_chaining_table() {
    printf("\n--- Chaining Hash Table ---\n");
    for (int i = 0; i < m; i++) {
        printf("[%2d]: ", i);
        Node *current = hashTable[i];
        while (current != NULL) {
            printf("%d -> ", current->key);
            current = current->next;
        }
        printf("NULL\n");
    }
}

// ==========================================
// --- 2. OPEN ADDRESSING (PROBING) ---
// ==========================================

int openHashTable[m];

// Initialize all slots to EMPTY (-1)
void init_open_table() {
    for (int i = 0; i < m; i++) {
        openHashTable[i] = EMPTY;
    }
}

// Print the open addressing table
void print_open_table(const char* title) {
    printf("\n--- %s ---\n", title);
    for (int i = 0; i < m; i++) {
        if (openHashTable[i] == EMPTY) {
            printf("[%2d]: EMPTY\n", i);
        } else if (openHashTable[i] == DELETED) {
            printf("[%2d]: DELETED\n", i);
        } else {
            printf("[%2d]: %d\n", i, openHashTable[i]);
        }
    }
}

// A. Linear Probing Insertion
void insert_linear_probing(int key) {
    int h = hash_division(key);

    // Try up to 'm' times to find an open slot
    for (int i = 0; i < m; i++) {
        int index = (h + i) % m;

        // Insert if the slot is either never used (EMPTY) or previously freed (DELETED)
        if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
            openHashTable[index] = key;
            return; // Successful insertion
        }
    }
    printf("Linear Probing: Hash table is full! Could not insert %d.\n", key);
}

// B. Quadratic Probing Insertion
void insert_quadratic_probing(int key) {
    int h = hash_division(key);

    for (int i = 0; i < m; i++) {
        // Step size increases quadratically (0, 1, 4, 9...)
        int index = (h + (i * i)) % m;

        if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
            openHashTable[index] = key;
            return;
        }
    }
    printf("Quadratic Probing: Failed to insert %d (sequence exhausted)!\n", key);
}

// C. Double Hashing Insertion
void insert_double_hashing(int key) {
    int h1 = hash_division(key);
    int h2 = hash_prime(key);

    for (int i = 0; i < m; i++) {
        // Step size is determined by the secondary hash function
        int index = (h1 + (i * h2)) % m;

        if (openHashTable[index] == EMPTY || openHashTable[index] == DELETED) {
            openHashTable[index] = key;
            return;
        }
    }
    printf("Double Hashing: Hash table is full! Could not insert %d.\n", key);
}

// D. Search (Using Linear Probing logic)
int search_linear_probing(int key) {
    int h = hash_division(key);

    for (int i = 0; i < m; i++) {
        int index = (h + i) % m;

        if (openHashTable[index] == key) {
            return index; // Found it, return the index
        }
        
        // If we hit a truly empty slot, the key CANNOT be in the table.
        // We stop searching to save time.
        if (openHashTable[index] == EMPTY) {
            return -1; 
        }
        
        // Note: If we hit a DELETED slot, we MUST keep searching (loop continues).
        // The key might have been inserted after the deleted item!
    }
    return -1; // Not found (checked all slots)
}

// E. Delete (Using Linear Probing logic)
void delete_linear_probing(int key) {
    int index = search_linear_probing(key);
    
    if (index != -1) {
        // Replace with a tombstone marker instead of EMPTY.
        // This prevents breaking the search chain for other keys.
        openHashTable[index] = DELETED;
        printf("Deleted key %d from index %d.\n", key, index);
    } else {
        printf("Key %d not found for deletion.\n", key);
    }
}

// ==========================================
// --- MAIN FUNCTION (DRIVER) ---
// ==========================================

int main() {
    printf("=========================================\n");
    printf("      TESTING CHAINING (LINKED LIST)     \n");
    printf("=========================================\n");
    
    // Insert values (notice 12, 23, and 34 will all collide at index 1 because 12%11=1)
    insert_chaining(12);
    insert_chaining(23);
    insert_chaining(34);
    insert_chaining(45);
    
    print_chaining_table();
    
    // Search test
    int searchKey = 23;
    if (search_chaining(searchKey) != NULL) {
        printf("\nChaining: Found key %d in table.\n", searchKey);
    } else {
        printf("\nChaining: Key %d not found.\n", searchKey);
    }

    printf("\n=========================================\n");
    printf("   TESTING OPEN ADDRESSING (LINEAR)      \n");
    printf("=========================================\n");
    
    init_open_table(); // Reset table

    // Collisions for index 1
    insert_linear_probing(12); // Goes to index 1
    insert_linear_probing(23); // Collides at 1, goes to 2
    insert_linear_probing(34); // Collides at 1, 2, goes to 3
    insert_linear_probing(4);  // Goes to index 4
    
    print_open_table("Linear Probing Table (After Inserts)");

    // Test Deletion & Search Logic
    delete_linear_probing(23); // Deletes 23 at index 2 (Leaves DELETED marker)
    print_open_table("Linear Probing Table (After Deleting 23)");
    
    // Search for 34. If DELETED marker wasn't used, search would stop at index 2.
    int foundIndex = search_linear_probing(34);
    if (foundIndex != -1) {
        printf("\nLinear Probing Search: Found key 34 at index %d!\n", foundIndex);
    } else {
        printf("\nLinear Probing Search: Key 34 not found!\n");
    }
    
    // Insert after delete: 56 % 11 = 1. Collides at 1. Index 2 is DELETED, so it claims it.
    insert_linear_probing(56);
    print_open_table("Linear Probing Table (After Inserting 56 into DELETED slot)");

    return 0;
}
