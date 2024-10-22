#include <stdio.h>
#include <stdlib.h>

int main() {
	float interest, principal, rate, days;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1) {
			break;
		}

		printf("\nEnter interest rate:");
		scanf_s("%f", &rate);

		printf("\nEnter term of the loan in days:");
		scanf_s("%f", &days);

		interest = principal * rate * days / 365;

		printf("The interest charge is $%.2f\n\n", interest);

	}
	system("pause");
	return 0;
}