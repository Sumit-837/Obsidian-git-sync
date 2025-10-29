#include <stdio.h>

int any_case_count(char *string, char ch1);
void case_specific_replace(char *string, char ch1, char ch2);

int main() {
  char string[] = "Alabama", ch1 = 'a', ch2 = 'z';
  printf("The letter %c is present %d times in your string\n", ch1,
         any_case_count(string, ch1));
  case_specific_replace(string, ch1, ch2);
  printf("%s", string);
  return 0;
}

int any_case_count(char *string, char ch) { // ch must be lowercase.
  int i = 0, n = 0;
  while (string[i] != '\0') {
    if (string[i] == ch ||
        string[i] == ch - 32) { // uppercase is 32 ascii behind.
      n++;
    }
    i++;
  }
  return n;
} // later you must redesign this for both upper and lower cases
// ascii range upper (65-90) ,lower(97 -122).

void case_specific_replace(char *string, char ch1, char ch2) {

  while (*string++ != '\0') {
    if (*string == ch1) {
      *string = ch2;
    }
  }
}
