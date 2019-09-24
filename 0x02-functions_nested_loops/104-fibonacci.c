#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	double x, y, z;
	int i;

	x = 1;
	y = 2;

	printf("1, 2\n");

	for (i = 0; i < 96; i++)
	{
		z = x + y;
		if (i != 95)
			printf("%.f, ", z);
		else
			printf("%.f\n", z);
		x = y;
		y = z;
	}

	return (0);
}
