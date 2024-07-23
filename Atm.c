#include <stdio.h>
int amount = 0, deposit, withdraw;
int choice, pin, k;
char transaction = 'y';

void main()
{
    while (pin == 1999)

    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &pin);
        if (pin != 1999)
            printf("PLEASE ENTER VALID PASSWORD:\n");
    }
    do
    {
        printf("****welcome to ATM srvice*****\n");
        printf("1.  check balance\n");
        printf("2.  withdraw CASH\n");
        printf("3.  deposit CASH\n");
        printf("4.  quit\n");
        printf("*******?*******?*\n\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nYOUR BALANCE IN Rs :%lu", amount);
            break;
        case 2:
            printf("\nENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100:");
            }
            else if (withdraw > (amount - 500))
            {
                printf("\n INSUFFICENT BALANCE:");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH:");
                printf("\n YOUR CURRENT BALANCE IS:%lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT:");
            scanf("%d", &deposit);
            amount = amount + deposit;
            printf("YOUR BALANCE IS: %lu", amount);
            break;
        case 4:
            printf("\n THANK U USING ATM:");
            break;
        default:
            printf("INVALID CHOICE:");
        }
        printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n):\n");

        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\nTNANKS FOR USING OUT ATM SERVICE:");
}
