#include <stdio.h>
#include <string.h>

#define SHIFT 5

char *encode(char *string) {
  int length = strlen(string);
  for (int i = 0; i < length; i++) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      string[i] = 'a' + (string[i] - 'a' + SHIFT) % 26;
    } else if (string[i] >= 'A' && string[i] <= 'Z') {
      string[i] = 'A' + (string[i] - 'A' + SHIFT) % 26;
    }
  }
  return string;
}

char *decode(char *string) {
  int length = strlen(string);
  for (int i = 0; i < length; i++) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      string[i] = 'a' + (string[i] - 'a' - SHIFT + 26) % 26;
    } else if (string[i] >= 'A' && string[i] <= 'Z') {
      string[i] = 'A' + (string[i] - 'A' - SHIFT + 26) % 26;
    }
  }
  return string;
}

int main() {
  char string[100];
  printf("Enter a string to encode: ");
  scanf("%s", string);
  encode(string);
  printf("Encoded string: %s\n", string);
  decode(string);
  printf("Decoded string: %s\n", string);
  return 0;
}