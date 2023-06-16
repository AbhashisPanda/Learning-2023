#include <stdio.h>

int count_bits_set(int n) {
  int count = 0;
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d integers in hexadecimal format:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%x", &arr[i]);
  }
  int total_bits = 0;
  for (int i = 0; i < size; i++) {
    total_bits += count_bits_set(arr[i]);
  }
  printf("Total number of bits set in the array: %d\n", total_bits);
  return 0;
}