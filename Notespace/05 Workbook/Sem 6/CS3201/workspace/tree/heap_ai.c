#include <stdio.h>
#include <limits.h>

// --- GLOBAL HEAP VARIABLES ---
#define INF INT_MAX        // Used for -1*INF in the insert function
int tree_array_size = 100; // A.length: Maximum capacity of the array
int heap_size = 0;         // A.heap-size: Number of elements currently in the heap

// --- 1. UTILITY FUNCTIONS ---
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// --- 2. TRAVERSAL FUNCTIONS (0-BASED) ---
int get_left_child(int A[], int index) {
    if ((((2 * index) + 1) < tree_array_size) && (index >= 0)) {
        return (2 * index) + 1;
    }
    return -1;
}

int get_right_child(int A[], int index) {
    if ((((2 * index) + 2) < tree_array_size) && (index >= 0)) {
        return (2 * index) + 2;
    }
    return -1;
}

int get_parent(int A[], int index) {
    if ((index > 0) && (index < tree_array_size)) {
        return (index - 1) / 2;
    }
    return -1;
}

// --- 3. CORE HEAP MAINTENANCE ---
// Time Complexity: O(log n)
void heapify(int arr[], int n, int i) {
    int largest = i;                     // Initialize largest as root
    int l = 2 * i + 1;                   // left child
    int r = 2 * i + 2;                   // right child

    // Left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // Right child is larger than largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // Heapify recursively the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Time Complexity: O(n)
void build_max_heap(int A[], int n) {
    heap_size = n;
    // Start from the last non-leaf node and go up to the root
    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(A, n, i);
    }
}

// Time Complexity: O(n log n)
void heapsort(int A[], int n) {
    build_max_heap(A, n);
    for (int i = n - 1; i >= 1; i--) {
        swap(&A[0], &A[i]);      // Move current root to end
        heap_size--;             // Reduce active heap size
        heapify(A, heap_size, 0); // Call max heapify on the reduced heap
    }
}

// --- 4. PRIORITY QUEUE OPERATIONS ---
// Time Complexity: O(log n)
void increase_key(int A[], int index, int key) {
    A[index] = key;
    // Float the element up while the max heap property is violated
    while ((index > 0) && (A[get_parent(A, index)] < A[index])) {
        swap(&A[index], &A[get_parent(A, index)]);
        index = get_parent(A, index);
    }
}

// Time Complexity: O(log n)
void insert(int A[], int key) {
    if (heap_size >= tree_array_size) {
        printf("Heap Overflow\n");
        return;
    }
    // Set a dummy value at the new end, then use increase_key to set the real value
    A[heap_size] = -1 * INF; 
    increase_key(A, heap_size, key);
    heap_size++; 
}

// Time Complexity: O(1)
int heap_maximum(int A[]) {
    if (heap_size < 1) {
        printf("Heap underflow\n");
        return -1;
    }
    return A[0];
}

// Time Complexity: O(log n)
int extract_max(int A[]) {
    if (heap_size < 1) {
        printf("Heap underflow\n");
        return -1;
    }
    int maxm = A[0];             // Grab the root
    A[0] = A[heap_size - 1];     // Overwrite root with the last element
    heap_size--;                 // Shrink the heap size
    heapify(A, heap_size, 0);    // Sink the new root down to its proper place
    
    return maxm;
}
