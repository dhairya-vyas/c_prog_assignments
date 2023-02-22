#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll_no;
    int standard;
    int marks[5];
};

int main() {
    struct student students[10];
    int i, j;

    // Input student details
    for (i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll_no);
        printf("Enter standard of student %d: ", i+1);
        scanf("%d", &students[i].standard);

        printf("Enter marks of student %d in 5 subjects:\n", i+1);
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j+1);
            scanf("%d", &students[i].marks[j]);
        }
        printf("\n");
    }

    // Output student details
    for (i = 0; i < 10; i++) {
        printf("Name of student %d: %s\n", i+1, students[i].name);
        printf("Roll number of student %d: %d\n", i+1, students[i].roll_no);
        printf("Standard of student %d: %d\n", i+1, students[i].standard);

        int total = 0;
        for (j = 0; j < 5; j++) {
            printf("Marks of student %d in subject %d: %d\n", i+1, j+1, students[i].marks[j]);
            total += students[i].marks[j];
        }
        printf("Total marks of student %d: %d\n", i+1, total);
        printf("\n");
    }

    // Student-wise totals
    for (i = 0; i < 10; i++) {
        int total = 0;
        for (j = 0; j < 5; j++) {
            total += students[i].marks[j];
        }
        printf("Total marks of student %d: %d\n", i+1, total);
    }

    // Subject-wise totals
    for (j = 0; j < 5; j++) {
        int total = 0;
        for (i = 0; i < 10; i++) {
            total += students[i].marks[j];
        }
        printf("Total marks of subject %d: %d\n", j+1, total);
    }

    return 0;
}
