#include "holberton.h"

void pri(int);

/**
* pri - Entry point
* @n: int variable
*
*/

void pri(int n)
{
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

/**
* more_numbers - Entry point
*
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else
				pri(i);
		}
		_putchar('\n');
	}
}
