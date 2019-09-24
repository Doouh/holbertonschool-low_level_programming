#include "holberton.h"

/**
* print_to_98 - Entry point
* @n: int variable
*
* Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	int i, d1, d2, d3, ban = 0;

	i = n;
	if (n <= 98)
	{
		while (i <= 98)
		{
			if (i < 0)
			{
				_putchar('-');
				i = i * -1;
				ban = 1;
			}
			if (i >= 0 && i <= 9)
			{
				_putchar('0' + i);
			}
			else
			{
				d1 = i / 10;
				d2 = i % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
			}
			if (ban == 1)
			{
				i = i * -1;
				ban = 0;
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i == 99 || i == 98)
			{
				d1 = i / 10;
				d2 = i % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
			}
			else
			{
				d1 = i / 100;
				d2 = (i / 10) % 10;
				d3 = i % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
				_putchar('0' + d3);
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			i--;
		}
	}
	_putchar('\n');
}
