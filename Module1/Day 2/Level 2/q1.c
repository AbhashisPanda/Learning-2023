#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap_alternate(int arr[], int size) {
  for (int i = 0; i < size - 1; i += 3) {
    if(i+2<size) {
      swap(&arr[i], &arr[i + 2]);
    }
    else{
      break;
    }
  }
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Before swapping: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  swap_alternate(arr, size);
  printf("After swapping: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}