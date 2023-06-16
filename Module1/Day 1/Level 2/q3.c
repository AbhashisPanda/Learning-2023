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
      return 1; // The character is a vowel
    default:
      return 0; // The character is not a vowel
  }
}

int main() {
  char c;
  scanf("%c",c);
  int is_vowel = isVowel(c);
  if (is_vowel) {
    printf("Vowel\n");
  } else {
    printf("Not Vowel\n");
  }
  return 0;
}