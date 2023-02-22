#include <stdio.h>
#include <stdlib.h>

// Define a structure for student information
typedef struct student {
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    // Create a variable of struct type and input its values
    Student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student age: ");
    scanf("%d", &s1.age);
    printf("Enter student GPA: ");
    scanf("%f", &s1.gpa);

    // Output the variable's values
    printf("Student name: %s\n", s1.name);
    printf("Student age: %d\n", s1.age);
    printf("Student GPA: %.2f\n", s1.gpa);

    // Initialize a variable of struct type with partial values
    Student s2 = {"Jane", 20};

    // Create a pointer of struct type, and assign address of variable
    Student *s_ptr = &s1;

    // Access members from the pointer using arrow operator
    printf("Student name (via pointer): %s\n", s_ptr->name);
    printf("Student age (via pointer): %d\n", s_ptr->age);
    printf("Student GPA (via pointer): %.2f\n", s_ptr->gpa);

    // Calculate size of variable, offset of each member
    printf("Size of Student struct: %lu bytes\n", sizeof(Student));
    printf("Offset of name member: %lu bytes\n", (unsigned long)&s1.name - (unsigned long)&s1);
    printf("Offset of age member: %lu bytes\n", (unsigned long)&s1.age - (unsigned long)&s1);
    printf("Offset of gpa member: %lu bytes\n", (unsigned long)&s1.gpa - (unsigned long)&s1);

    // Create alias for the structure type, pointer type using typedef
    typedef Student Employee;
    typedef Student* EmployeePtr;

    // Use the typedefs to declare variables and a pointer
    Employee e1 = {"John", 25, 3.7};
    EmployeePtr e_ptr = &e1;

    // Access members from the pointer using arrow operator
    printf("Employee name (via typedef): %s\n", e_ptr->name);
    printf("Employee age (via typedef): %d\n", e_ptr->age);
    printf("Employee GPA (via typedef): %.2f\n", e_ptr->gpa);

    return 0;
}
