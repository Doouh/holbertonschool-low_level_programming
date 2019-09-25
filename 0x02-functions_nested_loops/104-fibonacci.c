#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long x, y, z;
	int i;

	x = 1;
	y = 2;

	printf("1, 2, ");

	for (i = 0; i < 96; i++)
	{
		z = x + y;
		if (i != 95)
			printf("%lu, ", z);
		else
			printf("%lu\n", z);
		x = y;
		y = z;
	}

	return (0);
}
