#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}