#include <stdio.h>

void sumavg(int *arr, int size, int *sum, float *avg) {
  *sum = 0;
  for (int i = 0; i < size; i++) {
    *sum += arr[i];
  }
  *avg = (float)*sum / size;
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
  int sum;
  float avg;
  
  sumavg(arr, sizeof(arr) / sizeof(int), &sum, &avg);
  
  printf("Sum: %d\n", sum);
  printf("Average %.2f\n", avg);
  
  return 0;
}