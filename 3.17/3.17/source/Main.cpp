#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance, charges, credits, creditLimit, newBalance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &accountNumber);

        if (accountNumber == -1) {
            break;
        }        
        printf("Enter beginning balance: ");
        scanf_s("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf_s("%lf", &charges);

        printf("Enter total credits: ");
        scanf_s("%lf", &credits);

        printf("Enter credit limit: ");
        scanf_s("%lf", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
            printf("Account: \t%d\n", accountNumber);
            printf("Credit limit: %.2lf\n", creditLimit);
            printf("Balance: \t%.2lf\n", newBalance);
            printf("Credit limit exceeded.\n");
        }
        printf("\n");
    }
    return 0;
}