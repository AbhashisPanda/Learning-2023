#include <stdio.h>

int evenelesum(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      sum += arr[i];
    }
  }
  return sum;
}

int oddlelesum(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      sum += arr[i];
    }
  }
  return sum;
}

int main() {
  int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
  int size = sizeof(arr) / sizeof(int);
  int evensum = evenelesum(arr, size);
  int oddsum = oddlelesum(arr, size);
  int diff = evensum - oddsum;
  
  printf("Sum of even elements: %d\n", evensum);
  printf("Sum of odd elements: %d\n", oddsum);
  printf("Difference between even and odd elements: %d\n", diff);
  
  return 0;
}