#include <stdio.h>

int main()
{
    int choice, tickets;
    float price = 200, total;

    printf("===== TICKET BOOKING SYSTEM =====\n");

    printf("1. Book Ticket\n");
    printf("2. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter number of tickets: ");
        scanf("%d", &tickets);

        total = tickets * price;

        printf("Booking Successful\n");
        printf("Total Amount = %.2f", total);
    }
    else if(choice == 2)
    {
        printf("Thank You");
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}