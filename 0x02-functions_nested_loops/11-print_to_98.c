#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - Entry point
* @n: int variable
*
* Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	int i;

	i = n;

	if (n <= 98)
	{
		for ( ; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for ( ; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
