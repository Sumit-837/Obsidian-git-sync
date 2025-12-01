#include <stdio.h>

int main() {
  int budget, choice, choicenext, movies, rides, games, rmv;
  printf("<<Welcome to SukhSayar, Our wonderful fair>>\n");
  printf("Enter your budget: ");
  scanf("%d", &budget);
  if (budget < 100) {
    printf("Too low, go home");
    return 0;
  }

  movies = 0;
  rides = 0;
  games = 0;
  choicenext = 1;
  rmv = 0;
  do {
    printf("\nChoose One to buy\n");
    printf("1. Movies\n");
    printf("2. Rides\n");
    printf("3. Games\n");
    printf("4. Remove\n");
    printf("5. Finish it.\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Adding 1 movie is in process...\n");
      if (movies > 2) {
        printf("You may not watch that much movies\n");
      } else if (budget < 300) {
        printf("You are runninig out of budget\n");
      } else {
        budget -= 300;
        movies++;
      }
      break;

    case 2:
      printf("Adding 1 ride is in process...\n");
      if (rides > 2) {
        printf("Let the other people ride a bit (;\n");
      } else if (budget < 150) {
        printf("You are runninig out of budget\n");
      } else {
        budget -= 150;
        rides++;
      }
      break;

    case 3:
      printf("Adding 1 game is in process...\n");
      if (games > 3) {
        printf("Let the other people enjoy gaming a bit (;\n");
      } else if (budget < 100) {
        printf("You are runninig out of budget\n");
      } else {
        budget -= 100;
        games++;
      }
      break;

    case 4:
      printf("You've chosen to remove items.\nWhat do you seek to remove?\n");
      printf("1.Movie\n2.Ride\n3.Game\n");
      scanf("%d", &rmv);
      switch (rmv) {
      case 1:
        if (movies > 0) {
          printf("removing one movie\n");
          movies--;
          budget += 300;
        } else {
          printf("select a movie first to remove\n");
        }
        break;
      case 2:
        if (rides > 0) {
          printf("removing one ride\n");
          rides--;
          budget += 150;
        } else {
          printf("select a ride first to remove\n");
        }
        break;

      case 3:
        if (games > 0) {
          printf("removing one game\n");
          games--;
          budget += 100;
        } else {
          printf("select a game first to remove\n");
        }
        break;
      }
      break;

    case 5:
      choicenext = 0;
      break;
    }

  } while (choicenext);

  printf("Enjoy the fun fair\nYour remaining balance is: %d\n", budget);
  printf("You've choosen %d movies, %d rides and %d games;", movies, rides,
         games);
  return 0;
}
