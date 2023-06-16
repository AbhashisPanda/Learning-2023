#include <stdio.h>

int main() {
  double x = 0.7;
  unsigned long long int bits = *(unsigned long long int *)&x;
  int exp = (bits >> 52) & 0x7FF;
  printf("Exponent in Hex: 0x%X\n", exp);
  printf("Exponent in Binary: 0b");
  for (int i = 10; i >= 0; i--) {
    printf("%d", (exp >> i) & 1);
  }
  printf("\n");
  return 0;
}