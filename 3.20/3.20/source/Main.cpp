#include <stdio.h>

int main() {
    float hoursWorked, hourlyRate, salary;
    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%f", &hoursWorked);

        if (hoursWorked == -1) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%f", &hourlyRate);

        if (hoursWorked > 40) {
            salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
        }
        else {
            salary = hoursWorked * hourlyRate;
        }
        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}
