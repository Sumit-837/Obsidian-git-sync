#include <stdio.h>
#include <string.h>

struct Student {
  char name[20];
  char roll[10];
  double CGPA;
};

int main() {
  struct Student stu_arr[5] = {{"Alphonse", "28MS010", 8.67},
                               {"Barry", "28MS123", 6.43},
                               {"Curtis", "28MS067", 9.21},
                               {"Dracma", "28MS145", 7.73},
                               {"Edward", "28MS001", 8.97}};

  char roll[10];
  printf("Gimme your roll no.: ");
  scanf("%s", &roll);

  for (int i = 0; i < 5; i++) {

    if (strcmp(stu_arr[i].roll, roll) == 0) {
      printf("Your CGPA is: %lf", stu_arr[i].CGPA);
    }
  }
  return 0;
}
