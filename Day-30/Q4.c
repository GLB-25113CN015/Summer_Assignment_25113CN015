#include <stdio.h>

int roll[10], marks[10], n;
char name[10][50];

void input()
{
    int i;
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
}

void display()
{
    int i;
    printf("\n===== Student Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n\n", marks[i]);
    }
}

int main()
{
    input();
    display();

    return 0;
}