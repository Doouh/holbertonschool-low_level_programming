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
	int i;

	ac = 0;
	x = 0;
	y = 1;

	for (i = 1; i < 33; i++)
	{
		z = x + y;
		if ((int)z % (int)2.00000 == 0.00000)
			ac = ac + z;

		x = y;
		y = z;
	}

	printf("%.f\n", ac);
	return (0);
}
