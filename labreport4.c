#include <stdio.h>

#include <stdlib.h>

int main() {
  char number[1000];
  int sum = 0;
  fgets(number, sizeof(number), stdin);
  for (int i = 0; number[i] != '\0'; i++) {
    if (isdigit(number[i])) {
      sum += number[i] - '0';
    }
  }
  printf("%d\n", sum);
  return 0;
}