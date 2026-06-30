#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main()
{
    struct Student s;
    char grade;

    printf("Enter Student Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    // Calculate total and percentage
    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    // Grade calculation
    if(s.percentage >= 90)
        grade = 'A';
    else if(s.percentage >= 75)
        grade = 'B';
    else if(s.percentage >= 60)
        grade = 'C';
    else if(s.percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display marksheet
    printf("\n----- Marksheet -----\n");
    printf("Roll No     : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.m1);
    printf("Subject 2   : %.2f\n", s.m2);
    printf("Subject 3   : %.2f\n", s.m3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", grade);

    return 0;
}