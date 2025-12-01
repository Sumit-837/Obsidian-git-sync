#include <stdio.h>
#include <string.h>

typedef struct dancer {
  char name[15];
  int score;
  int lives;
} dancer;

void rounds(dancer *arr, int len) {
  int a, b, c, total;
  for (int i = 0; i < len; i++) {
    if (arr[i].lives > 0) {
      printf("For dancer %s...\n", arr[i].name);
      printf("Score of judge1: ");
      scanf("%d", &a);
      printf("Score of judge2: ");
      scanf("%d", &b);
      printf("Score of judge3: ");
      scanf("%d", &c);
      total = a + b + c;
      arr[i].score += total;
      printf("total score of %s = %d\n", arr[i].name, arr[i].score);
    }
  }
  int min = 99999;
  for (int i = 0; i < len; i++) {
    if (arr[i].lives > 0 && arr[i].score < min) {
      min = arr[i].score;
    }
  }
  for (int i = 0; i < len; i++) {
    if (arr[i].lives > 0 && arr[i].score == min) {
      arr[i].lives -= 1;
      printf("%s is eleminated\n\n", arr[i].name);
    }
  }
}

void printarr(dancer *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%s, %d, %d\n", arr[i].name, arr[i].score, arr[i].lives);
  }
}

int main() {
  dancer arr[] = {{"Dev", 0, 1},
                  {"Ankush", 0, 1},
                  {"Allu", 0, 1},
                  {"Nora", 0, 1},
                  {"Tamannah", 0, 1}};
  int len = sizeof(arr) / sizeof(arr[0]);
  // round 1 to 3
  printf("round 1\n");
  rounds(arr, len);
  // printarr(arr, 5);
  printf("round 2\n");
  rounds(arr, len);
  // printarr(arr, 5);
  printf("round 3\n");
  rounds(arr, len);

  // (wildcard)

  printf("Whom do you want to re-enter ?\nType their name\n");
  int k = 0;
  char l[15];
  for (int i = 0; i < len; i++) {
    if (arr[i].lives == 0) {
      k++;
      printf("%d. %s\n", k, arr[i].name);
    }
  }
  scanf("%s", l);
  for (int i = 0; i < len; i++) {
    if (strcmp(arr[i].name, l) == 0) {
      arr[i].lives += 1;
    }
  }
  // resetting scores for finale
  for (int i = 0; i < len; i++) {
    arr[i].score = 0;
  }
  printarr(arr, len);
  rounds(arr, len);
  // winners
  for (int i = 0; i < len; i++) {
    if (arr[i].lives > 0) {
      printf("winner: %s\n", arr[i].name);
    }
  }
  return 0;
}
