#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERIDPASSWORD {
  char username[30];
  char password[30];
} USERIDPASSWORD;

int main() {

  USERIDPASSWORD database[20] = {
      {"Alphonse", "GetMyBody"},      {"Edward", "DontForget3oct11"},
      {"Winry", "Automail"},          {"Nina", "BrotherEdward"},
      {"Roy", "FlameAlchemist"},      {"Riza", "HawkEye23"},
      {"Scar", "IshvalPain"},         {"Hughes", "AlwaysFamily"},
      {"Bradley", "WrathKing"},       {"Hohenheim", "ImmortalDad"},
      {"Ling", "GreedMode"},          {"LanFan", "BodyGuard1"},
      {"Armstrong", "MuscleSparkle"}, {"Marcoh", "RedStone"},
      {"Barry", "TheChopper"},        {"Olivier", "NorthStrong"},
      {"Alex", "MuscleAlchemy"},      {"Selim", "PrideShadow"},
      {"Envy", "ShapeShift"},         {"Gluttony", "HungryAlways"}};

  int no_of_datas = 20;

  // --- Write the database to file ---
  FILE *fp = fopen("Username-Password.txt", "wb");
  if (fp == NULL) {
    printf("Error opening file for writing!\n");
    exit(1);
  }

  fwrite(database, sizeof(USERIDPASSWORD), no_of_datas, fp);
  fclose(fp);

  // --- Read database back into memory ---
  USERIDPASSWORD inputDB[20];

  fp = fopen("Username-Password.txt", "rb");
  if (fp == NULL) {
    printf("Error opening file for reading!\n");
    exit(1);
  }

  fread(inputDB, sizeof(USERIDPASSWORD), no_of_datas, fp);
  fclose(fp);

  // --- Login Interface ---
  char uname[30], pw[30];
  int choice;

  do {
    printf("\nEnter Username : ");
    scanf("%s", uname);

    int foundIndex = -1;
    for (int i = 0; i < no_of_datas; i++) {
      if (strcmp(uname, inputDB[i].username) == 0) {
        foundIndex = i;
        break;
      }
    }

    if (foundIndex != -1) {
      printf("Enter Password : ");
      scanf("%s", pw);

      if (strcmp(pw, inputDB[foundIndex].password) == 0) {
        printf("\nWelcome!\n\n");
        break;
      } else {
        printf("Incorrect password!\n");
      }
    } else {
      printf("Username not found!\n");
    }

    printf("Do you want to try again? (1-Yes / 0-No): ");
    scanf("%d", &choice);

  } while (choice == 1);

  printf("\nProgram Ended.\n");
  return 0;
}
