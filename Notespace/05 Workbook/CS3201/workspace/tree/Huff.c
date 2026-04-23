#include <stdio.h>
#include <stdlib.h>

// ---------------------------------------------------------
// DATA STRUCTURES
// ---------------------------------------------------------

// A Huffman tree node
struct MinHeapNode {
  char data;                        // The character (for leaf nodes)
  unsigned freq;                    // Frequency of the character (c.freq)
  struct MinHeapNode *left, *right; // Left and right child pointers
};

// A Min Heap: Represents the Priority Queue Q
struct MinHeap {
  unsigned size;              // Current number of elements in min heap
  unsigned capacity;          // Maximum capacity of min heap
  struct MinHeapNode **array; // Array of pointers to min heap nodes
};

// ---------------------------------------------------------
// UTILITY FUNCTIONS
// ---------------------------------------------------------

// Allocate a new node 'z'
struct MinHeapNode *newNode(char data, unsigned freq) {
  struct MinHeapNode *temp =
      (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
  temp->left = temp->right = NULL;
  temp->data = data;
  temp->freq = freq;
  return temp;
}

// Create a min heap of given capacity
struct MinHeap *createMinHeap(unsigned capacity) {
  struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));
  minHeap->size = 0;
  minHeap->capacity = capacity;
  minHeap->array = (struct MinHeapNode **)malloc(minHeap->capacity *
                                                 sizeof(struct MinHeapNode *));
  return minHeap;
}

// Swap two min heap nodes
void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b) {
  struct MinHeapNode *t = *a;
  *a = *b;
  *b = t;
}

// ---------------------------------------------------------
// MIN-HEAP (PRIORITY QUEUE) OPERATIONS
// ---------------------------------------------------------

// Standard MinHeapify function
void minHeapify(struct MinHeap *minHeap, int idx) {
  int smallest = idx;
  int left = 2 * idx + 1;
  int right = 2 * idx + 2;

  if (left < minHeap->size &&
      minHeap->array[left]->freq < minHeap->array[smallest]->freq)
    smallest = left;

  if (right < minHeap->size &&
      minHeap->array[right]->freq < minHeap->array[smallest]->freq)
    smallest = right;

  if (smallest != idx) {
    swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
    minHeapify(minHeap, smallest);
  }
}

// EXTRACT-MIN(Q): Extracts the node with the minimum frequency
struct MinHeapNode *extractMin(struct MinHeap *minHeap) {
  struct MinHeapNode *temp = minHeap->array[0];
  minHeap->array[0] = minHeap->array[minHeap->size - 1];
  --minHeap->size;
  minHeapify(minHeap, 0);
  return temp;
}

// INSERT(Q, z): Inserts a new node into the Min Heap
void insertMinHeap(struct MinHeap *minHeap, struct MinHeapNode *minHeapNode) {
  ++minHeap->size;
  int i = minHeap->size - 1;

  // Move up the tree until the correct position is found
  while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
    minHeap->array[i] = minHeap->array[(i - 1) / 2];
    i = (i - 1) / 2;
  }
  minHeap->array[i] = minHeapNode;
}

// BUILD-MIN-HEAP: Builds a min heap from a given array
void buildMinHeap(struct MinHeap *minHeap) {
  int n = minHeap->size - 1;
  for (int i = (n - 1) / 2; i >= 0; --i)
    minHeapify(minHeap, i);
}

// Creates a Min Heap containing all characters as leaves
struct MinHeap *createAndBuildMinHeap(char data[], int freq[], int size) {
  struct MinHeap *minHeap = createMinHeap(size);
  for (int i = 0; i < size; ++i)
    minHeap->array[i] = newNode(data[i], freq[i]);
  minHeap->size = size;
  buildMinHeap(minHeap);
  return minHeap;
}

// ---------------------------------------------------------
// CORE HUFFMAN ALGORITHM
// ---------------------------------------------------------

// Builds the Huffman tree and returns the root
struct MinHeapNode *buildHuffmanTree(char data[], int freq[], int size) {
  struct MinHeapNode *left, *right, *top;

  // Step 1 & 2: n = |C| and Q = C (Build Min Heap)
  struct MinHeap *minHeap = createAndBuildMinHeap(data, freq, size);

  // Step 3: for i = 1 to n - 1
  while (minHeap->size != 1) {

    // Step 5: z.left = x = EXTRACT-MIN(Q)
    left = extractMin(minHeap);

    // Step 6: z.right = y = EXTRACT-MIN(Q)
    right = extractMin(minHeap);

    // Step 4 & 7: allocate a new node z, z.freq = x.freq + y.freq
    // Using '$' as a placeholder for internal nodes
    top = newNode('$', left->freq + right->freq);
    top->left = left;
    top->right = right;

    // Step 8: INSERT(Q, z)
    insertMinHeap(minHeap, top);
  }

  // The final remaining node is the root of the tree
  return extractMin(minHeap);
}

// ---------------------------------------------------------
// OUTPUT & PRINTING
// ---------------------------------------------------------

// Prints an array representing the path from root to leaf
void printArr(int arr[], int n) {
  for (int i = 0; i < n; ++i)
    printf("%d", arr[i]);
  printf("\n");
}

// Recursively traverses the tree and prints the codewords
// 0 for left edge, 1 for right edge
void printCodes(struct MinHeapNode *root, int arr[], int top) {
  if (root->left) {
    arr[top] = 0;
    printCodes(root->left, arr, top + 1);
  }

  if (root->right) {
    arr[top] = 1;
    printCodes(root->right, arr, top + 1);
  }

  // If it's a leaf node, it contains a character
  if (!(root->left) && !(root->right)) {
    printf("%c: ", root->data);
    printArr(arr, top);
  }
}

// Wrapper function to execute Huffman Coding
void HuffmanCodes(char data[], int freq[], int size) {
  // Build the optimal prefix tree
  struct MinHeapNode *root = buildHuffmanTree(data, freq, size);

  // Array to store the codeword during traversal
  int arr[100], top = 0;

  printf("Generated Huffman Codes:\n");
  printCodes(root, arr, top);
}

// ---------------------------------------------------------
// MAIN DRIVER
// ---------------------------------------------------------
int main() {
  // Example data from the lecture slide table
  char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  int freq[] = {45, 13, 12, 16, 9, 5};

  int size = sizeof(arr) / sizeof(arr[0]);

  HuffmanCodes(arr, freq, size);

  return 0;
}
