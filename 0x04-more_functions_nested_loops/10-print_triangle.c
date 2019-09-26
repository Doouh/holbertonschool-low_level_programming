#include "holberton.h"

/**
* print_triangle - Entry point
* @size: int variable
*
* Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int tope, i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		tope = size;
		while (i < size)
		{
			j = 1;
			while (j < tope)
			{
				_putchar(' ');
				j++;
			}
			k = tope;
			while (k <= size)
			{
				_putchar('#');
				k++;
			}
			tope--;
			_putchar('\n');
			i++;
		}
	}
}
