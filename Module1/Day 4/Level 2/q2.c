#include <stdio.h>

int binary_to_decimal(char *binary_num) {
  int decimal_number = 0;
  int i = 0;
  while (binary_num[i] != '\0') {
    int digit = binary_num[i++] - '0';
    decimal_num = decimal_num * 2 + digit;
  }
  return decimal_num;
}

int octal_to_decimal(char *octal_num) {
  int decimal_num = 0;
  int i = 0;
  while (octal_num[i] != '\0') {
    int digit = octal_num[i++] - '0';
    decimal_num = decimal_num * 8 + digit;
  }
  return decimal_num;
}

int hexadecimal_to_decimal(char *hexadecimal_num) {
  int decimal_num = 0;
  int i = 0;
  while (hexadecimal_num[i] != '\0') {
    int digit = hexadecimal_num[i++];
    if (digit >= '0' && digit <= '9') {
      digit = digit - '0';
    } else {
      digit = digit - 'A' + 10;
    }
    decimal_num = decimal_num * 16 + digit;
  }
  return decimal_num;
}

int main() {
  char binary_num[] = "11101";
  int decimal_num = binary_to_decimal(binary_number);
  printf("Binary number: %s\nDecimal number: %d\n", binary_num, decimal_num);

  char octal_num[] = "1532";
  decimal_num = octal_to_decimal(octal_num);
  printf("Octal number: %s\nDecimal number: %d\n", octal_num, decimal_num);

  char hexadecimal_num[] = "35A";
  decimal_num = hexadecimal_to_decimal(hexadecimal_num);
  printf("Hexadecimal number: %s\nDecimal number: %d\n", hexadecimal_num, decimal_num);
  return 0;
}