#include <stdio.h>
#include <stdlib.h>

int main()
{
	int investment = 5000, year;
	float rate = 0.1;

	for (year = 1; year <= 15; year++)
	{
		printf("%2d year investment of $%6d rate is %.01f%%\n", year, investment, rate * 100);
		investment += investment * rate;
		rate += 0.005;
	}
	system("pause");
	return 0;
}