#include <stdio.h>

void minmax(int *arr, int size, int *min, int *max) {
  *min = arr[0];
  *max = arr[0];
  
  for (int i = 1; i < size; i++) {
    if (arr[i] < *min) {
      *min = arr[i];
    } 
    else if (arr[i] > *max) {
      *max = arr[i];
    }
  }
}

int main() {
  int arr[100];
  int n;
  printf("Enter length of arr");
  scanf("%d",&n);
  printf("Enter array elements");
  for(int i=0;i<n;i++){
	  scanf("%d",arr[i]);
  }
  int min, max;
  
  minmax(arr, sizeof(arr) / sizeof(int), &min, &max);
  
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  
  return 0;
}