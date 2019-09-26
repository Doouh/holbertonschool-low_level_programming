#include "holberton.h"

/**
* print_diagonal - Entry point
* @n: int variable
*
* Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int i, j, tope;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		tope = 1;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < tope; j++)
			{
				if (j == tope - 1)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
			tope++;
		}
	}
}
