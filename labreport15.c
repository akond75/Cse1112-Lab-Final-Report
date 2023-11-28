#include <stdio.h>

#include <stdlib.h>

struct Student {
  char name[50];
  int rollNumber;
  float marks;
};
void addStudent(FILE * file) {
  struct Student newStudent;
  printf("Enter student name: ");
  scanf("%s", newStudent.name);
  printf("Enter roll number: ");
  scanf("%d", & newStudent.rollNumber);
  printf("Enter marks: ");
  scanf("%f", & newStudent.marks);
  fwrite( & newStudent, sizeof(struct Student), 1, file);
  printf("Student record added successfully.\n");
}
void displayStudents(FILE * file) {
  struct Student currentStudent;
  rewind(file);
  while (fread( & currentStudent, sizeof(struct Student), 1, file) == 1) {
    printf("Name: %s\n", currentStudent.name);
    printf("Roll Number: %d\n", currentStudent.rollNumber);
    printf("Marks: %.2f\n", currentStudent.marks);
    printf("\n");
  }
}
void modifyStudent(FILE * file, int rollNumber) {
  struct Student currentStudent;
  long int position;
  rewind(file);
  while (fread( & currentStudent, sizeof(struct Student), 1, file) == 1) {
    if (currentStudent.rollNumber == rollNumber) {
      position = ftell(file) - sizeof(struct Student);
      break;
    }
  }
  if (feof(file)) {
    printf("Student with roll number %d not found.\n", rollNumber);
    return;
  }
  printf("Enter new name: ");
  scanf("%s", currentStudent.name);
  printf("Enter new marks: ");
  scanf("%f", & currentStudent.marks);
  fseek(file, position, SEEK_SET);
  fwrite( & currentStudent, sizeof(struct Student), 1, file);
  printf("Student record modified successfully.\n");
}
int main() {
  FILE * file;
  int choice, rollNumber;
  file = fopen("student_records.dat", "rb+");
  if (file == NULL) {
    file = fopen("student_records.dat", "wb+");
  }
  do {
    printf("\nMenu:\n");
    printf("1. Add student\n");
    printf("2. Display all students\n");
    printf("3. Modify student data\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      addStudent(file);
      break;
    case 2:
      displayStudents(file);
      break;
    case 3:
      printf("Enter the roll number of the student to modify: ");
      scanf("%d", & rollNumber);
      modifyStudent(file, rollNumber);
      break;
    case 4:
      printf("Exiting program.\n");
      break;
    default:
      printf("Invalid choice. Please enter a valid option.\n");
    }
  } while (choice != 4);
  fclose(file);
  return 0;
}