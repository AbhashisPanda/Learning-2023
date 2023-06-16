#include <stdio.h>

void print_pattern1(int n) {
  for (int i = 1; i <= n; i++) {
    printf("%d", i);
  }
  for (int i = n - 1; i >= 1; i--) {
    printf("%d", i);
  }
}

void print_pattern2(int n) {
  for (int i = 1; i <= n - 2; i++) {
    printf(" ");
  }
}

void print_pattern3(int n) {
  for (int i = n; i >= 1; i--) {
    printf("%d", i);
  }
  for (int i = 2; i <= n; i++) {
    printf("%d", i);
  }
}

int main() {
  int n = 5;
  for (int i = n; i >= 1; i--) {
    print_pattern1(i);
    print_pattern2(i);
    print_pattern3(i);
    printf("\n");
  }
  return 0;
}