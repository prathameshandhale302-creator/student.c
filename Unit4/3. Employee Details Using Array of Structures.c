#include
<stdio.h>
#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(void)
{
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_EMPLOYEES) {
        printf("Please enter a number between 1 and %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter employee ID: ");
        if (scanf("%d", &employees[i].id) != 1) {
            printf("Invalid employee ID.\n");
            return 1;
        }

        printf("Enter employee name: ");
        if (scanf(" %49[^\n]", employees[i].name) != 1 || getchar() != '\n') {
            printf("Please enter a name of up to 49 characters.\n");
            return 1;
        }

        printf("Enter employee salary: ");
        if (scanf("%f", &employees[i].salary) != 1) {
            printf("Invalid salary.\n");
            return 1;
        }
    }

    printf("\n----- Employee Information -----\n");

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID     = %d\n", employees[i].id);
        printf("Employee Name   = %s\n", employees[i].name);
        printf("Employee Salary = %.2f\n", employees[i].salary);
    }

    return 0;
}
