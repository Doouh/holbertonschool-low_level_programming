#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i, m = 0, acu = 1, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			acu = acu * i;

			if (i > m)
				m = i;

			if (acu == n)
			{
				n = i;
			}
		}
	}

	printf("%lu\n", m);
	return (0);
}
