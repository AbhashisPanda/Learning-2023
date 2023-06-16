#include <stdio.h>

int compare_boxes(int a[], int b[], int size) {
  int found;
  for (int i = 0; i < size; i++) {
    found = 0;
    for (int j = 0; j < size; j++) {
      if (a[i] == b[j]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int size;
  printf("Enter the size of the boxes: ");
  scanf("%d", &size);
  int a[size], b[size];
  printf("Enter the items in box A: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter the items in box B: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &b[i]);
  }
  int result = compare_boxes(a, b, size);
  if (result) {
    printf("True");
  } else {
    printf("False");
  }
  return 0;
}