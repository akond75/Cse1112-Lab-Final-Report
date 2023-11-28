#include<stdio.h>

int palindrome(int a) {
  int reminder, reversednumber = 0;
  int originalnumber = a;
  while (a > 0) {
    reminder = a % 10;
    reversednumber = reversednumber * 10 + reminder;
    a = a / 10;
  }
  if (originalnumber == reversednumber) {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  int a;
  scanf("%d", & a);
  if (palindrome(a)) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
  return 0;
}