#include <stdio.h>

void print_bits(unsigned int num) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
}

int main() {
  unsigned int num;
  printf("Enter a 32 bit integer: ");
  scanf("%u", &num);
  printf("Bits of %u: ", num);
  print_bits(num);
  printf("\n");
  return 0;
}