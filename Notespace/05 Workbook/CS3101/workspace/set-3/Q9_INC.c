#include <stdio.h>

void if_else_implementation(int n);

int main() {
  // Implementing the scheme using if-else
  char rank[3]; // we may need 2 spaces but the last space always gets occupied
                // by null terminator '\0'
  int n;
  printf("What's your rank?\n");
  scanf("%2s", &rank); // we need to put that 2 for letting 2 inputs to occupy
                       // the string.
  // have to map rank to number. wouldn't have needed if if_else_implementation
  // was the only case but we have to do switch_case implementation also so....

  if (rank[0] == 'A' &&
      rank[1] ==
          '*') { // each element of this rank string is char. dont put ", put '
    n = 0;
  } else if (rank[0] == 'A' && rank[1] != '*') {
    n = 1;
  } else if (rank[0] == 'B') {
    n = 2;
  } else if (rank[0] == 'C') {
    n = 3;
  }
  if_else_implementation(n);
}

void if_else_implementation(int n) {
  if (n == 0) {
    printf("Incentive: 500 USD + funds for conference travel, accommodation, "
           "and registration\n");
  } else if (n == 1) {
    printf(
        "Incentive: 300 USD + funds for conference travel and accommodation\n");
  } else if (n == 2) {
    printf("Incentive: 150 USD + funds for conference travel\n");
  } else if (n == 3) {
    printf("Incentive: 100 USD only\n");
  } else {
    printf("invalid rank\n");
  }
}

// void switch_case_implementation() {}
