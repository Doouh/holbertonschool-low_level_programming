#include "holberton.h"

/**
* pr - Entry point
* @n: int variable
*
*/

void pr(int n)
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
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
			_putchar('0' + i);
		else
			pr(i);
	}
	_putchar('\n');
}
