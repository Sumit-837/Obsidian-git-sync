#include <math.h>
#include <stdio.h>

int isPrime(int a);
int sumOfDigits(char *string);

int main() {

  int code, result;
  char string[20];

  printf("Enter the codeword: ");
  scanf("%d", &code);
  sprintf(string, "%i", code); // used sprintf() to turn integer into string.
  //(the length of array is still 20)
  result = isPrime(sumOfDigits(string));
  if (result == 1)
    printf("Welcome to Prime Sus Amongus\n");
  else if (result == 0)
    printf("You are an ImPasta!!!\n");
  return 0;
}

// as we know, the most efficient method to find if any number is prime, is to
// at least check if its divisable by any integer until its sq-root.

int isPrime(int a) {
  int rv = 1;
  double end_val = sqrt(a) + 1;
  for (int i = 2; i <= (int)end_val; i++) {
    if (a % i == 0) {
      rv = 0;
      break;
    }
  }
  return rv;
}

int sumOfDigits(char *string) {
  int sum = 0;
  while (*string != '\0') {
    sum += *string - '0'; // this will conrrespont to the exact number.
    // as '0' = 48, '1' = 49,...
    *string++;
  }
  return sum;
}
