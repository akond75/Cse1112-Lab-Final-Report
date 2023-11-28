#include <stdio.h>

#define A_GRADE 90
#define B_GRADE 80
#define C_GRADE 70
#define D_GRADE 60
#define GET_GRADE(score)\
  (score >= A_GRADE) ? 'A' : \
  (score >= B_GRADE) ? 'B' : \
  (score >= C_GRADE) ? 'C' : \
  (score >= D_GRADE) ? 'D' : 'F'
int main() {
  int studentScore;
  scanf("%d", & studentScore);
  printf("%c\n", GET_GRADE(studentScore));
  return 0;
}