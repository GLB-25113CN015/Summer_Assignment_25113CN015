#include <stdio.h>

int main()
{
    int id[10], salary[10], n, i;
    char name[10][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n===== Employee Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Salary: %d\n\n", salary[i]);
    }

    return 0;
}