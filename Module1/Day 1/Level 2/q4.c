#include <stdio.h>

int getCharType(int ascii) {
  if (ascii >= 65 && ascii <= 90) {
    return 1; 
  } else if (ascii >= 97 && ascii <= 122) {
    return 2; 
  } else if (ascii >= 48 && ascii <= 57) {
    return 3; 
  } else if (ascii >= 32 && ascii <= 126) {
    return 4; 
  } else {
    return 5; 
  }
}

int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  int ascii = c; 
  int type = getCharType(ascii);
  printf("Type: %d\n", type);
  return 0;
}