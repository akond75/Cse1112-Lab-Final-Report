#include <stdio.h>

#include <string.h>

struct Student {
  char name[50];
  int id;
  float cgpa;
}
void bubbleSort(struct Student arr[], int n) {
  int i, j;
  struct Student temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j].cgpa < arr[j + 1].cgpa) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", & n);
  struct Student students[n];
  for (int i = 0; i < n; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("ID: ");
    scanf("%d", & students[i].id);
    printf("CGPA: ");
    scanf("%f", & students[i].cgpa);
  }
  bubbleSort(students, n);
  printf("\nSorted student details based on CGPA:\n");
  printf("%-10s %-10s %-10s\n", "Name", "ID", "CGPA");
  for (int i = 0; i < n; i++) {
    printf("%-10s %-10d %-10.2f\n", students[i].name, students[i].id, students[i].cgpa);
  }
  return 0;
}