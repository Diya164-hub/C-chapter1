/* Create a structure representing a bank account of a 
customer. What fields did you use and why? */

#include <stdio.h>
#include <string.h>

struct BankAccount
{
    int accountNumber;
    char customerName[50];
    char bankName[50];
    float balance;
    char accountType[20];
};

int main()
{
    struct BankAccount acc; // THIS LINE IS CORRECT

    acc.accountNumber = 101;
    strcpy(acc.customerName, "Rahul");
    strcpy(acc.bankName, "SBI");
    acc.balance = 5000.50;
    strcpy(acc.accountType, "Savings");

    // print output
    printf("Account Number: %d\n", acc.accountNumber);
    printf("Customer Name: %s\n", acc.customerName);
    printf("Bank Name: %s\n", acc.bankName);
    printf("Balance: %.2f\n", acc.balance);
    printf("Account Type: %s\n", acc.accountType);

    return 0;
}
