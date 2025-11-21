#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *fp = fopen("Data1.txt", "r");
  FILE *fp1 = fopen("Data2.txt", "w");

  int c;
  // we can assign even inside ciondition.
  while ((c = getc(fp)) != EOF) { // EOF is actual end of file
    putc(tolower(c), fp1);
  }
  fclose(fp);
  fclose(fp1);
}
