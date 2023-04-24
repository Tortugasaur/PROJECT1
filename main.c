// N00918242 Luigi Razon

#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

#define MAX_TEAMS 50

struct tokens {
  int division;
  int team;
  int wins;
  int losses;
  int overtime_shootout_losses;
  int points;
};

struct team {
  char name[3];
  char division[20];
  int wins;
  int losses;
  int ot_shootout_losses;
  int points;
};
struct Team teams[MAX_TEAMS];
int num_teams = 0;

void load(char* filename) {
  FILE* fp = fopen(filename, "r");
  char buffer[100];

  for (int i = 1; i < 7; i++) {
    parse_line(buffer, 256, i, fp);
    //if () {

    //}
  }
  fclose(fp);
}

int main() {
  char filename[] = "hockey-stats.csv";

  load(filename);

  char input[100];
  int input_len;
  
  // ask user to input choice
  while (!(atoi(input) >= 1) || !(atoi(input) <= 5)) {
    printf("1. Show all statistics of a specific division.\n");
    printf("2. Show all statistics of a specific team.\n");
    printf("3. Show team with highest number of wins.\n");
    printf("4. Show team with highest number of points.\n");
    printf("5. Quit program.\n");
    input_len = krgetline(input, 100);
  }
  return 0;

  /*if (fp == NULL) {
    printf("Unable to open file '%s'\n", filename);
    return 1;
  }*/

  switch (atoi(input)) {
    case 1:

      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    default:
      break;
  }
  // return 0 to show successful completion
  return 0;
}

