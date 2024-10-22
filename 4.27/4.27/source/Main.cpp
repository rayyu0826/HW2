#include <stdio.h>
#include <stdlib.h>

int main()
{
	int side1, side2, side3, sum = 1;

	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = side1; side2 <= 500; side2++)
		{
			for (side3 = side2; side3 <= 500; side3++)
			{
				if ((side1 * side1 + side2 * side2 == side3 * side3) || (side2 * side2 + side3 * side3 == side1 * side1) ||
					(side3 * side3 + side1 * side1 == side2 * side2))
				{
					printf("The %4d method¡Gside1 is %3d side2 is %3d side3 is %3d\n", sum, side1, side2, side3);
					sum++;
				}
			}
		}
	}

	system("pause");
	return 0;
}