#include <stdio.h>

void decimal_to_binary(int num) {
  if (num > 0) {
    decimal_to_binary(num / 2);
    printf("%d", num % 2);
  }
}

void decimal_to_octal(int num) {
  if (num > 0) {
    decimal_to_octal(num / 8);
    printf("%d", num % 8);
  }
}

void decimal_to_hexadecimal(int num) {
  if (num > 0) {
    decimal_to_hexadecimal(num / 16);
    int rem = num % 16;
    if (rem < 10) {
      printf("%d", rem);
    } else {
      printf("%c", 'A' + rem - 10);
    }
  }
}

int main() {
  int num = 29;

  printf("Decimal: %d\n", num);

  printf("Binary: ");
  decimal_to_binary(num);
  printf("\n");

  printf("Octal: ");
  decimal_to_octal(num);
  printf("\n");

  printf("Hexadecimal: ");
  decimal_to_hexadecimal(num);
  printf("\n");

  return 0;
}