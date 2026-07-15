#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define INF INT_MAX
#define NIL -1

// Vertex Colors
enum Color { WHITE, GRAY, BLACK };

/* ==========================================
   1. GRAPH REPRESENTATION (Adjacency List)
   ========================================== */

// A node in the adjacency list
struct AdjListNode {
  int dest;
  struct AdjListNode *next;
};

// Adjacency List structure
struct AdjList {
  struct AdjListNode *head;
};

// Graph structure containing vertex properties
struct Graph {
  int V; // Number of vertices
  struct AdjList *array;

  // Vertex properties tracking for BFS/DFS
  int *color;
  int *d;  // Distance (BFS) or Discovery Time (DFS)
  int *f;  // Finish Time (DFS only)
  int *pi; // Predecessor
};

// Create a new adjacency list node
struct AdjListNode *newAdjListNode(int dest) {
  struct AdjListNode *newNode =
      (struct AdjListNode *)malloc(sizeof(struct AdjListNode));
  newNode->dest = dest;
  newNode->next = NULL;
  return newNode;
}

// Create a graph of V vertices
struct Graph *createGraph(int V) {
  struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
  graph->V = V;
  graph->array = (struct AdjList *)malloc(V * sizeof(struct AdjList));
  graph->color = (int *)malloc(V * sizeof(int));
  graph->d = (int *)malloc(V * sizeof(int));
  graph->f = (int *)malloc(V * sizeof(int));
  graph->pi = (int *)malloc(V * sizeof(int));

  for (int i = 0; i < V; ++i) {
    graph->array[i].head = NULL;
  }
  return graph;
}

// Add an edge to an undirected graph
void addEdge(struct Graph *graph, int src, int dest) {
  // Add an edge from src to dest
  struct AdjListNode *newNode = newAdjListNode(dest);
  newNode->next = graph->array[src].head;
  graph->array[src].head = newNode;

  // Since graph is undirected, add an edge from dest to src
  newNode = newAdjListNode(src);
  newNode->next = graph->array[dest].head;
  graph->array[dest].head = newNode;
}

/* ==========================================
   2. BREADTH-FIRST SEARCH (BFS)
   ========================================== */

// Simple Queue Implementation for BFS
struct Queue {
  int items[1000];
  int front;
  int rear;
};

struct Queue *createQueue() {
  struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
  q->front = -1;
  q->rear = -1;
  return q;
}

int isEmpty(struct Queue *q) { return q->rear == -1; }

void enqueue(struct Queue *q, int value) {
  if (q->front == -1)
    q->front = 0;
  q->rear++;
  q->items[q->rear] = value;
}

int dequeue(struct Queue *q) {
  int item;
  if (isEmpty(q))
    return -1;
  item = q->items[q->front];
  q->front++;
  if (q->front > q->rear) {
    q->front = q->rear = -1; // Reset queue
  }
  return item;
}

// BFS Algorithm matching CLRS pseudocode
void BFS(struct Graph *G, int s) {
  // 1-4: Initialize all vertices except source
  for (int u = 0; u < G->V; u++) {
    if (u != s) {
      G->color[u] = WHITE;
      G->d[u] = INF;
      G->pi[u] = NIL;
    }
  }

  // 5-7: Initialize source vertex
  G->color[s] = GRAY;
  G->d[s] = 0;
  G->pi[s] = NIL;

  // 8-9: Initialize empty queue and enqueue source
  struct Queue *Q = createQueue();
  enqueue(Q, s);

  // 10: Loop while queue is not empty
  while (!isEmpty(Q)) {
    // 11: Dequeue vertex u
    int u = dequeue(Q);

    // 12: For each adjacent vertex v
    struct AdjListNode *temp = G->array[u].head;
    while (temp) {
      int v = temp->dest;
      // 13: If vertex is undiscovered
      if (G->color[v] == WHITE) {
        // 14-17: Mark GRAY, update distance and predecessor, enqueue
        G->color[v] = GRAY;
        G->d[v] = G->d[u] + 1;
        G->pi[v] = u;
        enqueue(Q, v);
      }
      temp = temp->next;
    }
    // 18: Mark vertex u as finished
    G->color[u] = BLACK;
  }
  free(Q);
}

/* ==========================================
   3. DEPTH-FIRST SEARCH (DFS)
   ========================================== */

int dfs_time; // Global time variable for DFS

// Recursive DFS Visit Function
void DFS_VISIT(struct Graph *G, int u) {
  // 1-3: White vertex u has just been discovered
  dfs_time = dfs_time + 1;
  G->d[u] = dfs_time;
  G->color[u] = GRAY;

  // 4: Explore edge (u, v)
  struct AdjListNode *temp = G->array[u].head;
  while (temp) {
    int v = temp->dest;
    // 5: If adjacent vertex is WHITE, visit it recursively
    if (G->color[v] == WHITE) {
      // 6-7: Set predecessor and recursively visit
      G->pi[v] = u;
      DFS_VISIT(G, v);
    }
    temp = temp->next;
  }

  // 8-10: Blacken u; it is finished
  G->color[u] = BLACK;
  dfs_time = dfs_time + 1;
  G->f[u] = dfs_time;
}

// Main DFS Algorithm matching CLRS pseudocode
void DFS(struct Graph *G) {
  // 1-3: Initialize all vertices
  for (int u = 0; u < G->V; u++) {
    G->color[u] = WHITE;
    G->pi[u] = NIL;
  }

  // 4: Initialize global time
  dfs_time = 0;

  // 5-7: Visit every vertex if it hasn't been discovered
  for (int u = 0; u < G->V; u++) {
    if (G->color[u] == WHITE) {
      DFS_VISIT(G, u);
    }
  }
}

/* ==========================================
   UTILITY & MAIN
   ========================================== */

void printGraphStats(struct Graph *G) {
  printf("Vertex\tColor\tDist/Disc\tFinish\tPredecessor\n");
  for (int i = 0; i < G->V; i++) {
    printf("%d\t%d\t%d\t\t%d\t%d\n", i, G->color[i], G->d[i], G->f[i],
           G->pi[i]);
  }
}

int main() {
  // Example: Creating a graph with 5 vertices (Nodes 0 to 4)
  int V = 5;
  struct Graph *G = createGraph(V);

  addEdge(G, 0, 1);
  addEdge(G, 0, 4);
  addEdge(G, 1, 2);
  addEdge(G, 1, 3);
  addEdge(G, 1, 4);
  addEdge(G, 2, 3);
  addEdge(G, 3, 4);

  printf("--- Running BFS starting from vertex 0 ---\n");
  BFS(G, 0);
  printGraphStats(G);

  printf("\n--- Running DFS ---\n");
  // Re-initialize arrays for DFS happens inside the DFS(G) function
  DFS(G);
  printGraphStats(G);

  return 0;
}
