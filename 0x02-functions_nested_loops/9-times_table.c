#include "holberton.h"

/**
* times_table - Entry point
*
*/

void times_table(void)
{
	int i, m, a, d1, d2;

	for (i = 0; i < 10; i++)
	{
		a = 0;
		_putchar(48);
		for (m = 0; m < 9; m++)
		{
			if ((a + i) > 9)
			{
				d1 = (a + i) / 10;
				d2 = (a + i) % 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + d1);
				_putchar('0' + d2);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (a + i));
			}
			a = a + i;
		}
		_putchar('\n');
	}
}
