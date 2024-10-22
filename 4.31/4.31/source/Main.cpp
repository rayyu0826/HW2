#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, j, slide = 0;

	printf("Determine the side lengths of your rhombus¡G");
	scanf_s("%d", &slide);
	for (k = 1; k <= slide; k++)
	{
		for (j = 0; j < slide - k; j++)
			printf(" ");
		for (j = 0; j < k; j++)
			printf("*");
		for (j = 0; j < k - 1; j++)
			printf("*");
		printf("\n");
	}
	for (k = slide - 1; k >= 1; k--)
	{
		for (j = 0; j < slide - k; j++)
			printf(" ");
		for (j = 0; j < k; j++)
			printf("*");
		for (j = 0; j < k - 1; j++)
			printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}