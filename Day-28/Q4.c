#include <stdio.h>

struct Contact
{
    char name[50];
    long phone;
};

int main()
{
    struct Contact c[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", c[i].name);

        printf("Enter phone number: ");
        scanf("%ld", &c[i].phone);
    }

    printf("\n===== Contact List =====\n");

    for(i = 0; i < n; i++)
    {
        printf("Name: %s\n", c[i].name);
        printf("Phone: %ld\n", c[i].phone);
    }

    return 0;
}