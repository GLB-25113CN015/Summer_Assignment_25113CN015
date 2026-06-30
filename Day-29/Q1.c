#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    do
    {
        printf("\n===== CALCULATOR =====");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Sum = %.2f", a + b);
                break;

            case 2:
                printf("Difference = %.2f", a - b);
                break;

            case 3:
                printf("Product = %.2f", a * b);
                break;

            case 4:
                printf("Division = %.2f", a / b);
                break;

            case 5:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 5);

    return 0;
}