// N00918242 Luigi Razon

#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

#define MAX_TEAMS 50

struct columns {
  char name[20];
  char division[20];
  int wins;
  int losses;
  int ot_shootout_losses;
  int points;
};

struct team {
  char name[20];
  char division[20];
  int wins;
  int losses;
  int ot_shootout_losses;
  int points;
};
struct Team teams[MAX_TEAMS];
int num_teams = 0;

void load(char* filename) {
  
}

int main() {
  FILE *fp;
  char filename[] = "hockey-stats.csv";
  char buffer[256];

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
  
  fp = fopen(filename, "r");

  if (fp == NULL) {
    printf("Unable to open file '%s'\n", filename);
    return 1;
  }

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

