#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int empid;
    char name[50];
    float salary;
    int year_of_joining;
} Employee;

int get_service(Employee emp) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    int current_year = t->tm_year + 1900;
    return current_year - emp.year_of_joining;
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int num_employees;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Input employee data
    for (int i = 0; i < num_employees; i++) {
        printf("Enter data for employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empid);
        printf("Employee name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Year of joining: ");
        scanf("%d", &employees[i].year_of_joining);
    }

    // Calculate total, average, max and min salary
    float total_salary = 0;
    float max_salary = employees[0].salary;
    float min_salary = employees[0].salary;

    for (int i = 0; i < num_employees; i++) {
        total_salary += employees[i].salary;
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
        }
        if (employees[i].salary < min_salary) {
            min_salary = employees[i].salary;
        }
    }

    float avg_salary = total_salary / num_employees;

    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", avg_salary);
    printf("Max salary: %.2f\n", max_salary);
    printf("Min salary: %.2f\n", min_salary);

    // Find employee with max and min service
    int max_service = 0;
    int min_service = get_service(employees[0]);
    int max_service_empid = employees[0].empid;
    int min_service_empid = employees[0].empid;

    for (int i = 0; i < num_employees; i++) {
        int service = get_service(employees[i]);
        if (service > max_service) {
            max_service = service;
            max_service_empid = employees[i].empid;
        }
        if (service < min_service) {
            min_service = service;
            min_service_empid = employees[i].empid;
        }
    }

    printf("\nEmployee with max service:\n");
    printf("Employee ID: %d\n", max_service_empid);
    printf("Service: %d years\n", max_service);

    printf("\nEmployee with min service:\n");
    printf("Employee ID: %d\n", min_service_empid);
    printf("Service: %d years\n", min_service);

    return 0;
}
