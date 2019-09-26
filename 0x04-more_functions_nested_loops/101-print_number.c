#include "holberton.h"
#include <stdio.h>

/**
* print_number - Entry point
* @n: int variable
*/

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + (i % 10));
}
