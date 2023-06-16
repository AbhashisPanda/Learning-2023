#include <stdio.h>

int find_largest(int num) {
  int largest = 0;
  for (int i = 0; i < 4; i++) {
    int temp = num / 10;
    for (int j = 0; j < 3; j++) {
      if (i != j) {
        temp = temp * 10 + (num % 10);
      }
      num /= 10;
    }
    if (temp > largest) {
      largest = temp;
    }
    num = temp;
  }
  return largest;
}

int main() {
  int num;
  printf("Enter a 4 digit number: ");
  scanf("%d", &num);
  int largest = find_largest(num);
  printf("Largest number: %d\n", largest);
  return 0;
}