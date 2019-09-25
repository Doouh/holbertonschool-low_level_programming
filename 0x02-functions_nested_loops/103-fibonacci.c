#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	double x, y, z, ac;
	int i, med;

	ac = 0;
	x = 0;
	y = 1;

	for (i = 1; i < 33; i++)
	{
		z = x + y;
		med = z;
		if (med % 2 == 0)
			ac = ac + z;

		x = y;
		y = z;
	}

	printf("%.f\n", ac);
	return (0);
}
