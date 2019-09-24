#include "holberton.h"

/**
* print_last_digit - Entry point
* @v: int variable
*
* Return: Always 0 (Success)
*/

int print_last_digit(int v)
{
	int r;

	r = v % 10;

	if (r < 0)
	{
		r = r * -1;
	}

	_putchar('0' + r);
	return (r);
}
