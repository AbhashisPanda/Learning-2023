#include <stdio.h>

void bubble_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void print_arr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Enter length of Array");
  scanf("%d",&n);
  printf("Enter Array elements");
  for(int i=0;i<n;i++){
	  scanf("%d",arr[i]);
  }
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Array before sorting: ");
  print_arr(arr, size);

  bubble_sort(arr, size);

  printf("Array after sorting using Bubble Sort: ");
  print_arr(arr, size);

  return 0;
}