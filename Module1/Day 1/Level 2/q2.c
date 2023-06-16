#include <stdio.h>

char getGrade(int score) {
  switch (score) {
    case 90 ... 100:
      return 'A';
    case 75 ... 89:
      return 'B';
    case 60 ... 74:
      return 'C';
    case 50 ... 59:
      return 'D';
    case 36 ... 49:
      return 'E';
    case 0 ... 35:
      return 'F';
    default:
      return 'X'; // Use 'X' to indicate an invalid score
  }
}

int main() {
  int score = 65;
  char grade = getGrade(score);
  printf("Grade %c\n", grade);
  return 0;
}