#include <stdio.h>

int isVowel(char c) {
  switch (c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1; 
    default:
      return 0; 
  }
}

int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  int is_vowel = isVowel(c);
  if (is_vowel) {
    printf("Vowel\n");
  } else {
    printf("Not Vowel\n");
  }
  return 0;
}