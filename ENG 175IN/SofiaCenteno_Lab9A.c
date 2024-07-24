// write a C program using struct to store a student’s name, student number, and GPA.

#include <stdio.h>

// define structure to store student info
typedef struct {
    char name[100];
    int student_number;
    float gpa;
} Student; // define name 'Student' for struct

int main() {
    Student student;

    // student input info
    printf("Enter student's full name: ");
    fgets(student.name, sizeof(student.name), stdin); // read full name

    printf("Enter student's number: ");
    scanf("%d", &student.student_number);

    printf("Enter student's GPA: ");
    scanf("%f", &student.gpa);
    
    // output student info
    printf("Student Information:\n");
    printf("Name: %s", student.name);
    printf("Student Number: %d\n", student.student_number);
    printf("GPA: %.2f\n", student.gpa);
    
    return 0;
}

// pseudoode:
// declare a variable 'student' to store student information
// output a message asking the user to enter the student's full name, student number, & GPA
// read and store the student's name, number, & GPA
// output the student's information