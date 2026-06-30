#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Calculate HRA, DA and Gross Salary
        emp[i].hra = 0.20 * emp[i].basicSalary;
        emp[i].da = 0.10 * emp[i].basicSalary;
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n----------- Salary Details -----------\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }

    return 0;
}