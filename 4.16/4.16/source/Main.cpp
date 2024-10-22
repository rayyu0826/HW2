#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, j;

	printf("(A)		(B)		(C)		(D)\n");
	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < k + 1; j++)
			printf("*");
		for (j = 0; j < 9 - k; j++)
			printf(" ");
		printf("	");
		for (j = 0; j < 10 - k; j++)
			printf("*");
		for (j = 0; j < k; j++)
			printf(" ");
		printf("	");
		for (j = 0; j < 10 - k; j++)
			printf(" ");
		for (j = 0; j < k + 1; j++)
			printf("*");
		printf("	  ");
		for (j = 0; j < k; j++)
			printf(" ");
		for (j = 0; j < 10 - k; j++)
			printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}