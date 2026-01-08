#include <stdio.h>
#include <string.h>

struct STUDENT {
  char name[20];
  int ID;
  float CGPA;
  char Major[20];
};

int retMaxID(struct STUDENT *arr, char *Major) {
  int maxID, maxCG, n;
  for (int i = 0; i < 10; i++) {
    if (strcmp(arr[i].Major, Major) == 0) {

      if (arr[i].CGPA >= maxCG) {
        maxCG = arr[i].CGPA;
        n = i;
      }
    }
  }
  maxID = arr[n].ID;
  return maxID;
}

int main() {

  struct STUDENT stu_arr[10] = {
      {"Alphonse", 90, 8.67, "Chemistry"}, {"Bradley", 91, 6.43, "Mathematics"},
      {"Curtis", 92, 9.21, "Chemistry"},   {"Dracma", 93, 7.73, "Mathematics"},
      {"Edward", 94, 8.97, "Chemistry"},   {"Nina", 95, 7.43, "Physics"},
      {"Ross", 96, 8.23, "Mathematics"},   {"Huges", 97, 7.56, "Physics"},
      {"Izumi", 98, 6.22, "Mathematics"},  {"Scar", 99, 7.89, "Physics"}};

  char Major[20];
  printf("Insert the major:(Physics/ Chemistry/ Mathematics): ");
  scanf("%s[20]", &Major);

  printf("The ID of the student with highest CGPA in %s Major is %d\n", Major,
         retMaxID(stu_arr, Major));

  return 0;
}
