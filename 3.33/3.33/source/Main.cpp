#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length = 0, k, j, breadth;

	printf("Enter a length¡G");
	scanf_s("%d", &length);
	printf("Enter a breadth¡G");
	scanf_s("%d", &breadth);
	printf("\n");

	for (k = 0; k < length; k++)
	{
		if ((k == 0) || (k == (length - 1)))
			for (j = 0; j < breadth; j++)
				printf("*");
		else
		{
			for (j = 0; j < breadth; j++)
				if ((j == 0) || (j == (breadth - 1)))
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}