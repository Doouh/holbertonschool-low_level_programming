#include "holberton.h"

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int i, m, a, d1, d2, d3;
		for (i = 0; i < n+1; i++)
		{
			a = 0;
			_putchar(48);
			for (m = 0; m < n; m++)
			{	
				if((a + i) > 99)
				{
					d1 = (a + i) / 100;
					d2 = ((a + i) / 10) % 10;
					d3 = (a + i) % 10;
					_putchar(',');
					_putchar(' ');
					_putchar('0' + d1);
					_putchar('0' + d2);
					_putchar('0' + d3);
				}
				else if((a + i) > 9)
				{
					d1 = (a + i) / 10;
					d2 = (a + i) % 10;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + d1);
					_putchar('0' + d2);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (a + i));
				}
				a = a + i;
			}
			_putchar('\n');
		}
	}
}
