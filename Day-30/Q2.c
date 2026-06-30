#include <stdio.h>

int main()
{
    char book[5][50];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter book names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", book[i]);
    }

    printf("\n===== Library Books =====\n");
    for(i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, book[i]);
    }

    return 0;
}