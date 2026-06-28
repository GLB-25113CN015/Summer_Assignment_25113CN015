#include <stdio.h>

int main()
{
    int num, original, rem, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        rem = num % 10;
        fact = 1;

        // Find factorial of the digit
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    // Check Strong Number
    if(sum == original)
        printf("%d is a Strong Number", original);
    else
        printf("%d is Not a Strong Number", original);

    return 0;
}