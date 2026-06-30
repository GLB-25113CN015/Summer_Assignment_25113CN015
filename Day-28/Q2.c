#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    while(1)
    {
        printf("\n===== BANK MENU =====");
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Balance = %.2f", balance);
        }
        else if(choice == 2)
        {
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposit Successful");
        }
        else if(choice == 3)
        {
            printf("Enter amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful");
            }
            else
            {
                printf("Insufficient Balance");
            }
        }
        else if(choice == 4)
        {
            printf("Thank You");
            break;
        }
        else
        {
            printf("Invalid Choice");
        }
    }

    return 0;
}