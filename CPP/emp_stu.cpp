#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char lastName[50];
    char firstName[50];
    float gpa;
} Student;

typedef struct {
    char lastName[50];
    char firstName[50];
    float salary;
} Employee;

void initStudents(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Student %d Details:\n", i + 1);
        printf("First Name: ");
        scanf("%s", students[i].firstName);
        printf("Last Name: ");
        scanf("%s", students[i].lastName);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }
}

void initEmployees(Employee *employees, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Employee %d Details:\n", i + 1);
        printf("First Name: ");
        scanf("%s", employees[i].firstName);
        printf("Last Name: ");
        scanf("%s", employees[i].lastName);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}

void printStudents(Student *students, int n) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - GPA: %.2f\n", students[i].firstName, students[i].lastName, students[i].gpa);
    }
}

void printEmployees(Employee *employees, int n) {
    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Salary: %.2f\n", employees[i].firstName, employees[i].lastName, employees[i].salary);
    }
}

int compareNames(const char *first1, const char *last1, const char *first2, const char *last2) {
    return (strcmp(first1, first2) == 0 && strcmp(last1, last2) == 0);
}

void giveRaise(Employee *employees, int empCount, Student *students, int stuCount) {
    for (int i = 0; i < empCount; i++) {
        for (int j = 0; j < stuCount; j++) {
            if (compareNames(employees[i].firstName, employees[i].lastName,
                             students[j].firstName, students[j].lastName)) {
                if (students[j].gpa > 3.0) {
                    employees[i].salary *= 1.10; // 10% raise
                }
            }
        }
    }
}

int main() {
    int empCount, stuCount;
    Employee *employees;
    Student *students;

    printf("Enter number of employees: ");
    scanf("%d", &empCount);
    employees = (Employee *)malloc(empCount * sizeof(Employee));

    printf("\nEnter number of students: ");
    scanf("%d", &stuCount);
    students = (Student *)malloc(stuCount * sizeof(Student));

    initEmployees(employees, empCount);
    initStudents(students, stuCount);

    printf("\nBefore Raise:");
    printEmployees(employees, empCount);

    giveRaise(employees, empCount, students, stuCount);

    printf("\nAfter Raise (for matching GPA > 3.0 students):");
    printEmployees(employees, empCount);

    printf("\nStudent List (for reference):");
    printStudents(students, stuCount);

    free(employees);
    free(students);

    return 0;
}