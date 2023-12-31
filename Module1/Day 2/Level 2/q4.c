#include <stdio.h>

char *xstrchr(char *string, char ch) {
  while (*string != '\0') {
    if (*string == ch) {
      return string;
    }
    string++;
  }
  return NULL;
}

int main() {
  char string[100];
  char ch;
  printf("Enter a string: ");
  scanf("%s", string);
  printf("Enter a character to search for: ");
  scanf(" %c", &ch);
  char *result = xstrchr(string, ch);
  if (result != NULL) {
    printf("'%c' was found at position %ld\n", ch, result - string, string);
  } else {
    printf("'%c' was not found \n", ch, string);
  }
  return 0;
}