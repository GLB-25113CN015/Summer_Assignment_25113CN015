#include <stdio.h>

int main()
{
    int roll[100], marks[100], n, i;
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n===== Student Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n\n", marks[i]);
    }

    return 0;
}