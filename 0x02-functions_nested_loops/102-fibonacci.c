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

	x = 0;
	y = 1;

	for (i = 1; i <= 50; i++)
	{
		z = x + y;
		printf("%.f, ", z);
		x = y;
		y = z;
	}
	return (0);
}
