#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of proper divisors
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Check perfect number
    if(sum == num)
        printf("%d is a Perfect Number", num);
    else
        printf("%d is Not a Perfect Number", num);

    return 0;
}