/*
MAINA WANGUI
CT101/G/23707/24
*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[25], department[20], email[50];
    float salary;
    int id;
}employee;

int main() {
    strcpy(employee.name, "John Doe");
    strcpy(employee.department, "Human Resources");
    strcpy(employee.email, "johndoe@company.com");
    employee.id = 12345;
    employee.salary = 55000.50;

    printf("Employee's Name: %s\n", employee.name);
    printf("Employee's ID: %d\n", employee.id);
    printf("Department: %s\n", employee.department);
    printf("Email address: %s\n", employee.email);
    printf("Salary: %2f\n", employee.salary);

    return 0;
}