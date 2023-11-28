#include <stdio.h>

void copyArray(int * source, int * destination, int size) {
  for (int i = 0; i < size; i++) {
    *(destination + i) = * (source + i);
  }
}
int main() {
  int size;
  scanf("%d", & size);
  int sourceArray[size];
  int destinationArray[size];
  for (int i = 0; i < size; i++) {
    scanf("%d", & sourceArray[i]);
  }
  copyArray(sourceArray, destinationArray, size);
  printf("Copied array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", destinationArray[i]);
  }
  return 0;
}