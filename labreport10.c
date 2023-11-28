#include <stdio.h>

int arraySum(int arr[], int size) {
  if (size == 0) {
    return 0;
  }
  return arr[size - 1] + arraySum(arr, size - 1);
}
int main() {
  int size;
  scanf("%d", & size);
  int arr[size];
  for (int i = 0; i < size; i++) {
    scanf("%d", & arr[i]);
  }
  printf("%d\n", arraySum(arr, size));
  return 0;
}