#include <stdio.h>
int linear_search(int arr[], int size, int key) {
  int i;
  for (i = 0; i < size; i++) {
    if (arr[i] == key) {
      return 1; 
    }
  }
  return 0; 
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
  int key = 25;
  int found = linear_search(arr, size, key);
  if (found) {
    printf("Element found!\n");
  } else {
    printf("Element not found!\n");
  }
  return 0;
}