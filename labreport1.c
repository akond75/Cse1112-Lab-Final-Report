#include <stdio.h>

float add() 
{
  printf("performing addition\n");
  float a, b;
  scanf("%f%f", & a, & b);
  return a + b;
}

float sub() 
{
  printf("performing subtraction\n");
  float a, b;
  scanf("%f%f", & a, & b);
  return a - b;
}

float mul() 
{
  printf("performing multiplication\n");
  float a, b;
  scanf("%f%f", & a, & b);
  return a * b;
}

float div() 
{
  printf("performing division\n");
  float a, b;
  scanf("%f%f", & a, & b);
  if (b == 0) {
    printf("can not be divided by 0 and result will be wrong\n");
  } else {
    return a / b;
  }
}

int rem() 
{
  printf("performing reminder\n");
  int a, b;
  scanf("%d%d", & a, & b);
  return a % b;
}

float squ() 
{
  printf("performing square\n");
  float a;
  scanf("%f", & a);
  float b;
  b = a * a;
  return b;
}

float cub() 
{
  printf("performing cube\n");
  float a;
  scanf("%f", & a);
  float b;
  b = (a * a) * a;
  return b;
}

int main() 
{
    printf("Enter how many times do you want this calculator to work\n");
    int x;
    scanf("%d", & x);
    if (x == 1) {
      printf("You can use this calculator %d time\n", x);
    } else {
      printf("You can use this calculator %d times\n", x);
    }
    for (int y = 1; y <= x; y++) {
      printf("For addition,subtraction,multiplication,division, reminder, square or cube press
        1, 2, 3, 4, 5, 6 or 7 accordingly\ n ");
        int a; scanf("%d", & a);
        if (a > 8) {
          printf("plz press between 1 to 8\n");
        } else if (a <= 0) {
          printf("plz press between 1 to 8\n");
        } else if (a == 1) {
          printf("result of addition %.2f\n", add());
        } else if (a == 2) {
          printf("result of subtraction %.2f\n", sub());
        } else if (a == 3) {
          printf("result of multiplication %.2f\n", mul());
        } else if (a == 4) {
          printf("result of division %.2f\n", div());
        } else if (a == 5) {
          printf("result of reminder %d\n", rem());
        } else if (a == 6) {
          printf("result of square %.2f\n", squ());
        } else {
          printf("result of cube %.2f\n", cub());
        }
      }
      printf("\nOpps memory is full!! Try relaunching the program\n");
      return 0;
}