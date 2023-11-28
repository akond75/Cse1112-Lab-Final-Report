#include <stdio.h>

int sumOfDigits(int num) {
  if (num == 0)
    return 0;
  else
    return num % 10 + sumOfDigits(num / 10);
}
int main() {
  int num;
  scanf("%d", & num);
  int result = sumOfDigits(num);
  printf("%d\n", result);
  return 0;
}