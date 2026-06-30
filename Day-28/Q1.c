#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author Name: ");
        scanf("%s", b[i].author);
    }

    // Display book records
    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].id);
        printf("Book Name   : %s\n", b[i].name);
        printf("Author      : %s\n", b[i].author);
    }

    return 0;
}