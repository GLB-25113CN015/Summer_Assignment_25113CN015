#include <stdio.h>

int rev = 0;

// Recursive function
int reverseNumber(int n)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number = %d", reverseNumber(num));

    return 0;
}