#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len;

    printf("Enter string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING MENU =====");
        printf("\n1. Length");
        printf("\n2. Reverse");
        printf("\n3. Uppercase");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d", strlen(str));
                break;

            case 2:
                len = strlen(str);

                for(i = 0; i < len; i++)
                    rev[i] = str[len - i - 1];

                rev[len] = '\0';

                printf("Reverse = %s", rev);
                break;

            case 3:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase = %s", str);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 4);

    return 0;
}