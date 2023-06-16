#include <stdio.h>

void find_min_max_digits(int num) {
  int min_digit = 10;
  int max_digit = -1;
  while (num > 0) {
    int digit = num % 10;
    if (digit < min_digit) {
      min_digit = digit;
    }
    if (digit > max_digit) {
      max_digit = digit;
    }
    num /= 10;
  }
  if (min_digit == 10 || max_digit == -1) {
    printf("Not Valid\n");
  } else {
    printf("%d and %d\n", min_digit, max_digit);
  }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  find_min_max_digits(num);
  return 0;
}