#include <stdio.h>
#include <stdlib.h>

#define SUBJECTS 4

typedef struct {
    int id;
    char name[50];
    float marks[SUBJECTS];
} Student;

// Function to input student records
void inputStudents(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }
}

// Function to calculate average marks
float calculateAverage(float marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum / n;
}

// Function to display students with average > 60
void displayScholarshipStudents(Student *students, int n) {
    printf("\nStudents with average marks > 60 (Eligible for Scholarship):\n");
    for (int i = 0; i < n; i++) {
        float avg = calculateAverage(students[i].marks, SUBJECTS);
        if (avg > 60) {
            printf("\nID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Marks: ");
            for (int j = 0; j < SUBJECTS; j++) {
                printf("%.2f ", students[i].marks[j]);
            }
            printf("\nAverage: %.2f\n", avg);
        }
    }
}

int main() {
    int n;
    Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (Student *)malloc(n * sizeof(Student));

    inputStudents(students, n);
    displayScholarshipStudents(students, n);

    free(students);
    return 0;
}