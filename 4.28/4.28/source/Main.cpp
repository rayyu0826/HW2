#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code = 0, managers, workers, mission, pieceworkers;
	float time = 0, salary = 0;

	printf("Please enter your position code¡G");
	scanf_s("%d", &code);
	switch (code)
	{
	case 1://managers
		printf("Please your employee salary¡G");
		scanf_s("%f", &salary);
		printf("Your employee salary is¡G%.02f\n", salary);
		break;
	case 2:
		printf("Please your hourly rate¡G");
		scanf_s("%f", &salary);
		printf("Please enter the hours you work¡G");
		scanf_s("%f", &time);
		if (time > 40)
			printf("Your employee salary is¡G%.02f\n", (time - 40) * salary * 1.5 + 40 * salary);
		else
			printf("Your employee salary is¡G%.02f\n", time * salary);
		break;
	case 3:
		printf("Enter your total weekly sales¡G");
		scanf_s("%f", &salary);
		printf("Your employee salary is¡G%.02f\n", 250 + salary * 0.057);
		break;
	case 4:
		printf("Produce several items¡G");
		scanf_s("%f", &time);
		printf("How much is the profit from selling an item¡G");
		scanf_s("%f", &salary);
		printf("Your employee salary is¡G%.02f\n", time * salary);
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}