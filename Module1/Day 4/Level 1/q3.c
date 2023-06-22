#include <stdio.h>

void reverse_array(int *arr, int size) {
  int i = 0;
  int j = size - 1;
  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

int main() {
  int arr[100];
  int n;
  printf("Enter length of Array");
  scanf("%d",&n);
  printf("Enter Array elements");
  for(int i=0;i<n;i++){
	  scanf("%d",arr[i]);
  }
  int size = sizeof(arr) / sizeof(int);
  printf("Original Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  reverse_arr(arr, size);

  printf("Reversed Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}