#include <stdio.h>

int isPalindrome(int num, int originalNum, int reversedNum) {
  if (num == 0) {
    if (originalNum == reversedNum) {
      return 1;
    } else {
      return 0;
    }
  } else {
    int lastDigit = num % 10;
    reversedNum = reversedNum * 10 + lastDigit;
    return isPalindrome(num / 10, originalNum, reversedNum);
  }
}
int main() {
  int num1;
  scanf("%d", & num1);
  if (isPalindrome(num1, num1, 0)) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
  return 0;
}