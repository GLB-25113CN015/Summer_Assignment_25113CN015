#include <stdio.h>

int main()
{
    int arr[100], n, choice, i, sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n===== ARRAY MENU =====");
        printf("\n1. Display Array");
        printf("\n2. Sum of Array");
        printf("\n3. Find Maximum");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d", sum);
                break;

            case 3:
                max = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }

                printf("Maximum = %d", max);
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