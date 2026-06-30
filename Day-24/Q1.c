#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are Not Rotations");
        return 0;
    }

    // Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if second string exists in concatenated string
    if(strstr(temp, str2) != NULL)
        printf("Strings are Rotations");
    else
        printf("Strings are Not Rotations");

    return 0;
}