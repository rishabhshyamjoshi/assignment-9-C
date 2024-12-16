#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    char gender[10];
    float salary;
    char designation[50];
    char dateOfJoining[15];
};

int main() {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Gender: ");
    scanf("%s", emp.gender);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Employee Designation: ");
    scanf("%s", emp.designation);
    printf("Enter Date of Joining (dd/mm/yyyy): ");
    scanf("%s", emp.dateOfJoining);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Gender: %s\n", emp.gender);
    printf("Salary: %.2f\n", emp.salary);
    printf("Designation: %s\n", emp.designation);
    printf("Date of Joining: %s\n", emp.dateOfJoining);

    return 0;
}
