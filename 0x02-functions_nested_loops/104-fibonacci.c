#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long x, y, z, ppx, spx, ppy, spy, ppz, spz;
	int i;

	x = 1;
	y = 2;
	printf("1, 2, ");
	for (i = 0; i < 90; i++)
	{
		z = x + y;
		printf("%lu, ", (unsigned long) z);
		x = y;
		y = z;
	}
	ppx = x / 10000000000;
	spx = x % 10000000000;
	ppy = y / 10000000000;
	spy = y % 10000000000;
	for (i = 90; i < 96; i++)
	{
		ppz = ppx + ppy;
		spz = spx + spy;
		if (i == 91 || i == 92 || i == 94 || i == 95)
		{
			spz = spz - 10000000000;
			ppz = ppz + 1;
		}
		if (i != 95)
			printf("%lu%lu, ", (unsigned long) ppz, (unsigned long) spz);
		else
			printf("%lu%lu\n", (unsigned long) ppz, (unsigned long) spz);
		ppx = ppy;
		spx = spy;
		ppy = ppz;
		spy = spz;
	}

	return (0);
}
