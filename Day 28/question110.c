#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accountNo);

    printf("Enter Customer Name: ");
    scanf("%s", b.name);

    printf("Enter Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    b.balance += amount;

    printf("\nBank Account Details\n");
    printf("Account No : %d\n", b.accountNo);
    printf("Name       : %s\n", b.name);
    printf("Balance    : %.2f\n", b.balance);

    return 0;
}